using Microsoft.Win32;

class produto{
    public string nome{get; set;}
    public int quantidade{get; set;}

    public double valor{get; set;}

    public double total{get; set;}

    public void calculo(){
        Console.WriteLine("O produto escolhido foi: " + nome);
        total = quantidade * valor;
        Console.WriteLine("Você comprou " + quantidade + " " + nome + ".");
        Console.WriteLine("Dando um valor total de " + total + ".");
    }
}

public class Program{
    public static void Main(string[] args)
    {
        produto registro = new produto();

        Console.WriteLine("Digite o nome do produto: ");
        registro.nome = Console.ReadLine();

        Console.WriteLine("Digite a quantidade de produto: ");
        registro.quantidade = int.Parse(Console.ReadLine());

        Console.WriteLine("Digite o valor do produto: ");
        registro.valor = double.Parse(Console.ReadLine());

        registro.calculo();

    }
}