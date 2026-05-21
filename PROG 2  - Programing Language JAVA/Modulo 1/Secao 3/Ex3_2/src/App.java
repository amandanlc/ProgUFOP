public class App {
    public static void main(String[] args) throws Exception {
        Pessoa pessoa = new Pessoa();

        pessoa.setNome("Amanda");
        pessoa.setIdade(18);
        System.err.println(pessoa.getNome() + ", " + pessoa.getIdade() + " anos");
        
        pessoa.setNome("Camilla");
        pessoa.setIdade(88);
        System.err.println(pessoa.getNome() + ", " + pessoa.getIdade() + " anos");
    }
}
