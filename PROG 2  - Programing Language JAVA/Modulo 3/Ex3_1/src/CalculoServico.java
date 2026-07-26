public class CalculoServico{
    public String cargo;
    public double salario;

    public CalculoServico(String cargo, double salario){
        this.cargo = cargo;
        this.salario = salario;
    }
    
    public double salarioComImposto(){
        return salario + (salario * CalculadoraImpostosGlobais.getInstancia().getTaxaImposto());
    }
}
