#include <iostream>
#include <string>
#include <cstring>
#include <map>
#include <cstdio>
#include <cstdlib>

using namespace std ;

int main(int argc, char *argv[])
{
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin) ; 
	#endif 
	
	int N, M, P ;
	string tmp ;
	cin >> N >> M >> P ;
	map<char, int> charMap ;
	
	while (N--)
	{
		cin >> tmp ;
		for (char ch: tmp)
		{
			if (charMap[ch])
			{
				charMap[ch]++ ;
			}
			else 
			{
				charMap[ch] = 1 ;
			}
		}
	}
	
	for (int i = 0; i < P; ++i)
	{
		cin >> tmp ;
		for (char ch: tmp)
		{
			charMap[ch]-- ;
		}
	}
	
	for (char ch = 'A'; ch <= 'Z'; ++ch)
	{
		if (charMap[ch])
		{
			int num = charMap[ch] ;
			for (int i = 0; i < num; ++i)
			{
				cout << ch ;
			}
		}
	}
	
	cout << endl ;

	return 0 ;
}
