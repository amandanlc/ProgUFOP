package sistema;

import java.util.ArrayList;
import java.util.List;

// ============================================================================
// 1. PRODUTOS E INTERFACES (Mesma estrutura do Exemplo 1)
// ============================================================================
interface Figura {
    double calcularArea();
    String getNome();
}

class Circulo implements Figura {
    private double raio;
    public Circulo(double raio) { this.raio = raio; }
    @Override public double calcularArea() { return Math.PI * (raio * raio); }
    @Override public String getNome() { return "Círculo"; }
}

class Quadrado implements Figura {
    private double lado;
    public Quadrado(double lado) { this.lado = lado; }
    @Override public double calcularArea() { return lado * lado; }
    @Override public String getNome() { return "Quadrado"; }
}

class Triangulo implements Figura {
    private double base, altura;
    public Triangulo(double base, double altura) { this.base = base; this.altura = altura; }
    @Override public double calcularArea() { return (base * altura) / 2; }
    @Override public String getNome() { return "Triângulo"; }
}

// ============================================================================
// 2. O PADRÃO FACTORY METHOD
// Vantagem: Respeita o Aberto/Fechado. Para adicionar um Triângulo,
// basta criar uma classe FabricaTriangulo, sem NUNCA alterar o código da FabricaCirculo.
// Desvantagem: Cria uma proliferação de classes (uma fábrica para cada produto).
// ============================================================================
abstract class FabricaDeFigura {
    // O Factory Method: as subclasses dizem o que criar
    public abstract Figura criar(); 
}

class FabricaCirculo extends FabricaDeFigura {
    private double raio;
    public FabricaCirculo(double raio) { this.raio = raio; }
    @Override 
    public Figura criar() { return new Circulo(raio); }
}

class FabricaQuadrado extends FabricaDeFigura {
    private double lado;
    public FabricaQuadrado(double lado) { this.lado = lado; }
    @Override 
    public Figura criar() { return new Quadrado(lado); }
}

class FabricaTriangulo extends FabricaDeFigura {
    private double base,altura;
    public FabricaTriangulo(double base, double altura) { 
    	this.base = base;
    	this.altura = altura;}
    @Override 
    public Figura criar() { return new Triangulo(base,altura); }
}

// ============================================================================
// 3. MAIN E FUNÇÃO AUXILIAR
// ============================================================================
public class MainFactoryMethod {
    
    // Função Auxiliar: Recebe fábricas e as manda trabalhar
    public static List<Figura> construirLoteDeFiguras() {
        List<Figura> lista = new ArrayList<>();
        
        // As fábricas podem ser configuradas antes
        FabricaDeFigura criador1 = new FabricaCirculo(5.0);
        FabricaDeFigura criador2 = new FabricaQuadrado(4.0);
        FabricaDeFigura criador3 = new FabricaTriangulo(4.0,4.0);
        
        // A lista é populada pelo polimorfismo das fábricas
        lista.add(criador1.criar());
        lista.add(criador2.criar());
        lista.add(criador3.criar());
        
        return lista;
    }

    public static void main(String[] args) {
        System.out.println("=== TESTE 2: FACTORY METHOD ===");
        List<Figura> minhasFiguras = construirLoteDeFiguras();

        // Percorrendo polimorficamente
        for (Figura f : minhasFiguras) {
            System.out.printf("Forma: %s | Área: %.2f\n", f.getNome(), f.calcularArea());
        }
    }
}