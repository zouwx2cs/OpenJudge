#include <iostream>

using namespace std ;

int main(int argc, char *argv[])
{
	int n ;
	while (cin >> n)
	{
		int sum = 0 ;
		for (int i = 0; i <= n; i += 3)
			sum += i ;
		cout << sum << endl ;
	}
	return 0 ;
}
