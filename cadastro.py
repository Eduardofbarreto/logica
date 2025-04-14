import sqlite3
import tkinter as tk
from tkinter import ttk, messagebox

class CadastroPessoasApp:
    def __init__(self, root):
        self.root = root
        self.root.title("Cadastro de Pessoas")

        self.conexao = self.conectar_banco()
        self.criar_tabela_pessoas()

        self.nome_var = tk.StringVar()
        self.idade_var = tk.IntVar()
        self.id_excluir_var = tk.IntVar()
        self.nome_busca_var = tk.StringVar()

        self.criar_widgets()

    def conectar_banco(self):
        """Conecta ao banco de dados banco.db."""
        try:
            conexao = sqlite3.connect('banco.db')
            return conexao
        except sqlite3.Error as e:
            messagebox.showerror("Erro", f"Erro ao conectar ao banco de dados: {e}")
            return None

    def criar_tabela_pessoas(self):
        """Cria a tabela 'pessoas' se ela não existir."""
        if self.conexao:
            cursor = self.conexao.cursor()
            try:
                cursor.execute("""
                    CREATE TABLE IF NOT EXISTS pessoas (
                        id INTEGER PRIMARY KEY AUTOINCREMENT,
                        nome TEXT NOT NULL,
                        idade INTEGER NOT NULL
                    )
                """)
                self.conexao.commit()
                print("Tabela 'pessoas' criada ou já existente.")
            except sqlite3.Error as e:
                messagebox.showerror("Erro", f"Erro ao criar a tabela 'pessoas': {e}")

    def inserir_pessoa(self):
        """Insere uma nova pessoa na tabela 'pessoas'."""
        if self.conexao:
            nome = self.nome_var.get()
            idade = self.idade_var.get()
            if nome and idade >= 0:
                cursor = self.conexao.cursor()
                try:
                    cursor.execute("INSERT INTO pessoas (nome, idade) VALUES (?, ?)", (nome, idade))
                    self.conexao.commit()
                    messagebox.showinfo("Sucesso", f"Pessoa '{nome}' com idade {idade} inserida com sucesso.")
                    self.nome_var.set("")
                    self.idade_var.set(0)
                    self.consultar_pessoas() # Atualiza a lista após a inserção
                except sqlite3.Error as e:
                    messagebox.showerror("Erro", f"Erro ao inserir pessoa: {e}")
            else:
                messagebox.showerror("Erro", "Por favor, preencha o nome e uma idade válida.")

    def consultar_pessoas(self, nome_busca=None):
        """Consulta pessoas na tabela 'pessoas'. Pode filtrar por nome."""
        if self.conexao:
            self.tree.delete(*self.tree.get_children()) # Limpa a lista atual
            cursor = self.conexao.cursor()
            try:
                busca = self.nome_busca_var.get() if nome_busca is None else nome_busca
                if busca:
                    cursor.execute("SELECT id, nome, idade FROM pessoas WHERE nome LIKE ?", ('%' + busca + '%',))
                else:
                    cursor.execute("SELECT id, nome, idade FROM pessoas")
                pessoas = cursor.fetchall()
                if pessoas:
                    for pessoa in pessoas:
                        self.tree.insert("", tk.END, values=pessoa)
                else:
                    messagebox.showinfo("Info", "Nenhuma pessoa encontrada.")
            except sqlite3.Error as e:
                messagebox.showerror("Erro", f"Erro ao consultar pessoas: {e}")

    def excluir_pessoa(self):
        """Exclui uma pessoa da tabela 'pessoas' com base no ID."""
        if self.conexao:
            try:
                id_excluir = self.id_excluir_var.get()
                if id_excluir > 0:
                    cursor = self.conexao.cursor()
                    cursor.execute("DELETE FROM pessoas WHERE id = ?", (id_excluir,))
                    self.conexao.commit()
                    if cursor.rowcount > 0:
                        messagebox.showinfo("Sucesso", f"Pessoa com ID {id_excluir} excluída com sucesso.")
                        self.id_excluir_var.set(0)
                        self.consultar_pessoas() # Atualiza a lista após a exclusão
                    else:
                        messagebox.showerror("Erro", f"Nenhuma pessoa encontrada com o ID {id_excluir}.")
                else:
                    messagebox.showerror("Erro", "Por favor, digite um ID válido para excluir.")
            except ValueError:
                messagebox.showerror("Erro", "ID inválido. Digite um número inteiro.")
            except sqlite3.Error as e:
                messagebox.showerror("Erro", f"Erro ao excluir pessoa: {e}")

    def fechar_banco(self):
        """Fecha a conexão com o banco de dados."""
        if self.conexao:
            self.conexao.close()
            print("Conexão com o banco de dados fechada.")
        self.root.destroy()

    def criar_widgets(self):
        # --- Frame de Inserção ---
        inserir_frame = ttk.LabelFrame(self.root, text="Inserir Nova Pessoa")
        inserir_frame.pack(padx=10, pady=10, fill="x")

        ttk.Label(inserir_frame, text="Nome:").grid(row=0, column=0, padx=5, pady=5, sticky="w")
        ttk.Entry(inserir_frame, textvariable=self.nome_var).grid(row=0, column=1, padx=5, pady=5, sticky="ew")

        ttk.Label(inserir_frame, text="Idade:").grid(row=1, column=0, padx=5, pady=5, sticky="w")
        ttk.Entry(inserir_frame, textvariable=self.idade_var).grid(row=1, column=1, padx=5, pady=5, sticky="ew")

        ttk.Button(inserir_frame, text="Inserir", command=self.inserir_pessoa).grid(row=2, column=0, columnspan=2, padx=5, pady=10, sticky="ew")

        # --- Frame de Consulta ---
        consultar_frame = ttk.LabelFrame(self.root, text="Consultar Pessoas")
        consultar_frame.pack(padx=10, pady=10, fill="x")

        ttk.Label(consultar_frame, text="Buscar por Nome:").grid(row=0, column=0, padx=5, pady=5, sticky="w")
        ttk.Entry(consultar_frame, textvariable=self.nome_busca_var).grid(row=0, column=1, padx=5, pady=5, sticky="ew")
        ttk.Button(consultar_frame, text="Buscar", command=self.consultar_pessoas).grid(row=0, column=2, padx=5, pady=5, sticky="ew")
        ttk.Button(consultar_frame, text="Listar Todos", command=lambda: self.consultar_pessoas("")).grid(row=1, column=0, columnspan=3, padx=5, pady=5, sticky="ew")

        # --- Frame da Lista de Pessoas ---
        lista_frame = ttk.LabelFrame(self.root, text="Lista de Pessoas")
        lista_frame.pack(padx=10, pady=10, fill="both", expand=True)

        self.tree = ttk.Treeview(lista_frame, columns=("ID", "Nome", "Idade"), show="headings")
        self.tree.heading("ID", text="ID")
        self.tree.heading("Nome", text="Nome")
        self.tree.heading("Idade", text="Idade")
        self.tree.pack(fill="both", expand=True)

        # --- Frame de Exclusão ---
        excluir_frame = ttk.LabelFrame(self.root, text="Excluir Pessoa")
        excluir_frame.pack(padx=10, pady=10, fill="x")

        ttk.Label(excluir_frame, text="ID para Excluir:").grid(row=0, column=0, padx=5, pady=5, sticky="w")
        ttk.Entry(excluir_frame, textvariable=self.id_excluir_var).grid(row=0, column=1, padx=5, pady=5, sticky="ew")

        ttk.Button(excluir_frame, text="Excluir", command=self.excluir_pessoa).grid(row=1, column=0, columnspan=2, padx=5, pady=10, sticky="ew")

        # --- Botão de Fechar ---
        ttk.Button(self.root, text="Fechar", command=self.fechar_banco).pack(pady=10, fill="x", padx=10)

        # Carregar a lista inicial de pessoas
        self.consultar_pessoas()

if __name__ == "__main__":
    root = tk.Tk()
    app = CadastroPessoasApp(root)
    root.mainloop()