#include <iostream>
#include <string>
#include <cmath>

using namespace std ;

int main(int argc, char *argv[])
{
	int t ;
	cin >> t ;
	while (t--)
	{
		string s, e ;
		cin >> s >> e ;
		int sx = s[0] - 'a' + 1 ;
		int sy = s[1] - '0' ;
		int ex = e[0] - 'a' + 1 ;
		int ey = e[1] - '0' ;
		
		int w, h, c ;
		string x = "Inf" ;
		if (s == e)
		{
			cout << "0 0 0 0" << endl ;
			continue ;
		}
		
		w = abs(sx - ex) > abs(sy - ey)? abs(sx - ex): abs(sy - ey) ;
		
		if (sx == ex || sy == ey)
		{
			h = c = 1 ;
		}
		else 
		{
			h = c = 2 ;
		}
		
		if (sx-sy == ex-ey || sx+sy == ey+ex)
		{
			h = 1 ;
			x = "1" ;
		} 
		else if ( ((sx+sy)&1) == ((ex+ey)&1) )
		{
			x = "2" ;
		}
		
		
		
		
		

		cout << w << ' ' << h << ' ' << c << ' ' << x << endl ;
	}
	return 0 ;
}
