import java.io.* ;
import java.util.* ;

public class Main {
	public static void main(String[] argv) {
		Scanner cin = new Scanner(System.in) ;
		while (cin.hasNext()) {
			String str = cin.nextLine() ;
			System.out.println(
				str.equals(new String(new StringBuilder(str).reverse()))?
				"YES":
				"NO") ;
		}
	}
}