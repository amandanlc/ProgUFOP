public class FormatadorPercentual implements FormatadorNumerico {
    @Override
    public String formatar(double valor){
        double porcent = valor * 100;
        return String.format("%.2f%%", porcent);
    }
}
