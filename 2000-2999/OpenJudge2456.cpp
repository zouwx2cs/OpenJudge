#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <unordered_set>
#include <set>
#include <queue>
#include <stack>

#include <algorithm>

using namespace std ;

int arr[110000] ;
int N, C ;

inline bool Can(int dis)
{
    int cnt = 1 ;
    int prePosition = arr[0] ;
    for (int i = 1; i < N; ++i)
        if (arr[i] - prePosition >= dis)
        {
            prePosition = arr[i] ;
            if (++cnt >= C)
                return true ;
        }
    return false ;
}

int main() {
    scanf("%d%d", &N, &C) ;
    int maxPosition = -1 ;
    int minPosition = 1000000009 ;
    for (int i = 0; i < N; ++i)
    {
        scanf("%d", &arr[i]);
        maxPosition = max(maxPosition, arr[i]) ;
        minPosition = min(minPosition, arr[i]) ;
    }
    sort(begin(arr), begin(arr) + N) ;

    int l = 1, r = 1 + (maxPosition - minPosition)/(C-1) ;
    while (l < r)
    {
        const int mid = l + ((r-l) >> 1) ;
        if (Can(mid))
            l = mid+1 ;
        else
            r = mid ;
    }
    printf("%d\n", l-1) ;
    retu
