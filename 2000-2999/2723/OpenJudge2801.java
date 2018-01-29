import java.io.* ;
import java.util.* ;

public class Main {
	public static void main(String[] argv)
	{
		Scanner cin = new Scanner(System.in) ;
		int n = cin.nextInt() ;
		int m = cin.nextInt() ;
		int p = cin.nextInt() ;

		int[] cnt = new int[26] ;
		for (int i = 0; i < 26; ++i)
			cnt[i] = 0 ;

		while (n-- > 0) {
			String tmp = cin.next() ;
			for (int i = 0; i < tmp.length(); ++i) {
				cnt[tmp.charAt(i) - 'A']++ ;
			}
		}
		while (p-- > 0) {
			String tmp = cin.next();
			for (int i = 0; i < tmp.length(); ++i) {
				cnt[tmp.charAt(i) - 'A']--;
			}
		}
		for (int i = 0; i < 26; ++i) {
			if (cnt[i] > 0)
				while (cnt[i]-- > 0)
					System.out.printf("%c", 'A' + i) ;
		}
		System.out.println() ;
	}
}