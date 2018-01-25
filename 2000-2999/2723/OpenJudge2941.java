import java.io.* ;
import java.util.* ;
import java.lang.Math ;

public class Main {
	public static void main(String[] argv) {
		//Scanner cin = new Scanner(Systeim.in) ;
		for (int a = 2; a <= 100; ++a) {
			for (int b = a; b <= 100; ++b) {
				int s2 = a*a + b*b ;
				int s = (int)Math.sqrt(s2) ;
				if (s*s == s2 && s <= 100) 
				{
					System.out.printf("%d*%d + %d*%d = %d*%d\n", a, a, b, b, s, s) ;
				}
			}
		}
	}
}