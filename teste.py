import sqlite3

DATABASE = 'meubanco.db'
TABLE_NAME = 'clientes'

def conectar_db():
    """Conecta ao banco de dados SQLite."""
    try:
        conexao = sqlite3.connect(DATABASE)
        return conexao
    except sqlite3.Error as e:
        print(f"Erro ao conectar ao banco de dados: {e}")
        return None

def criar_tabela(conexao):
    """Cria a tabela 'clientes' se ela não existir."""
    try:
        cursor = conexao.cursor()
        cursor.execute(f'''
            CREATE TABLE IF NOT EXISTS {TABLE_NAME} (
                nome TEXT
            )
        ''')
        conexao.commit()
        print(f"Tabela '{TABLE_NAME}' criada com sucesso (se não existia).")
    except sqlite3.Error as e:
        print(f"Erro ao criar a tabela: {e}")

def adicionar_nome(conexao, nome):
    """Adiciona um nome ao banco de dados."""
    try:
        cursor = conexao.cursor()
        cursor.execute(f"INSERT INTO {TABLE_NAME} (nome) VALUES (?)", (nome,))
        conexao.commit()
        print(f"Nome '{nome}' adicionado com sucesso.")
    except sqlite3.Error as e:
        print(f"Erro ao adicionar o nome: {e}")

def consultar_nomes(conexao, filtro=None):
    """Consulta nomes no banco de dados com um filtro opcional."""
    try:
        cursor = conexao.cursor()
        sql = f"SELECT nome FROM {TABLE_NAME}"
        if filtro:
            sql += f" WHERE nome LIKE ?"
            cursor.execute(sql, ('%' + filtro + '%',))
        else:
            cursor.execute(sql)

        resultados = cursor.fetchall()
        if resultados:
            print("\nNomes encontrados:")
            for linha in resultados:
                print(linha[0])
        else:
            print("Nenhum nome encontrado com o critério fornecido." if filtro else "Nenhum nome encontrado no banco de dados.")
    except sqlite3.Error as e:
        print(f"Erro ao consultar nomes: {e}")

def main():
    conexao = conectar_db()
    if not conexao:
        return

    criar_tabela(conexao)

    while True:
        print("\nOpções:")
        print("1 - Adicionar um nome")
        print("2 - Consultar nomes")
        print("3 - Sair")

        opcao = input("Escolha uma opção: ")

        if opcao == '1':
            nome_para_adicionar = input("Digite o nome que deseja adicionar: ")
            adicionar_nome(conexao, nome_para_adicionar)
        elif opcao == '2':
            filtro_consulta = input("Digite um termo para filtrar a consulta (ou deixe em branco para listar todos): ")
            consultar_nomes(conexao, filtro_consulta)
        elif opcao == '3':
            break
        else:
            print("Opção inválida. Tente novamente.")

    if conexao:
        conexao.close()
        print("Conexão com o banco de dados fechada.")

if __name__ == "__main__":
    main()