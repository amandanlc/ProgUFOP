public class ConversorTemperatura {
    public static Double celsiusParaFahrenheit(double C){
        return (C * 1.8) + 32;
    }

    public static Double fahrenheitParaCelcius(double F){
        return (F - 32) / 1.8;
    }
}
