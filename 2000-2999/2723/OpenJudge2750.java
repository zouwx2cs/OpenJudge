
import java.io.* ;
import java.util.* ;

public class Main {
	public static void main(String[] argv) {
		Scanner cin = new Scanner(System.in) ;
		int a = cin.nextInt() ;
		// java中位运算符&|^比较低（比==低），C/C++中比较高（比==高）
		if ((a&1) > 0) {
			System.out.println("0 0") ;
		} else {
			System.out.printf("%d %d\n", (a&2) > 0? a/4+1: a/4, a/2) ;
		}

	}
}