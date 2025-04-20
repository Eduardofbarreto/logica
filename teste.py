import psycopg2

class Cliente:
    def __init__(self, id, nome, email="", telefone=""):
        self.id = id
        self.nome = nome
        self.email = email
        self.telefone = telefone

    def exibir(self):
        print(f"ID: {self.id}")
        print(f"Nome: {self.nome}")
        print(f"Email: {self.email}")
        print(f"Telefone: {self.telefone}")

class Contato:
    def __init__(self, id, cliente_id, nome, email="", telefone="", cargo=""):
        self.id = id
        self.cliente_id = cliente_id
        self.nome = nome
        self.email = email
        self.telefone = telefone
        self.cargo = cargo

    def exibir(self):
        print(f"ID: {self.id}")
        print(f"Cliente ID: {self.cliente_id}")
        print(f"Nome: {self.nome}")
        print(f"Email: {self.email}")
        print(f"Telefone: {self.telefone}")
        print(f"Cargo: {self.cargo}")

class Oportunidade:
    def __init__(self, id, cliente_id, nome, descricao="", valor=0.0, stage="Prospect"):
        self.id = id
        self.cliente_id = cliente_id
        self.nome = nome
        self.descricao = descricao
        self.valor = valor
        self.stage = stage

    def exibir(self):
        print(f"ID: {self.id}")
        print(f"Cliente ID: {self.cliente_id}")
        print(f"Nome: {self.nome}")
        print(f"Descrição: {self.descricao}")
        print(f"Valor: {self.valor}")
        print(f"Stage: {self.stage}")

class GerenciadorClientes:
    def __init__(self, db_params):
        self.db_params = db_params
        self.clientes = self._carregar_clientes_do_banco()

    def _conectar(self):
        return psycopg2.connect(**self.db_params)

    def _carregar_clientes_do_banco(self):
        clientes = []
        try:
            with self._conectar() as conn:
                with conn.cursor() as cur:
                    cur.execute("SELECT id, nome, email, telefone FROM crm ORDER BY nome;")
                    for row in cur.fetchall():
                        clientes.append(Cliente(row[0], row[1], row[2], row[3]))
        except psycopg2.Error as e:
            print(f"Erro ao carregar clientes do banco de dados: {e}")
        return clientes

    def adicionar_cliente(self, nome, email="", telefone=""):
        try:
            with self._conectar() as conn:
                with conn.cursor() as cur:
                    cur.execute(
                        "INSERT INTO crm (nome, email, telefone) VALUES (%s, %s, %s) RETURNING id;",
                        (nome, email, telefone),
                    )
                    novo_id = cur.fetchone()[0]
                    conn.commit()
                    novo_cliente = Cliente(novo_id, nome, email, telefone)
                    self.clientes.append(novo_cliente)
                    print(f"Cliente adicionado com ID: {novo_id}")
                    return novo_cliente
        except psycopg2.Error as e:
            conn.rollback()
            print(f"Erro ao adicionar cliente: {e}")
            return None

    def buscar_cliente(self, id):
        for cliente in self.clientes:
            if cliente.id == id:
                return cliente
        return None

    def listar_clientes(self):
        if not self.clientes:
            print("Nenhum cliente cadastrado.")
            return
        print("Lista de Clientes:")
        for cliente in self.clientes:
            cliente.exibir()
            print("-" * 10)

class GerenciadorContatos:
    def __init__(self, db_params):
        self.db_params = db_params

    def _conectar(self):
        return psycopg2.connect(**self.db_params)

    def adicionar_contato(self, cliente_id, nome, email="", telefone="", cargo=""):
        try:
            with self._conectar() as conn:
                with conn.cursor() as cur:
                    cur.execute(
                        "INSERT INTO contacts (crm_id, nome, email, telefone, cargo) VALUES (%s, %s, %s, %s, %s) RETURNING id;",
                        (cliente_id, nome, email, telefone, cargo),
                    )
                    novo_id = cur.fetchone()[0]
                    conn.commit()
                    print(f"Contato adicionado com ID: {novo_id}")
                    return Contato(novo_id, cliente_id, nome, email, telefone, cargo)
        except psycopg2.Error as e:
            conn.rollback()
            print(f"Erro ao adicionar contato: {e}")
            return None

    def buscar_contatos_por_cliente(self, cliente_id):
        contatos = []
        try:
            with self._conectar() as conn:
                with conn.cursor() as cur:
                    cur.execute(
                        "SELECT id, nome, email, telefone, cargo FROM contacts WHERE crm_id = %s ORDER BY nome;",
                        (cliente_id,),
                    )
                    for row in cur.fetchall():
                        contatos.append(Contato(row[0], cliente_id, row[1], row[2], row[3], row[4]))
        except psycopg2.Error as e:
            print(f"Erro ao buscar contatos: {e}")
        return contatos

    def buscar_contato(self, id):
        try:
            with self._conectar() as conn:
                with conn.cursor() as cur:
                    cur.execute("SELECT id, crm_id, nome, email, telefone, cargo FROM contacts WHERE id = %s;", (id,))
                    row = cur.fetchone()
                    if row:
                        return Contato(row[0], row[1], row[2], row[3], row[4], row[5])
                    return None
        except psycopg2.Error as e:
            print(f"Erro ao buscar contato: {e}")
            return None

class GerenciadorOportunidades:
    def __init__(self, db_params):
        self.db_params = db_params

    def _conectar(self):
        return psycopg2.connect(**self.db_params)

    def adicionar_oportunidade(self, cliente_id, nome, descricao="", valor=0.0, stage="Prospect"):
        try:
            with self._conectar() as conn:
                with conn.cursor() as cur:
                    cur.execute(
                        "INSERT INTO opportunities (crm_id, nome, descricao, valor, stage) VALUES (%s, %s, %s, %s, %s) RETURNING id;",
                        (cliente_id, nome, descricao, valor, stage),
                    )
                    novo_id = cur.fetchone()[0]
                    conn.commit()
                    print(f"Oportunidade adicionada com ID: {novo_id}")
                    return Oportunidade(novo_id, cliente_id, nome, descricao, valor, stage)
        except psycopg2.Error as e:
            conn.rollback()
            print(f"Erro ao adicionar oportunidade: {e}")
            return None

    def buscar_oportunidades_por_cliente(self, cliente_id):
        oportunidades = []
        try:
            with self._conectar() as conn:
                with conn.cursor() as cur:
                    cur.execute(
                        "SELECT id, nome, descricao, valor, stage FROM opportunities WHERE crm_id = %s ORDER BY nome;",
                        (cliente_id,),
                    )
                    for row in cur.fetchall():
                        oportunidades.append(Oportunidade(row[0], cliente_id, row[1], row[2], float(row[3]), row[4]))
        except psycopg2.Error as e:
            print(f"Erro ao buscar oportunidades: {e}")
        return oportunidades

    def buscar_oportunidade(self, id):
        try:
            with self._conectar() as conn:
                with conn.cursor() as cur:
                    cur.execute("SELECT id, crm_id, nome, descricao, valor, stage FROM opportunities WHERE id = %s;", (id,))
                    row = cur.fetchone()
                    if row:
                        return Oportunidade(row[0], row[1], row[2], row[3], float(row[4]), row[5])
                    return None
        except psycopg2.Error as e:
            print(f"Erro ao buscar oportunidade: {e}")
            return None

if __name__ == "__main__":
    db_params = {
        'host': 'edu_barreto',
        'database': 'seu_banco_de_dados',  # Substitua pelo seu banco de dados
        'user': 'postgres',
        'password': 'root'
    }

    gerenciador_clientes = GerenciadorClientes(db_params)
    gerenciador_contatos = GerenciadorContatos(db_params)
    gerenciador_oportunidades = GerenciadorOportunidades(db_params)

    # Adicionar um novo cliente
    novo_cliente = gerenciador_clientes.adicionar_cliente("Empresa Python Banco", "python.banco@email.com", "11 5555-5555")

    if novo_cliente:
        # Listar todos os clientes
        gerenciador_clientes.listar_clientes()

        # Adicionar um contato ao cliente recém-adicionado
        gerenciador_contatos.adicionar_contato(novo_cliente.id, "Maria Souza", "maria.souza@empresa.com", "11 6666-6666", "Analista de Vendas")

        # Adicionar uma oportunidade ao cliente recém-adicionado
        gerenciador_oportunidades.adicionar_oportunidade(novo_cliente.id, "Projeto Python CRM", "Desenvolvimento do CRM em Python", 10000.00, "Proposta")

        # Buscar contatos do cliente
        contatos_cliente = gerenciador_contatos.buscar_contatos_por_cliente(novo_cliente.id)
        print(f"\nContatos do cliente {novo_cliente.nome}:")
        for contato in contatos_cliente:
            contato.exibir()
            print("-" * 10)

        # Buscar oportunidades do cliente
        oportunidades_cliente = gerenciador_oportunidades.buscar_oportunidades_por_cliente(novo_cliente.id)
        print(f"\nOportunidades do cliente {novo_cliente.nome}:")
        for oportunidade in oportunidades_cliente:
            oportunidade.exibir()
            print("-" * 10)