import math

class Dados:
    def __init__(self):
        self.base = 0
        self.altura = 0
        self.area = 0
        self.pi = 3.14159
        self.raio = 0
        self.lado = 0
        self.comprimento = 0

    # Método para coletar dados do triângulo
    def coletar_dados_triangulo(self):
        self.base = float(input("Digite a base do triângulo: "))
        self.altura = float(input("Digite a altura do triângulo: "))

    # Método para coletar dados do círculo
    def coletar_dados_circulo(self):
        self.raio = float(input("Digite o raio do círculo: "))

    # Método para coletar dados do quadrado
    def coletar_dados_quadrado(self):
        self.lado = float(input("Digite um lado do quadrado: "))

    # Método para coletar dados do retângulo
    def coletar_dados_retangulo(self):
        self.comprimento = float(input("Digite o comprimento do retângulo: "))
        self.altura = float(input("Digite a altura do retângulo: "))

    # Método para calcular a área
    def calcular(self):
        print("O resultado é:", self.area)
        print()

# Classe Triângulo
class Triangulo(Dados):
    def __init__(self):
        super().__init__()

    def calcular(self):
        self.area = (self.base * self.altura) / 2
        super().calcular()

# Classe Círculo
class Circulo(Dados):
    def __init__(self):
        super().__init__()

    def calcular(self):
        self.area = self.pi * self.raio * self.raio
        print("A área do círculo é de:", self.area)
        print()

# Classe Quadrado
class Quadrado(Dados):
    def __init__(self):
        super().__init__()

    def calcular(self):
        self.area = self.lado * self.lado
        print("A área do quadrado é de:", self.area)
        print()

# Classe Retângulo
class Retangulo(Dados):
    def __init__(self):
        super().__init__()

    def calcular(self):
        self.area = self.comprimento * self.altura
        print("A área do retângulo é de:", self.area)
        print()

# Função principal
def main():
    print("Escolha a opção que deseja calcular:")
    print("1 - Triângulo")
    print("2 - Círculo")
    print("3 - Quadrado")
    print("4 - Retângulo")

    opcao = int(input())

    if opcao == 1:
        print("Vamos trabalhar com triângulo:")
        meu_triangulo = Triangulo()
        meu_triangulo.coletar_dados_triangulo()
        meu_triangulo.calcular()
    elif opcao == 2:
        print("Vamos trabalhar com círculo:")
        meu_circulo = Circulo()
        meu_circulo.coletar_dados_circulo()
        meu_circulo.calcular()
    elif opcao == 3:
        print("Vamos trabalhar com quadrado:")
        meu_quadrado = Quadrado()
        meu_quadrado.coletar_dados_quadrado()
        meu_quadrado.calcular()
    elif opcao == 4:
        print("Vamos trabalhar com retângulo:")
        meu_retangulo = Retangulo()
        meu_retangulo.coletar_dados_retangulo()
        meu_retangulo.calcular()
    else:
        print("Opção inválida!!")

if __name__ == "__main__":
    main()
