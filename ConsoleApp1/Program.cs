public class pessoa{
    public string nome {get; set;}
    public string sobrenome {get; set;}

    public int idade {get; set;}
}

public class Program
{
    public static void Main(string[] args)
    {
        pessoa pessoa1 = new pessoa();

        pessoa1.nome = "Eduardo";
        pessoa1.sobrenome = "Barreto";
        pessoa1.idade = 37;

        Console.WriteLine("O nome é " + pessoa1.nome + " " + pessoa1.sobrenome + " e tem " + pessoa1.idade + ".");
    }
}