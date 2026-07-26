public class CalculoProduto{
    public String nome;
    public double preco;

    public CalculoProduto(String nome, double preco){
        this.nome = nome;
        this.preco = preco;
    }

    public double precoComImposto(){
        return preco + (preco * CalculadoraImpostosGlobais.getInstancia().getTaxaImposto());
    }
}
