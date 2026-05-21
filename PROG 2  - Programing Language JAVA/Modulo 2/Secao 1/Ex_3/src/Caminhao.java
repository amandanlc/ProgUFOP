public class Caminhao extends Veiculo{
    public Caminhao(String cor, String marca){
        super(cor, marca);
    }
    
    public void lugares(){
        System.out.println("Caminhão possui no máximo 5 assentos e no mínimo 2");
    }
}
