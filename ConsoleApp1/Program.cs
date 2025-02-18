public class clientes{
    public string nome{get; set;}
    public string endereco{get; set;}

    public string telefone{get;set;}

    public void mensagem(){
        Console.WriteLine("Bem-vindo ao nosso estabelecimento " + nome + "!");
    }
}

public class Program{
    public static void Main(string[] args)
    {
        clientes cliente = new clientes();

        Console.WriteLine("Digite o nome do cliente: ");
        cliente.nome = Console.ReadLine();

        Console.WriteLine("Digite o endereço: ");
        cliente.endereco = Console.ReadLine();

        Console.WriteLine("Digite o telefone: ");
        cliente.telefone = Console.ReadLine();

        cliente.mensagem();
    }
}