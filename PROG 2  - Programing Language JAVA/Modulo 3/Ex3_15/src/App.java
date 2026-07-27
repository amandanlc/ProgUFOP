interface MedidorDistancia{
    void unidadeMedidaDistancia(double n);
}

interface MedidorPeso{
    void unidadeMedidaPeso(double n);
}

class MedidorDistanciaImperial implements MedidorDistancia{
    @Override
    public void unidadeMedidaDistancia(double n){
        System.out.println(n + " mi");
    }
}
class MedidorDistanciaMetrico implements MedidorDistancia{
    @Override
    public void unidadeMedidaDistancia(double n){
        System.out.println(n + " km");
    }
}

class MedidorPesoMetrico implements MedidorPeso{
    @Override
    public void unidadeMedidaPeso(double n){
        System.out.println(n + " lb");
    }
}
class MedidorPesoImperial implements MedidorPeso{
    @Override
    public void unidadeMedidaPeso(double n){
        System.out.println(n + " kg");
    }
}

interface FabricaSistemasMedida{
    MedidorDistancia criarMedidorDistancia();
    MedidorPeso criarMedidorPeso();
}

class SistemaMetricoFactory implements FabricaSistemasMedida{
    @Override
    public MedidorDistancia criarMedidorDistancia(){
        return new MedidorDistanciaMetrico();
    }
    @Override
    public MedidorPeso criarMedidorPeso(){
        return new MedidorPesoMetrico();
    }
}

class SistemaImperialFactory implements FabricaSistemasMedida{
    @Override
    public MedidorDistancia criarMedidorDistancia(){
        return new MedidorDistanciaImperial();
    }
    @Override
    public MedidorPeso criarMedidorPeso(){
        return new MedidorPesoImperial();
    }
}

public class App {
    public static void main(String[] args) throws Exception {
        FabricaSistemasMedida imperial = new SistemaImperialFactory();
        imperial.criarMedidorDistancia().unidadeMedidaDistancia(5);
        imperial.criarMedidorPeso().unidadeMedidaPeso(5);

        FabricaSistemasMedida metrico = new SistemaMetricoFactory();
        metrico.criarMedidorDistancia().unidadeMedidaDistancia(5);
        metrico.criarMedidorPeso().unidadeMedidaPeso(5);
    }
}
