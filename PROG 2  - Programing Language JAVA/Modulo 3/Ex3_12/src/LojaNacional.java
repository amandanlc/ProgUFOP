public class LojaNacional extends LojaVirtual{
    @Override
    public CalculadorFrete criarCalculadorFrete(){
        return new FretePorPeso();
    }
}
