public class ModuloEmprestimo {
    public double capital = 1000.0, margem = 0.6;

    public double getJurosEmprestimo(){
        return capital * (margem + ConfiguracaoFinanceira.getInstancia().getTaxaSelic());
    }    
}
