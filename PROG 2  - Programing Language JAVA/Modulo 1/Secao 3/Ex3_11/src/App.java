public class App {
    public static void main(String[] args) throws Exception {
        Produto produto1 = new Produto("Teclado", 100.0);
        produto1.exibirResultado();
        Produto produto2 = new Produto();
        produto2.exibirResultado();

        System.out.println("\nQuantidade Produtos: " + Produto.quantidadeProdutos());
    }
}
