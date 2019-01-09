#include <iostream>
#include <cmath>

using namespace std ;

int main(int argc, char *argv[])
{
	for (int a = 2; a <= 100; ++a)
	{
		for (int b = a; b <= 100; ++b)
		{
			int s2 = a*a + b*b ;
			int s = sqrt(s2) ;
			if (s*s == s2 && s <= 100)
			{
				printf("%d*%d + %d*%d = %d*%d\n", a, a, b, b, s, s) ;
			}
			else if ((s+1)*(s+1) == s2 && (s+1) <= 100)
			{
				printf("%d*%d + %d*%d = %d*%d\n", a, a, b, b, s+1, s+1) ;
				puts("aaa") ;
			}
		}
	}
	return 0 ;
}
