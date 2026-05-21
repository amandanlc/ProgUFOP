class PrestadorServico extends Colaborador{
    int horasTrabalhadas;
    double valorHora;
    double taxa;

    PrestadorServico(){
        this(20.0, 0.0, 0, "", "");
    }

    PrestadorServico(double taxa, double valorHora, int horasTrabalhadas, String nome, String documento){
        super(nome, documento);
        this.valorHora = valorHora;
        this.horasTrabalhadas = horasTrabalhadas;
        this.taxa = taxa;
    }

    @Override

    double calcularRendimentoLiquido(){
        return (this.horasTrabalhadas * this.valorHora) - this.taxa;
    }

}
