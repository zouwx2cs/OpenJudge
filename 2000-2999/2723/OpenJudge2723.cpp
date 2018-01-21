#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>

using namespace std ;

// Number of days per month
int daysPerMonth[] = {0, 31, 28, 31, 30, 31, 30, 
				31, 31, 30, 31, 30} ;


int main(int argc, char *argv[]) 
{
	int whatday ;
	cin >> whatday ;
	
	for (int i = 1; i <= 12; ++i)
	{
		static int days = whatday + 13-1 ;
		days += daysPerMonth[i-1] ;
		if (days % 7 == 5)
			cout << i << endl; 
	}
	 
	return 0 ;
}
