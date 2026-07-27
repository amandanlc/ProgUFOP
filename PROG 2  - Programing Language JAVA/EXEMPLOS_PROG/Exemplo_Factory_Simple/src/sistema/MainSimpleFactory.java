package sistema;

import java.util.ArrayList;
import java.util.List;

// ============================================================================
// 1. PRODUTOS E INTERFACE
// ============================================================================
interface Figura {
    double calcularArea();
    String getNome();
}

class Circulo implements Figura {
    private double raio;
    public Circulo(double raio) { this.raio = raio; }
    @Override 
    public double calcularArea() { return Math.PI * (raio * raio); }
    @Override 
    public String getNome() { return "Círculo"; }
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
// 2. A FÁBRICA SIMPLES (Simple Factory)
// Vantagem: Fácil de entender. Encapsula o "new" em um só lugar.
// Desvantagem: Fere o princípio Aberto/Fechado (SOLID). Se criar 
// uma nova figura (ex: Pentágono), o programador será obrigado a modificar o código
// desta classe adicionando mais um "if/else", o que pode quebrar código existente.
// ============================================================================
class FabricaSimples {
    public static Figura criarFigura(String tipo, double val1, double val2) {
        if (tipo.equalsIgnoreCase("CIRCULO")) {
            return new Circulo(val1); // val1 atua como raio
        } else if (tipo.equalsIgnoreCase("QUADRADO")) {
            return new Quadrado(val1); // val1 atua como lado
        } else if (tipo.equalsIgnoreCase("TRIANGULO")) {
            return new Triangulo(val1, val2); // base e altura
        } else {
            throw new IllegalArgumentException("Tipo de figura desconhecido.");
        }
    }
}

// ============================================================================
// 3. MAIN E FUNÇÃO AUXILIAR
// ============================================================================
public class MainSimpleFactory {
    
    // Função Auxiliar (Fora do Main)
    public static List<Figura> construirLoteDeFiguras() {
        List<Figura> lista = new ArrayList<>();
        // O cliente não chama o construtor diretamente, ele pede para a fábrica
        lista.add(FabricaSimples.criarFigura("CIRCULO", 5.0, 0.0));
        lista.add(FabricaSimples.criarFigura("QUADRADO", 4.0, 0.0));
        lista.add(FabricaSimples.criarFigura("TRIANGULO", 3.0, 6.0));
        return lista;
    }

    public static void main(String[] args) {
        System.out.println("=== TESTE 1: SIMPLE FACTORY ===");
        List<Figura> minhasFiguras = construirLoteDeFiguras();

        // Percorrendo polimorficamente
        for (Figura f : minhasFiguras) {
            System.out.printf("Forma: %s | Área: %.2f\n", f.getNome(), f.calcularArea());
        }
    }
}
