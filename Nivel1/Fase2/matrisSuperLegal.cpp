/*
#include<bits/stdc++.h>
#include<stack>
#define MAX 1005
using namespace std;
//?
int n,m;
int a[MAX][MAX];
bool b[MAX][MAX];
int j_0[MAX][MAX];
int j_1[MAX][MAX];
int h[MAX][MAX];


void ch()
{
    for(int i=1;i<n;i++)
        for(int j=1;j<m;j++)
            if(b[i][j])
                b[i-1][j]==1 ? h[i][j]=h[i-1][j]+1 : h[i][j]=1;


}

void cj0()
{
    for(int i=1;i<n;i++)
    {
        stack<pair<int,int> >st;

        for(int j=1;j<m;j++)
        {
            while(!st.empty() && st.top().second >= h[i][j])
                st.pop();

            if(st.empty()) j_0[i][j]=0;
            else j_0[i][j]=st.top().first;

            st.push(make_pair(j,h[i][j]));


        }

    }

}

void cj1()
{
    for(int i=1;i<n;i++)
    {
        stack<pair<int,int> >st;

        for(int j=m-1;j>0;j--)
        {
            while(!st.empty() && st.top().second >= h[i][j])
                st.pop();

            if(st.empty()) j_1[i][j]=m;
            else j_1[i][j]=st.top().first;

            st.push(make_pair(j,h[i][j]));


        }

    }
}



int main()
{
    memset(j_0,0,sizeof(j_0));
    memset(h,0,sizeof(h));
    memset(j_1,0,sizeof(j_1));

    cin>>n>>m;

    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    cin>>a[i][j];

    for(int i=1;i<n;i++)
        for(int j=1;j<m;j++)
            if(a[i][j]+a[i+1][j+1]<=a[i+1][j]+a[i][j+1])
                b[i][j]=1;

    ch();
    cj0();
    cj1();

    int resp=0;

    for(int i=1;i<n;i++)
        for(int j=1;j<m;j++)
            if(h[i][j])
                resp=max(resp, (j_1[i][j]-j_0[i][j]) * (h[i][j]+1) );

    cout<< resp;


    return 0;
}
*/
#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

const int maxn = 1e3+10;

int n, m;

// altura de cada célula
int h[maxn][maxn];

// matrizes
int A[maxn][maxn], B[maxn][maxn];

int j_0[maxn][maxn], j_1[maxn][maxn];

void calc_h(void)
{
	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j < m; j++)
		{
			if (!B[i][j]) continue;

			// calculamos h[i][j] baseando-nos na célula acima
			if (B[i-1][j] == 1) h[i][j] = 1+h[i-1][j];
			else h[i][j] = 1;
		}
	}
}

void calc_j0(void)
{
	for (int i = 1; i < n; i++)
	{
		stack<pii> stk;

		for (int j = 1; j < m; j++)
		{
			// algoritmo 2

			while (!stk.empty() && stk.top().second >= h[i][j])
				stk.pop();

			// se j0 não existe, digamos que ele será uma posição a
			// menos do limite (1)
			if (stk.empty()) j_0[i][j] = 0;
			else j_0[i][j] = stk.top().first;

			stk.push({j, h[i][j]});
		}
	}
}

void calc_j1(void)
{
	for (int i = 1; i < n; i++)
	{
		stack<pii> stk;

		for (int j = m-1; j >= 1; j--)
		{
			// algoritmo 2

			while (!stk.empty() && stk.top().second >= h[i][j])
				stk.pop();

			// se j1 não existe, digamos que ele será uma posição a
			// mais do que o limite (m-1)
			if (stk.empty()) j_1[i][j] = m;
			else j_1[i][j] = stk.top().first;

			stk.push({j, h[i][j]});
		}
	}
}

int main(void)
{
	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			scanf("%d", &A[i][j]);

	// checando todas as matrizes 2x2
	for (int i = 1; i < n; i++)
		for (int j = 1; j < m; j++)
			if (A[i][j]+A[i+1][j+1] <= A[i+1][j]+A[i][j+1])
				B[i][j] = 1;

	calc_h();

	calc_j0();
	calc_j1();

	// resposta do problema
	int ans = 0;

	for (int i = 1; i < n; i++)
		for (int j = 1; j < m; j++)
			if (h[i][j])
				ans = max(ans, (j_1[i][j]-j_0[i][j])*(h[i][j]+1)); // (x_m+1)*(y_m+1)

	printf("%d\n", ans);
}
