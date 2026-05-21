public class Ex1_4 {
    public static void main(String[] args){
        int n = 10, i = 1, t1 = 1, t2 = 1, fib;

        while (i <= n) {
            System.out.println(t1);  
            fib = t1 + t2;
            t1 = t2;
            t2 = fib;
            i++;
        }
    }
}
