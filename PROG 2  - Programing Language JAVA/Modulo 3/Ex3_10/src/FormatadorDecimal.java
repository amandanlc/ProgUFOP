public class FormatadorDecimal implements FormatadorNumerico {
    @Override
    public String formatar(double valor){
        return String.format("%.2f", valor);
    }
}
