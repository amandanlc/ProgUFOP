
public class App {
    public static void main(String[] args) throws Exception {
        Produto prod1 = new Produto();
        Produto prod2 = new Produto("Anel", 13.0, 5);

        System.out.println("Produto 1: " + prod1.nome + "\nPreço (und): " + prod1.preco + "\nEstoque: " + prod1.qtdEmEstoque);
        System.out.println("Valor Total: " + prod1.valorTotalEstoque());
        System.out.println("\nProduto 2: " + prod2.nome + "\nPreço (und): " + prod2.preco + "\nEstoque: " + prod2.qtdEmEstoque);
        System.out.println("Valor Total: " + prod2.valorTotalEstoque());
    }

    static class Produto {
        String nome;
        double preco;
        int qtdEmEstoque;

        Produto() {
            this.nome = "Sem nome";
            this.preco = 0.0;
            this.qtdEmEstoque = 0;
        }

        Produto(String nome, double preco, int qtdEmEstoque) {
            this.nome = nome;
            this.preco = preco;
            this.qtdEmEstoque = qtdEmEstoque;
        }

        double valorTotalEstoque() {
            return preco * qtdEmEstoque;
        }
    }
}
