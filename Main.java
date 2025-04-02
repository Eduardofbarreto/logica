import java.util.ArrayList;
import java.util.List;

class Animal {
    protected String nome;

    public Animal(String nome) {
        this.nome = nome;
    }

    public void fazerSom() {
        System.out.println("Som genérico de animal");
    }
}

class Cachorro extends Animal {
    public Cachorro(String nome) {
        super(nome);
    }

    @Override
    public void fazerSom() {
        System.out.println("Au au!");
    }
}

class Gato extends Animal {
    public Gato(String nome) {
        super(nome);
    }

    @Override
    public void fazerSom() {
        System.out.println("Miau!");
    }
}

public class Main {
    public static void fazerAnimaisFazeremSom(List<Animal> animais) {
        for (Animal animal : animais) {
            animal.fazerSom();
        }
    }

    public static void main(String[] args) {
        // Criando objetos
        Animal animalGenerico = new Animal("Animal Genérico");
        Cachorro cachorro = new Cachorro("Maui");
        Gato gato = new Gato("Mingau");

        // Demonstrando herança
        System.out.println(cachorro.nome); // Acessando o atributo 'nome' herdado da classe Animal
        System.out.println(gato.nome); // Acessando o atributo 'nome' herdado da classe Animal

        // Demonstrando polimorfismo
        List<Animal> animais = new ArrayList<>();
        animais.add(animalGenerico);
        animais.add(cachorro);
        animais.add(gato);
        fazerAnimaisFazeremSom(animais);
    }
}