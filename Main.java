import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);

        System.out.println("Digite um valor para a: ");
        int a = teclado.nextInt();

        System.out.println("Digite um valor para b: ");
        int b = teclado.nextInt();

        int soma = a + b;

        System.out.println("O resultado da soma é: " + soma);

        teclado.close();
    }
}