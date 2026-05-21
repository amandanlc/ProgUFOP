class FuncionarioCLT extends Colaborador {
    double salarioLiquido;
    double descontoINSS;

    public FuncionarioCLT(String nome, String documento, double salarioLiquido, double descontoINSS){
        super(nome, documento);
        this.descontoINSS = descontoINSS;
        this.salarioLiquido = salarioLiquido;
    }

    @Override
    double calcularRendimentoLiquido(){
        return this.salarioLiquido - this.descontoINSS;
    }
}
