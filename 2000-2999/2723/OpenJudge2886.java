import java.io.* ;
import java.util.* ;

public class Main {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in) ;
        while (cin.hasNext()) {
            int n = cin.nextInt() ;
            int sum = 0 ;
            for (int i = 3; i <= n; i +=3 ) {
                sum += i ;
            }
            System.out.println(sum) ;
        }
    }
}
