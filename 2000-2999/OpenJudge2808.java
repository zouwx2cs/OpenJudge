import java.io.* ;
import java.util.* ;

public class Main {
    public static void main(String[] argv) {
        Scanner cin = new Scanner(System.in) ;
        int L = cin.nextInt() ;
        int M = cin.nextInt() ;

        boolean[] trees = new boolean[L+1] ;
        Arrays.fill(trees, true) ;

        for (int m = 0; m < M; ++m) {
            int start = cin.nextInt() ;
            int end = cin.nextInt() ;

            for (int i = start; i <= end; ++i) {
                trees[i] = false ;
            }
        }

        int cnt = 0 ;
        for (int i = 0; i <= L; ++i) {
            if (trees[i]) {
                ++cnt ;
            }
        }

        System.out.println(cnt) ;
    }
}