#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
#endif
	
	int n, m, p ;
	int cnts[26] = {0, } ;
	int *pCnt = cnts ;
	scanf("%d%d%d", &n, &m, &p) ;
	while (n--)
	{
		char s[11] ;
		char *pCh ;
		scanf("%s", s) ;
		for (pCh = s; *pCh; ++pCh)
		{
			++cnts[*pCh - 'A'] ;
		}
	}
	while (p--)
	{
		char s[101] ;
		char *pCh ;
		scanf("%s", s) ;
		for (pCh = s; *pCh; ++pCh)
		{
			--cnts[*pCh - 'A'] ;
		}
	}
	while (pCnt < cnts+26)
	{
		if (*pCnt > 0)
		{
			while ((*pCnt)--)
			{
				printf("%c", pCnt - cnts + 'A') ;
			}
		}
		pCnt++ ;
	}
	puts("") ;
	
	
	return 0 ;
}
