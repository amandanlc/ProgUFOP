public class App {
    public static void main(String[] args) throws Exception {
        String nome = "Bola", cargo = "Estagiario";
        double preco = 15.0, salario = 2000.0;
        CalculoProduto produto = new CalculoProduto(nome, preco);
        CalculoServico servico = new CalculoServico(cargo, salario);

        System.out.println("Produto: " + produto.nome + " | Preço com taxa: " + produto.Preco());
        System.out.println("Serviço: " + servico.cargo + " | Preço com taxa: " + servico.Salario());
    }
}
