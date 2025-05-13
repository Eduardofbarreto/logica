import java.util.Scanner;

abstract class Dados {
    protected double base, altura, area;
    protected final double pi = 3.14159;
    protected double raio;
    protected double lado;
    protected double comprimento;

    // Método construtor
    public Dados() {}

    // Métodos virtuais para coletar dados
    public void coletarDadosTriangulo() {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Digite a base do triângulo:");
        base = scanner.nextDouble();
        System.out.println("Digite a altura do triângulo:");
        altura = scanner.nextDouble();
    }

    public void coletarDadosCirculo() {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Digite o raio do círculo:");
        raio = scanner.nextDouble();
    }

    public void coletarDadosQuadrado() {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Digite um lado do quadrado:");
        lado = scanner.nextDouble();
    }

    public void coletarDadosRetangulo() {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Digite o comprimento do retângulo:");
        comprimento = scanner.nextDouble();
        System.out.println("Digite a altura do retângulo:");
        altura = scanner.nextDouble();
    }

    // Método para calcular a área
    public void calcular() {
        System.out.println("O resultado é: " + area);
        System.out.println();
    }
}

// Classe Triângulo
class Triangulo extends Dados {
    public Triangulo() {}

    @Override
    public void calcular() {
        System.out.println();
        area = (base * altura) / 2;
        super.calcular();
    }
}

// Classe Círculo
class Circulo extends Dados {
    public Circulo() {}

    @Override
    public void calcular() {
        System.out.println();
        area = pi * raio * raio;
        System.out.println("A área do círculo é de: " + area);
        System.out.println();
    }
}

// Classe Quadrado
class Quadrado extends Dados {
    public Quadrado() {}

    @Override
    public void calcular() {
        System.out.println();
        area = lado * lado;
        System.out.println("A área do quadrado é de: " + area);
        System.out.println();
    }
}

// Classe Retângulo
class Retangulo extends Dados {
    public Retangulo() {}

    @Override
    public void calcular() {
        System.out.println();
        area = comprimento * altura;
        System.out.println("A área do retângulo é de: " + area);
        System.out.println();
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Escolha a opção que deseja calcular:");
        System.out.println("1 - Triângulo");
        System.out.println("2 - Círculo");
        System.out.println("3 - Quadrado");
        System.out.println("4 - Retângulo");

        int opcao = scanner.nextInt();

        switch(opcao) {
            case 1:
                System.out.println("Vamos trabalhar com triângulo:");
                Triangulo meuTriangulo = new Triangulo();
                meuTriangulo.coletarDadosTriangulo();
                meuTriangulo.calcular();
                break;
            case 2:
                System.out.println("Vamos trabalhar com círculo:");
                Circulo meuCirculo = new Circulo();
                meuCirculo.coletarDadosCirculo();
                meuCirculo.calcular();
                break;
            case 3:
                System.out.println("Vamos trabalhar com quadrado:");
                Quadrado meuQuadrado = new Quadrado();
                meuQuadrado.coletarDadosQuadrado();
                meuQuadrado.calcular();
                break;
            case 4:
                System.out.println("Vamos trabalhar com retângulo:");
                Retangulo meuRetangulo = new Retangulo();
                meuRetangulo.coletarDadosRetangulo();
                meuRetangulo.calcular();
                break;
            default:
                System.out.println("Opção inválida!!");
        }
    }
}
