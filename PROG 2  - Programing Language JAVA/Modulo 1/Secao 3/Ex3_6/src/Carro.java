public class Carro {
    private Motor motor;

    public Carro(String motor){
        this.motor = new Motor(motor);
    }

    public void exibirInfo(){
        System.out.println("Tipo do motor do meu carro: " + motor.getTipoMotor());
    }

}

//PROXIMA AULA D 203