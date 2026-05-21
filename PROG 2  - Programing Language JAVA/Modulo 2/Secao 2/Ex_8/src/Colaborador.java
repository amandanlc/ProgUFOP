abstract class Colaborador {
    String nome;
    String documento;

    Colaborador(String nome, String documento){
        this.documento = documento;
        this.nome = nome;
    }

    abstract double calcularRendimentoLiquido();    
}
