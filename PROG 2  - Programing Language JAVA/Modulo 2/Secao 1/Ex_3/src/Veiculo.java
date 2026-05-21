public class Veiculo {
    String cor;
    String marca;

    public Veiculo(String cor, String marca){
        this.cor = cor;
        this.marca = marca;
    }

    public void lugares(){
        System.out.println("Um veículo tem no minimo 1 assentos");
    }
}
