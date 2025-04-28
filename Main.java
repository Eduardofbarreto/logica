// Arquivo: Main.java
public class Main {
    public static void main(String[] args) {
        // Construindo os nós da árvore
        No n1 = new No(111, null, null);
        No n4 = new No(444, null, null);
        No n3 = new No(333, n1, n4);
        No n9 = new No(999, null, null);
        No n5 = new No(555, n3, null);
        No n8 = new No(888, null, n9);
        No raiz = new No(888, n5, n8);

        // Criando a árvore binária
        ArvoreBinaria arvore = new ArvoreBinaria();
        arvore.setRaiz(raiz);

        // Testando contagem da esquerda festiva
        System.out.println("Contagem de nós da esquerda festiva: " + arvore.contarEsquerdaFestiva());

        // Imprimindo a árvore com recuos
        System.out.println("\nImpressão da árvore com recuos:");
        arvore.imprimir();
    }
}

   