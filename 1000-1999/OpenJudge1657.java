import java.io.* ;
import java.util.* ;

public class Main {
	public static void main(String[] argv) {
		Scanner cin = new Scanner(System.in) ;
		int t = cin.nextInt() ;
		while (t-- > 0) {
			String s, e ;
			//String[] in = cin.next() ;
			s = cin.next() ;
			e = cin.next() ;
			//System.out.println(s + ' ' + e) ;
			
			int sx = s.charAt(0) - 'a' + 1 ;
			int sy = s.charAt(1) - '0' ;
			int ex = e.charAt(0) - 'a' + 1 ;
			int ey = e.charAt(1) - '0' ;
			
			int w, h, c ;
			String x = "Inf" ;
			if (s.equals(e)) {
				System.out.println("0 0 0 0") ;
				continue ;
			}
			
			w = Math.abs(sx - ex) > Math.abs(sy - ey)? 
				Math.abs(sx - ex): 
				Math.abs(sy - ey) ;
			
			if (sx == ex || sy == ey) {
				h = c = 1 ;
			} else {
				h = c = 2 ;
			}
			
			if (sx-sy == ex-ey || sx+sy == ey+ex) {
				h = 1 ;
				x = "1" ;
			} else if ( ((sx+sy)&1) == ((ex+ey)&1) ) {
				x = "2" ;
			}
			
			System.out.printf("%d %d %d %s\n", w, h, c, x) ;
		}
	}
}

