public class ModuloPoupanca {
    public double capital = 1000.0, percentual = 0.9;

    public double getJurosPoupanca(){
        return capital * percentual * ConfiguracaoFinanceira.getInstancia().getTaxaSelic();
    }  
}
