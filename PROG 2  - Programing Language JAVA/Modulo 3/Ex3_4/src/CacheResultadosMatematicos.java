import java.util.Map;
import java.util.HashMap;

public class CacheResultadosMatematicos {
    private static CacheResultadosMatematicos instancia;
    Map<Integer, Long> cache;

    private CacheResultadosMatematicos(){
        cache = new HashMap<>();
    }

    public static CacheResultadosMatematicos getInstancia(){
        if (instancia == null) {
            instancia = new CacheResultadosMatematicos();
        }
        return instancia;
    }

    public long calculaFatorial(int n){
        if (n < 0) {
            System.err.println("Não existe fatorial para números menores que 0");
        }
        if (cache.containsKey(n)) {
            System.out.println(n + "!" + " já foi calculado");
            return cache.get(n);
        }

        System.out.println("Calculando o fatorial de " + n);
        long resultado = 1;
        for (int i = 1; i <= n; i++) {
            resultado *= i;
        }

        cache.put(n, resultado);
        return resultado;
    }
}
