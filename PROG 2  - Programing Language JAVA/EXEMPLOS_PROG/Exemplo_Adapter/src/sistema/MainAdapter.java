package sistema;

//============================================================================
//1. O ALVO (Target) - O que o nosso sistema espera
//============================================================================
interface FiguraMetrica {
 double getAreaCm2();
 double getPerimetroCm();
}

//============================================================================
//2. O ADAPTADO (Adaptee) - A classe legada ou externa (Sistema Imperial)
//============================================================================
class CirculoImperial {
 private double raioPolegadas;

 public CirculoImperial(double raioPolegadas) {
     this.raioPolegadas = raioPolegadas;
 }

 public double getAreaPol2() {
     return Math.PI * Math.pow(raioPolegadas, 2);
 }

 public double getPerimetroPol() {
     return 2 * Math.PI * raioPolegadas;
 }
}

//============================================================================
//3. O ADAPTADOR (Adapter)
//Implementa a interface que o sistema espera, mas usa o objeto legado por dentro.
//============================================================================
class CirculoMetrico implements FiguraMetrica {
 private CirculoImperial circuloImperial;
 
 // Constantes de conversão matemática
 private static final double FATOR_CM = 2.54; // 1 polegada = 2.54 cm
 private static final double FATOR_CM_QUADRADO = 6.4516; // 2.54^2

 public CirculoMetrico(CirculoImperial circuloImperial) {
     this.circuloImperial = circuloImperial;
 }

 @Override
 public double getAreaCm2() {
     // Pega a área em polegadas e converte para centímetros quadrados
     return circuloImperial.getAreaPol2() * FATOR_CM_QUADRADO;
 }

 @Override
 public double getPerimetroCm() {
     // Pega o perímetro em polegadas e converte para centímetros
     return circuloImperial.getPerimetroPol() * FATOR_CM;
 }
}

//============================================================================
//4. CLASSE PRINCIPAL (Demonstração)
//============================================================================
public class MainAdapter {
 public static void main(String[] args) {
     System.out.println("=== TESTE: ADAPTER (IMPERIAL -> MÉTRICO) ===\n");

     // Temos um círculo da biblioteca legada (raio = 5 polegadas)
     CirculoImperial circuloLegado = new CirculoImperial(5.0);

     // O nosso sistema precisa de uma FiguraMetrica. Injetamos o círculo legado no Adaptador.
     FiguraMetrica circuloAdaptado = new CirculoMetrico(circuloLegado);

     System.out.printf("Área adaptada para Métrico: %.2f cm²\n", circuloAdaptado.getAreaCm2());
     System.out.printf("Perímetro adaptado para Métrico: %.2f cm\n", circuloAdaptado.getPerimetroCm());
 }
}
