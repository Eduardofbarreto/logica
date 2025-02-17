public class pessoa{
    public string nome {get; set;}
    public string sobrenome {get; set;}

    public int idade {get; set;}
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

        Console.WriteLine("Digite a idade: ");
        cadastro.idade = int.Parse(Console.ReadLine());

        if(cadastro.idade >= 18){
            Console.WriteLine("Maior de idade!");
        }else{
            Console.WriteLine("Menor de idade!");
        }

        Console.WriteLine("O nome da pessoa é: " + cadastro.nome + " " + cadastro.sobrenome);
        Console.WriteLine("A idade é: " + cadastro.idade);
    }
}
