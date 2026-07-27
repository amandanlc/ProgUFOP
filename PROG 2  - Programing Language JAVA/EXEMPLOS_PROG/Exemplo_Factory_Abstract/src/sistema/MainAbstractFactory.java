package sistema;

import java.util.ArrayList;
import java.util.List;

// ============================================================================
// 1. PRODUTO GENÉRICO E AS FAMÍLIAS DE PRODUTOS (Interfaces)
// ============================================================================
// Interface base adicionada para permitir o armazenamento e iteração polimórfica na lista
interface Figura { 
    double calcularArea(); 
    String getDetalhes();
}

// Interfaces específicas (Os "Produtos" declarados pela Abstract Factory)
interface Circulo extends Figura {}
interface Quadrado extends Figura {}
interface Triangulo extends Figura {}

// ============================================================================
// 2. PRODUTOS CONCRETOS: FAMÍLIA MÉTRICA
// ============================================================================
class CirculoMetrico implements Circulo {
    private double raioCm;
    public CirculoMetrico(double raioCm) { this.raioCm = raioCm; }
    @Override public double calcularArea() { return Math.PI * (raioCm * raioCm); }
    @Override public String getDetalhes() { return "Círculo Métrico (cm²)"; }
}

class QuadradoMetrico implements Quadrado {
    private double ladoCm;
    public QuadradoMetrico(double ladoCm) { this.ladoCm = ladoCm; }
    @Override public double calcularArea() { return ladoCm * ladoCm; }
    @Override public String getDetalhes() { return "Quadrado Métrico (cm²)"; }
}

class TrianguloMetrico implements Triangulo {
    private double baseCm, alturaCm;
    public TrianguloMetrico(double base, double altura) { this.baseCm = base; this.alturaCm = altura; }
    @Override public double calcularArea() { return (baseCm * alturaCm) / 2.0; }
    @Override public String getDetalhes() { return "Triângulo Métrico (cm²)"; }
}

// ============================================================================
// 3. PRODUTOS CONCRETOS: FAMÍLIA IMPERIAL
// ============================================================================
class CirculoImperial implements Circulo {
    private double raioPol;
    public CirculoImperial(double raioPol) { this.raioPol = raioPol; }
    @Override public double calcularArea() { return Math.PI * (raioPol * raioPol); }
    @Override public String getDetalhes() { return "Círculo Imperial (pol²)"; }
}

class QuadradoImperial implements Quadrado {
    private double ladoPol;
    public QuadradoImperial(double ladoPol) { this.ladoPol = ladoPol; }
    @Override public double calcularArea() { return ladoPol * ladoPol; }
    @Override public String getDetalhes() { return "Quadrado Imperial (pol²)"; }
}

class TrianguloImperial implements Triangulo {
    private double basePol, alturaPol;
    public TrianguloImperial(double base, double altura) { this.basePol = base; this.alturaPol = altura; }
    @Override public double calcularArea() { return (basePol * alturaPol) / 2.0; }
    @Override public String getDetalhes() { return "Triângulo Imperial (pol²)"; }
}

// ============================================================================
// 4. A ABSTRACT FACTORY
// Vantagem: Garante que os objetos criados sejam compatíveis. 
// O cliente nunca misturará uma figura em centímetros com uma em polegadas no mesmo lote.
// Diferença para o Factory Method: Enquanto o Factory Method foca 
// em instanciar apenas UM tipo de produto genérico, a Abstract Factory abriga a 
// responsabilidade de criar toda uma FAMÍLIA de produtos relacionados (Círculo, Quadrado, Triângulo).
// ============================================================================
interface FabricaGeometria {
    Circulo criarCirculo(double raio);
    Quadrado criarQuadrado(double lado);
    Triangulo criarTriangulo(double base, double altura);
}

// Fábricas Concretas garantem a coesão absoluta da família
class FabricaMetrica implements FabricaGeometria {
    @Override public Circulo criarCirculo(double raio) { return new CirculoMetrico(raio); }
    @Override public Quadrado criarQuadrado(double lado) { return new QuadradoMetrico(lado); }
    @Override public Triangulo criarTriangulo(double base, double altura) { return new TrianguloMetrico(base, altura); }
}

class FabricaImperial implements FabricaGeometria {
    @Override public Circulo criarCirculo(double raio) { return new CirculoImperial(raio); }
    @Override public Quadrado criarQuadrado(double lado) { return new QuadradoImperial(lado); }
    @Override public Triangulo criarTriangulo(double base, double altura) { return new TrianguloImperial(base, altura); }
}

// ============================================================================
// 5. CLASSE MAIN E FUNÇÃO AUXILIAR
// ============================================================================
public class MainAbstractFactory {
    
    // Função Auxiliar: Move a orquestração da criação para fora do Main.
    // Ela recebe a fábrica abstrata por injeção de dependência e devolve a lista pronta.
    public static List<Figura> construirLoteDeFiguras(FabricaGeometria fabrica) {
        List<Figura> lista = new ArrayList<>();
        
        // A fábrica constrói o conjunto completo garantindo a mesma família de medidas
        lista.add(fabrica.criarCirculo(3.0));
        lista.add(fabrica.criarQuadrado(4.0));
        lista.add(fabrica.criarTriangulo(3.0, 4.0));
        
        return lista;
    }

    public static void main(String[] args) {
        System.out.println("=== TESTE: ABSTRACT FACTORY (CÁLCULO DE ÁREA) ===");
        
        // Simulação: O sistema de CAD foi configurado para o Sistema Imperial
        FabricaGeometria fabricaAtual = new FabricaImperial();
        // FabricaGeometria fabricaAtual = new FabricaMetrica(); // Alternar as fábricas para testar a outra família
        
        // Injetamos a fábrica na função auxiliar para gerar os objetos
        List<Figura> loteFiguras = construirLoteDeFiguras(fabricaAtual);
        
        // Percorrendo a lista de forma 100% polimórfica (através da interface base Figura)
        for (Figura fig : loteFiguras) {
            System.out.printf("%s | Área calculada: %.2f\n", fig.getDetalhes(), fig.calcularArea());
        }
    }
}