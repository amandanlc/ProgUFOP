package sistema;

//============================================================================
//1. CLASSE DE DADOS BÁSICA
//Representa as coordenadas (x, y) no plano bidimensional.
//============================================================================
class Ponto {
 private double x;
 private double y;

 public Ponto(double x, double y) {
     this.x = x;
     this.y = y;
 }

 public double getX() { return x; }
 public double getY() { return y; }
}

//============================================================================
//2. A CLASSE ESPECIALISTA (Delegate)
//É responsável exclusivamente pelas fórmulas matemáticas algébricas.
//Não guarda estado de nenhuma figura, apenas processa os dados recebidos.
//============================================================================
class CalculadorDistancia {
 
 // Calcula a distância matemática entre apenas dois pontos
 private double calcularDistanciaLinear(Ponto p1, Ponto p2) {
     return Math.sqrt(Math.pow(p2.getX() - p1.getX(), 2) + Math.pow(p2.getY() - p1.getY(), 2));
 }

 // Recebe um vetor de pontos e calcula a soma de todas as distâncias (Perímetro)
 public double calcularPerimetroFechado(Ponto[] vertices) {
     double perimetro = 0;
     int quantidadePontos = vertices.length;

     for (int i = 0; i < quantidadePontos; i++) {
         Ponto atual = vertices[i];
         // O operador % garante que o último ponto se conecte de volta ao índice 0 (fechando a figura)
         Ponto proximo = vertices[(i + 1) % quantidadePontos]; 
         
         perimetro += calcularDistanciaLinear(atual, proximo);
     }

     return perimetro;
 }
}

//============================================================================
//3. A CLASSE BASE DELEGADORA (Delegator)
//Representa a figura em si. Ela não sabe "como" calcular raízes ou potências,
//ela apenas delega o seu vetor de vértices para o especialista.
//============================================================================
class Poligono2D {
 private String nomeFigura;
 private Ponto[] vertices;
 
 // Composição: A figura "tem um" calculador para o qual repassará o trabalho
 private CalculadorDistancia calculadorDelegate;

 public Poligono2D(String nomeFigura, Ponto[] vertices) {
     this.nomeFigura = nomeFigura;
     this.vertices = vertices;
     this.calculadorDelegate = new CalculadorDistancia();
 }

 /**
  * Método público chamado pelo cliente.
  * Note que não há matemática aqui, apenas delegação.
  */
 public void exibirPerimetro() {
     double resultado = calculadorDelegate.calcularPerimetroFechado(this.vertices);
     System.out.printf("Figura: %s | Perímetro: %.2f unidades de medida\n", nomeFigura, resultado);
 }
}

//============================================================================
//4. CLASSE PRINCIPAL (Demonstração)
//============================================================================
public class MainDelegation {
 public static void main(String[] args) {
     System.out.println("=== TESTE: DELEGATION (PONTOS 2D) ===\n");

     // Definindo um Retângulo 3x4 (deverá ter perímetro = 14)
     Ponto[] pontosRetangulo = {
         new Ponto(0, 0),
         new Ponto(3, 0),
         new Ponto(3, 4),
         new Ponto(0, 4)
     };
     Poligono2D retangulo = new Poligono2D("Retângulo", pontosRetangulo);

     // Definindo um Triângulo Retângulo de lados 3, 4 e 5 (deverá ter perímetro = 12)
     Ponto[] pontosTriangulo = {
         new Ponto(0, 0),
         new Ponto(3, 0),
         new Ponto(0, 4)
     };
     Poligono2D triangulo = new Poligono2D("Triângulo Retângulo", pontosTriangulo);

     // O cliente apenas invoca a figura. A delegação ocorre nos bastidores.
     retangulo.exibirPerimetro();
     triangulo.exibirPerimetro();
 }
}