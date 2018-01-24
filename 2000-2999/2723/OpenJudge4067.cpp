#include <iostream>
#include <algorithm>
#include <string>  

using namespace std ;

int main(int argc, char *argv[])
{
	string str ;
	while (cin >> str) 
	{
		string str2 = str ;
		reverse(str.begin(), str.end());  
		puts(str == str2? "YES": "NO");
	}
	return 0 ;
}
