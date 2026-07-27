public class FormatadorNumericoFactory {
    public static FormatadorNumerico format(int n){
        if (n == 1) {
            return new FormatadorDecimal();
        } else if (n == 2) {
            return new FormatadorPercentual();
        } else{
            System.err.println("Formato não encontrado");
        }
        return null;
    }
}
