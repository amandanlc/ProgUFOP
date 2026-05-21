public class Produto {
    public static int contador = 0;
    private String nome;
    private Double preco;

    public Produto(){
        this.nome = "Indefinido";
        this.preco = 0.0;
        contador++;
    }

    public Produto(String nome, Double preco){
        this.nome = nome;
        this.preco = preco;
        contador++;
    }

    public static int quantidadeProdutos(){
        return contador;
    }

    public void exibirResultado(){
        System.out.println("PRODUTO " + contador);
        System.out.println("Nome " + this.nome + "\nPreço: " + this.preco);
    }

}
