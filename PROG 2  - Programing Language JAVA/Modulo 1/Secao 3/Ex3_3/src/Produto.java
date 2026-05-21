public class Produto {
    String nome;
    Double preco;
    int qtdEmEstoque;

    public Produto(){
        this.nome = "Desconhecido";
        this.preco = 0.0;
        this.qtdEmEstoque = 0;
    }
    
    public Produto(String nome, Double preco, int qtdEmEstoque){
        this.nome = nome;
        this.preco = preco;
        this.qtdEmEstoque = qtdEmEstoque;
    }

    public Double valorTotalEstoque(){
        return qtdEmEstoque * preco;
    }
}
