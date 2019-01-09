#include <iostream>

using namespace std ;

int main(int argc, char *argv[]) 
{
	int a ;
	cin >> a ;
	if (a&1)
	{
		cout << "0 0" << endl ;
	}
	else 
	{
		cout << (a&2? a/4+1: a/4) << ' ' << a/2 << endl ;
	}
	return 0 ;
}
