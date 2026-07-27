import java.util.ArrayList;
import java.util.List;

interface CalculadoraImposto {
    double calcularImposto(double valorBase);    
}

interface CalculadoraTaxa {
    double calcularTaxa();    
}

class ImpostosPessoaFisica implements CalculadoraImposto{
    @Override
    public double calcularImposto(double valorBase){
        return valorBase * 0.10;
    }
}

class ImpostosPessoaJuridica implements CalculadoraImposto{
    @Override
    public double calcularImposto(double valorBase){
        return valorBase * 0.15;
    }
}

class TaxaPessoaFisica implements CalculadoraTaxa{
    @Override
    public double calcularTaxa(){
        return 15.0;
    }
}

class TaxaPessoaJuridica implements CalculadoraTaxa{
    @Override
    public double calcularTaxa(){
        return 50.0;
    }
}

interface FabricaImpostos {
    CalculadoraImposto criarCalculadoraImposto();
    CalculadoraTaxa criarCalculadoraTaxa();
}

class FabricaPessoaFisica implements FabricaImpostos{
    @Override
    public CalculadoraImposto criarCalculadoraImposto(){
        return new ImpostosPessoaFisica();
    }
    @Override
    public CalculadoraTaxa criarCalculadoraTaxa(){
        return new TaxaPessoaFisica();
    }
}

class FabricaPessoaJuridica implements FabricaImpostos{
    @Override
    public CalculadoraImposto criarCalculadoraImposto(){
        return new ImpostosPessoaJuridica();
    }
    @Override
    public CalculadoraTaxa criarCalculadoraTaxa(){
        return new TaxaPessoaJuridica();
    }
}

public class App {
    public static void main(String[] args) throws Exception {
        FabricaImpostos fisica = new FabricaPessoaFisica();
        double imposto1 = fisica.criarCalculadoraImposto().calcularImposto(100);
        double taxa1 = fisica.criarCalculadoraTaxa().calcularTaxa();
        double total1 = imposto1 + taxa1;
        System.out.println("Valor Imposto: " + imposto1);
        System.out.println("Valor Taxa: " + taxa1);
        System.out.println("Valor total: " + total1);

        FabricaImpostos juridica = new FabricaPessoaJuridica();
        double imposto2 = juridica.criarCalculadoraImposto().calcularImposto(100);
        double taxa2 = juridica.criarCalculadoraTaxa().calcularTaxa();
        double total2 = imposto2 + taxa2;
        System.out.println("Valor Imposto: " + imposto2);
        System.out.println("Valor Taxa: " + taxa2);
        System.out.println("Valor total: " + total2);
    }
}
