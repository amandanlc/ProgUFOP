public class App {
    public static void main(String[] args) throws Exception {
        Pessoa pessoa = new Pessoa();

        pessoa.exibirInfo();

        pessoa.nome = "AMANDA";
        pessoa.cidade = "BH";
        pessoa.idade = 18;        
        pessoa.exibirInfo();
    }
}
