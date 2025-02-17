public class pessoa{
    public string nome {get; set;}
    public string sobrenome {get; set;}
}

public class Program
{
    public static void Main(string[] args)
    {
        pessoa cadastro = new pessoa();

        Console.WriteLine("Digite o nome da pessoa: ");
        cadastro.nome = Console.ReadLine();

        Console.WriteLine("Digite o sobronome: ");
        cadastro.sobrenome = Console.ReadLine();

        Console.WriteLine("O nome da pessoa é: " + cadastro.nome + " " + cadastro.sobrenome);
    }
}
