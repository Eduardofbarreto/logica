import psycopg2

def inserir_pessoa(conn):
    nome = input("Nome: ")
    idade = int(input("Idade: "))
    
    with conn.cursor() as cur:
        cur.execute("INSERT INTO pessoas (nome, idade) VALUES (%s, %s)", (nome, idade))
        conn.commit()
        
    print("Pessoa inserida com sucesso!")
    
def listar_pessoas(conn):
    with conn.cursor() as cur:
        cur.execute("SELECT id, nome, idade FROM pessoas ORDER BY id")
        resultados = cur.fetchall()
        
        print("\n ----- Lista de pessoas -----")
        for row in resultados:
            print(f"ID: {row[0]}, Nome: {row[1]}, Idade: {row[2]}")
            
def atualizar_pessoa(conn):
    id_pessoa = int(input("ID da pessoa para atualizar: "))
    nome = input("Novo nome: ")
    idade = int(input("Nova idade: "))
    
    with conn.cursor() as cur:
        cur.execute(
            "UPDATE pessoas SET nome=%s, idade=%s WHERE id=%s",
            (nome, idade, id_pessoa)
        )
        conn.commit()
        
        print("Pessoa atualizada com sucesso!")
        
def deletar_pessoa(conn):
    id_pessoa = int(input("ID da pessoa para deletar: "))
    
    with conn.cursor() as cur:
        cur.execute("DELETE FROM pessoas WHERE id=%s", (id_pessoa))
        conn.commit()
        
    print("Pessoa deletada com sucesso!")
    
def main():
    try:
        conn = psycopg2.connect(
            dbname="meu_novo_banco_de_dados",
            user="postgres",
            password="root",
            host="localhost"
        )
        
        while True:
            print("\n ===== Menu CRUD pessoas =====")
            print("1. Inserir pessoa")
            print("2. Listar pessoas")
            print("3. Atualizar pessoa")
            print("4. Deletar pessoa")
            print("0. Sair")
            
            opcao = input("Escolha uma opção: ")
            
            if opcao == '1':
                inserir_pessoa(conn)
            elif opcao == '2':
                listar_pessoas(conn)
            elif opcao == '3':
                atualizar_pessoa(conn)
            elif opcao == '4':
                deletar_pessoa(conn)
            elif opcao == '0':
                print("Saindo...")
                break
            else:
                print("Opção inválida!")
                
        conn.close()
        
    except Exception as e:
        print("Erro: ", e)
        
if __name__ == "__main__":
    main()
