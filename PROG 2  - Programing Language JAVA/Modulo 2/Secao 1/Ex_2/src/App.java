public class App {
    public static void main(String[] args) throws Exception {
        Animal animal = new Animal();
        Animal cachorro = new Cachorro();
        Animal gato = new Gato();

        animal.comer();
        animal.falar();

        cachorro.comer();
        cachorro.falar();
        
        gato.comer();
        gato.falar();
    }
}
