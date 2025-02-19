using System;

public class Animal{

  //Atributos
  public String Nome {get; set;}
  public int Idade {get; set;}

  public Animal(){
    
  }
  public Animal(String nome, int idade){
    this.Nome = nome;
    this.Idade = idade;
  }
  
  
}

class Program {
  public static void Main (string[] args) {
    Console.WriteLine("Criando os objetos");
    Animal animal1 = new Animal();
    animal1.Nome = "toby";
    animal1.Idade = 3;

    Console.WriteLine (animal1.Nome);
    Console.WriteLine(animal1.Idade);

    Animal animal2 = new Animal("totó",5);
    Console.WriteLine ("Nome: " + animal2.Nome + " idade: " + animal2.Idade);

    Animal animal3 = new Animal();
    
    Console.WriteLine("Digite o nome do animal: ");
    animal3.Nome = Console.ReadLine();

    Console.WriteLine("Digite a idade do animal: ");
    animal3.Idade = int.Parse(Console.ReadLine());

    Console.WriteLine("Nome " + animal3.Nome + " e tem " + animal3.Idade + " anos.");
    
  }
}