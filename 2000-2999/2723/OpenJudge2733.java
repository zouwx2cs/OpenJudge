import java.io.*;
import java.util.*;

public class Main {
	public static void main(String args[]) {
		Scanner cin = new Scanner(System.in) ;
		int a = cin.nextInt() ;
		System.out.println((a%4==0 && a%100!=0 || a%400 == 0)? "Y": "N") ;
	}
}