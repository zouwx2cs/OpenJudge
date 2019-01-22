#include <iostream>

using namespace std ;

struct Node {
    int l, r ;
    int M ;
    int m ;
    Node *left, *right ;
    Node(int ll, int rr): l(ll), r(rr), M(-1), m(1000001), left(NULL), right(NULL) {} ;
};

Node *CreateTree(int l, int r)
{
    Node *node = new Node(l, r) ;
    if (l != r)
    {
        const int mid = (l+r) >> 1 ;
        node->left = CreateTree(l, mid) ;
        node->right = CreateTree(mid+1, r) ;
    }
    return node ;
}

void InsertValue(Node *r, int pos, int value)
{
    if (nullptr == r)
        return ;

    if (pos < r->l || pos > r->r)
        return ;

    r->M = max(r->M, value) ;
    r->m = min(r->m, value) ;

    InsertValue(r->left, pos, value) ;
    InsertValue(r->right, pos, value) ;
}

void getMaxAndMin(Node *rNode, int l, int r, int &M, int &m)
{
    if (nullptr == rNode)
        return ;

    if (r < rNode->l || l > rNode->r)
        return ;

    if (rNode->M <= M && rNode->m >= m)
        return ;

    if (l <= rNode->l && r >= rNode->r)
    {
        M = max(M, rNode->M) ;
        m = min(m, rNode->m) ;
    }

    getMaxAndMin(rNode->left, l, r, M, m) ;
    getMaxAndMin(rNode->right, l, r, M, m) ;
}

int main(void)
{
    int N, Q ;
    Node *root = CreateTree(1, 50000) ;
    int in ;
    scanf("%d%d", &N, &Q) ;
    for (int i = 1; i <= N; ++i)
    {
        scanf("%d", &in);
        InsertValue(root, i, in);
    }
    for (int i = 0; i < Q; ++i)
    {
        int l, r ;
        int M = -1, m = 1000001 ;
        scanf("%d%d", &l, &r) ;
        getMaxAndMin(root, l, r, M, m) ;
        printf("%d\n", M - m) ;
    }
    return 0 ;
}
