import java.util.List;
import java.util.ArrayList;

interface CabecalhoRelatorio{
    void exibirCabecalho();
}
interface CorpoRelatorio{
    void calculoCorpo(List<Double> dados);
}

class CabecalhoSimplificado implements CabecalhoRelatorio{
    @Override
    public void exibirCabecalho(){
        System.out.println("=====================================");
        System.out.println("  RELATÓRIO MATEMÁTICO SIMPLIFICADO  ");
        System.out.println("=====================================");
    }
}
class CabecalhoDetalhado implements CabecalhoRelatorio{
    @Override
    public void exibirCabecalho(){
        System.out.println("====================================");
        System.out.println("   RELATÓRIO MATEMÁTICO DETALHADO   ");
        System.out.println("====================================");
    }
}

class CorpoSimplificado implements CorpoRelatorio{
    private double soma = 0.0;
    @Override
    public void calculoCorpo(List<Double> dados){
        for (int i = 0; i < dados.size(); i++) {
            soma += dados.get(i);
        }
        System.out.println("Soma: " + soma);
    }
}
class CorpoDetalhado implements CorpoRelatorio{
    private double soma = 0.0;
    private double media, desvio;
    private double difQuadrados = 0.0;
    @Override
    public void calculoCorpo(List<Double> dados){
        for(int i = 0; i < dados.size(); i++){
            soma += dados.get(i);
        }
        media = soma / dados.size();
        for (int i = 0; i < dados.size(); i++) {
            difQuadrados += Math.pow((dados.get(i) - media), 2); 
        }
        desvio = Math.sqrt(difQuadrados / dados.size());

        System.out.println("Soma: " + soma);
        System.out.println("Media: " + media);
        System.out.println("Desvio: " + desvio);
    }
}

interface RelatorioFactory{
    CabecalhoRelatorio criarCabecalhoRelatorio();
    CorpoRelatorio criarCorpoRelatorio();
}

class RelatorioSimplificadoFactory implements RelatorioFactory{
    @Override
    public CabecalhoRelatorio criarCabecalhoRelatorio(){
        return new CabecalhoSimplificado();
    }
    @Override
    public CorpoRelatorio criarCorpoRelatorio(){
        return new CorpoSimplificado();
    }
}

class RelatorioDetalhadoFactory implements RelatorioFactory{
    @Override
    public CabecalhoRelatorio criarCabecalhoRelatorio(){
        return new CabecalhoDetalhado();
    }
    @Override
    public CorpoRelatorio criarCorpoRelatorio(){
        return new CorpoDetalhado();
    }
}

public class App {
    public static void main(String[] args) throws Exception {
        List<Double> dados = new ArrayList<>();
        dados.add(7.0);
        dados.add(9.0);
        dados.add(10.0);
        dados.add(11.0);
        dados.add(13.0);

        RelatorioFactory detalhado = new RelatorioDetalhadoFactory();
        detalhado.criarCabecalhoRelatorio().exibirCabecalho();
        detalhado.criarCorpoRelatorio().calculoCorpo(dados);

        RelatorioFactory simplificado = new RelatorioSimplificadoFactory();
        simplificado.criarCabecalhoRelatorio().exibirCabecalho();
        simplificado.criarCorpoRelatorio().calculoCorpo(dados);
    }
}
