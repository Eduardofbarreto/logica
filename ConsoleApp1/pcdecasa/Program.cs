using System.Dynamic;
using Microsoft.Win32;


class Operacao{
    public char operacao{get; set;}
    public double num1{get; set;}
    public double num2 {get; set;}

    public void Calcular(){
        switch(operacao){
            case '+':
                double soma = num1 + num2;
                Console.WriteLine("O resultado da soma é " + soma);
                break;
            case '-':
                double subtracao = num1 - num2;
                Console.WriteLine("O resultado da subtração é " + subtracao);
                break;
            case '*':
                double multiplicacao = num1 * num2;
                Console.WriteLine("O resultado da multiplicação é " + multiplicacao);
                break;
            case '/':
                if(num2 == 0){
                    Console.WriteLine("ERRO!! Divisão por zero não será permitido!");
                    return;
                }else{
                    double divisao = num1 / num2;
                    Console.WriteLine("O resultado da divisão é " + divisao);
                    break;
                }
            default:
                Console.WriteLine("Nenhuma opção válida!!");
                break;
        }
    }
}

public class Program{
    public static void Main(string[] args)
    {
        
        Operacao calculadora = new Operacao();

        Console.WriteLine("Digite um valor para número 1: ");
        calculadora.num1 = double.Parse(Console.ReadLine());

        Console.WriteLine("Digite a operação desejada: ");
        calculadora.operacao = Console.ReadLine()[0];

        Console.WriteLine("Digite um valor para número 2: ");
        calculadora.num2 = double.Parse(Console.ReadLine());

        calculadora.Calcular();
        
    }
}