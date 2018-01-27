import java.io.* ;
import java.util.* ;

public class Main {
	public static void main(String[] argv) {
		Scanner cin = new Scanner(System.in) ;
		int days = cin.nextInt() ;
		days += 13-1 ;
		int[] daysPerMonth = {0, 31, 28, 31, 30, 31, 30, 
                31, 31, 30, 31, 30, 12} ;
		for (int i = 1; i <= 12; ++i) {
			days += daysPerMonth[i-1] ;
			if (days % 7 == 5) {
				System.out.println(i);
			}
		}
	}
}