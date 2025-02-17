public class Cachorro
{
    public string Nome { get; set; }
    public int Idade { get; set; }
}

public class Program
{
    public static void Main(string[] args)
    {
        Cachorro meuCachorro = new Cachorro();

        Console.WriteLine("Digite o nome do seu cachorro: ");
        meuCachorro.Nome = Console.ReadLine();
        
        Console.WriteLine("Digite a idade do cachorro: ");
        meuCachorro.Idade = int.Parse(Console.ReadLine());

        Console.WriteLine("O nome do cachorro é " + meuCachorro.Nome);
        Console.WriteLine("A idade do cachorro é " + meuCachorro.Idade);
    }
}