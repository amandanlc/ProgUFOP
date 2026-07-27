public class ConversorFactory {
    public static ConversorMoeda converter(String sigla){
        if (sigla.equalsIgnoreCase("USD")) {
            return new ConversorDolar();
        } else if (sigla.equalsIgnoreCase("EUR")) {
            return new ConversorEuro();
        } else {
            System.out.println("Moeda não encontrada");
        }
        return null;
    } 
}
