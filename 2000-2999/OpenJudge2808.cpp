#include <iostream>
#include <vector>
using namespace std ;

int main(int argc, char *argv[]) 
{
	int L, M ;
	int start, end ;
	cin >> L >> M ;
	vector<bool> trees(L+1, true) ;
	
	while (cin >> start >> end)
	{
		for (int i = start; i <= end; ++i) 
		{
			trees[i] = false ;
		}
	}
	
	int cnt = 0 ;
	for (auto item: trees)
	{
		if (item == true)
			++cnt ;
	}
	
	cout << cnt << endl ;
	
	return 0 ;
}
