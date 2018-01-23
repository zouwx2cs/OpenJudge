#include <iostream>

using namespace std ;

int main(int argc, char *argv[]) 
{
	int a ;
	cin >> a ;
	cout << (a%400==0 || a%4==0&&a%100!=0? "Y": "N") << endl ;
	return 0 ;
}
