public class Pessoa{
    String nome;
    int idade;
    String cidade;

    public Pessoa(){
        this.nome = "Desconhecido";
        this.cidade = "Desconhecida";
        this.idade = 0;
    }

    public Pessoa(String nome, String cidade, int idade){
        this.nome = nome;
        this.cidade = cidade;
        this.idade = idade;
    }

    public void exibirInfo(){
        System.err.println(nome + ", " + idade + ", " + cidade);
    }
}