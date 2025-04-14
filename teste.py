import psycopg2

# Detalhes da conexão com o PostgreSQL
DB_HOST = "localhost"  # Ou o endereço do seu servidor PostgreSQL
DB_NAME = "postgres"        # Alterado para o nome do seu banco de dados
DB_USER = "postgres"  # Substitua pelo seu nome de usuário PostgreSQL
DB_PASSWORD = "root"  # Substitua pela sua senha PostgreSQL

def conectar_db():
    """Conecta ao banco de dados PostgreSQL."""
    try:
        conn = psycopg2.connect(host=DB_HOST, database=DB_NAME, user=DB_USER, password=DB_PASSWORD)
        cur = conn.cursor()
        return conn, cur
    except psycopg2.Error as e:
        print(f"Erro ao conectar ao banco de dados: {e}")
        return None, None

def cadastrar_pessoa(nome, idade):
    """Cadastra uma nova pessoa no banco de dados."""
    conn, cur = conectar_db()
    if conn:
        try:
            sql = "INSERT INTO pessoas (nome, idade) VALUES (%s, %s)"
            cur.execute(sql, (nome, idade))
            conn.commit()
            print(f"Pessoa '{nome}' cadastrada com sucesso.")
        except psycopg2.Error as e:
            conn.rollback()
            print(f"Erro ao cadastrar pessoa: {e}")
        finally:
            cur.close()
            conn.close()

def listar_pessoas():
    """Lista todas as pessoas cadastradas no banco de dados."""
    conn, cur = conectar_db()
    if conn:
        try:
            sql = "SELECT id, nome, idade FROM pessoas ORDER BY id"
            cur.execute(sql)
            pessoas = cur.fetchall()
            if pessoas:
                print("\n--- Pessoas Cadastradas ---")
                for pessoa in pessoas:
                    print(f"ID: {pessoa[0]}, Nome: {pessoa[1]}, Idade: {pessoa[2]}")
                print("---------------------------\n")
            else:
                print("Nenhuma pessoa cadastrada ainda.\n")
        except psycopg2.Error as e:
            print(f"Erro ao listar pessoas: {e}")
        finally:
            cur.close()
            conn.close()

def excluir_pessoa(pessoa_id):
    """Exclui uma pessoa do banco de dados pelo ID."""
    conn, cur = conectar_db()
    if conn:
        try:
            sql = "DELETE FROM pessoas WHERE id = %s"
            cur.execute(sql, (pessoa_id,))
            conn.commit()
            if cur.rowcount > 0:
                print(f"Pessoa com ID {pessoa_id} excluída com sucesso.")
            else:
                print(f"Nenhuma pessoa encontrada com o ID {pessoa_id}.")
        except psycopg2.Error as e:
            conn.rollback()
            print(f"Erro ao excluir pessoa: {e}")
        finally:
            cur.close()
            conn.close()

def main():
    while True:
        print("\n--- Menu ---")
        print("1. Cadastrar Pessoa")
        print("2. Listar Pessoas")
        print("3. Excluir Pessoa")
        print("4. Sair")

        opcao = input("Escolha uma opção: ")

        if opcao == "1":
            nome = input("Digite o nome da pessoa: ")
            while True:
                try:
                    idade_str = input("Digite a idade da pessoa: ")
                    idade = int(idade_str)
                    if idade >= 0:
                        break
                    else:
                        print("A idade não pode ser negativa.")
                except ValueError:
                    print("Por favor, digite um número inteiro válido para a idade.")
            cadastrar_pessoa(nome, idade)
        elif opcao == "2":
            listar_pessoas()
        elif opcao == "3":
            listar_pessoas()  # Mostrar a lista antes de excluir
            while True:
                id_excluir_str = input("Digite o ID da pessoa que deseja excluir: ")
                try:
                    id_excluir = int(id_excluir_str)
                    excluir_pessoa(id_excluir)
                    break
                except ValueError:
                    print("Por favor, digite um número inteiro válido para o ID.")
        elif opcao == "4":
            print("Saindo do programa.")
            break
        else:
            print("Opção inválida. Tente novamente.")

if __name__ == "__main__":
    main()