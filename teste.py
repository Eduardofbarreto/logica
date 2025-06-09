class Conta:
    def __init__(self, numero, nome):
        self.__numero = numero
        self.__nome = nome
        self.__saldo = 0.0

    def get_numero(self):
        return self.__numero

    def get_nome(self):
        return self.__nome

    def get_saldo(self):
        return self.__saldo

    def depositar(self, valor):
        if valor > 0:
            self.__saldo += valor

    def sacar(self, valor):
        if 0 < valor <= self.__saldo:
            self.__saldo -= valor
            return True
        return False

    def mostrar_saldo(self):
        print(f"Titular: {self.__nome}")
        print(f"Saldo: R$ {self.__saldo:.2f}")


contas = []

def buscar_conta(numero):
    for conta in contas:
        if conta.get_numero() == numero:
            return conta
    return None

def criar_conta():
    try:
        numero = int(input("Número da nova conta: "))
        if buscar_conta(numero):
            print("Conta já existe!")
            return
        nome = input("Nome do titular: ")
        contas.append(Conta(numero, nome))
        print("Conta criada com sucesso!")
    except ValueError:
        print("Entrada inválida.")

def ver_saldo():
    try:
        numero = int(input("Número da conta: "))
        conta = buscar_conta(numero)
        if conta:
            conta.mostrar_saldo()
        else:
            print("Conta não encontrada.")
    except ValueError:
        print("Número inválido.")

def depositar_valor():
    try:
        numero = int(input("Número da conta: "))
        conta = buscar_conta(numero)
        if conta:
            valor = float(input("Valor para depositar: R$ "))
            conta.depositar(valor)
            print("Depósito realizado.")
        else:
            print("Conta não encontrada.")
    except ValueError:
        print("Entrada inválida.")

def sacar_valor():
    try:
        numero = int(input("Número da conta: "))
        conta = buscar_conta(numero)
        if conta:
            valor = float(input("Valor para sacar: R$ "))
            if conta.sacar(valor):
                print("Saque realizado.")
            else:
                print("Saldo insuficiente ou valor inválido.")
        else:
            print("Conta não encontrada.")
    except ValueError:
        print("Entrada inválida.")

def menu():
    while True:
        print("\n--- Menu Bancário ---")
        print("1. Criar conta")
        print("2. Ver saldo")
        print("3. Depositar")
        print("4. Sacar")
        print("0. Sair")

        escolha = input("Escolha: ")

        if escolha == "1":
            criar_conta()
        elif escolha == "2":
            ver_saldo()
        elif escolha == "3":
            depositar_valor()
        elif escolha == "4":
            sacar_valor()
        elif escolha == "0":
            print("Saindo...")
            break
        else:
            print("Opção inválida.")

if __name__ == "__main__":
    menu()
