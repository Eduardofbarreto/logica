using System;

public class Program
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Digite seu nome: ");
        string nome = Console.ReadLine();

        Console.WriteLine("Digite sua idade: ");
        int idade = int.Parse(Console.ReadLine());  

        Console.WriteLine("Seu nome é: " + nome + " e sua idade é " + idade);
    }
}