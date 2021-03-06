#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<stack>
#include<list>
#include<vector>
#include<set>
#include<map>
#define FOR(i,bg,ed) for(int i=bg;i<=ed;++i)
#define RFOR(i,bg,ed) for(int i=bg;i>=ed;--i)
#define FOR_S(i,bg,ed,step) for(int i=bg;i<=ed;i+=step)
#define RFOR_S(i,bg,ed,step) for(int i=bg;i>=ed;i-=step)
#define MSET(a,i) memset(a,i,sizeof(a))
#define CIa1(a,i) cin>>a[i]
#define CIa2(a,i,j) cin>>a[i][j]
#define COa1(a,i) cout<<a[i]<<' '
#define COa2(a,i,j) cout<<a[i][j]<<' '
#define SCIa1(a,i) scanf("%d",&a[i])
#define SCIa2(a,i,j) scanf("%d",&a[i][j])
#define SCOa1(a,i) printf("%d ",a[i])
#define SCOa2(a,i,j) printf("%d ",a[i][j])
#define RFF(s) freopen(s,"r",stdin)
#define WFF(s) freopen(s,"w",stdout)
#define LL long long int
#define SPACE printf(" ")
#define ENTER printf("\n")
using namespace std;
int a,b;
int ans=0;
int items;
void go(int p,int cur,int low)
{
    if (p==0 && cur==b)
    {
        ++ans;
        return;
    }
    else if (p<0 || cur>b)
        return;
    FOR(i,low,items)
    {
        //cout<<i<<endl;
        if (i<=p)
        {
            go(p-i,cur+1,i);
        }
        else return;
    }
}
void init()
{
    ans=0;
    cin>>a>>b;
    items=a-b+1;
    go(a,0,1);
    cout<<ans<<endl;
}
int main()
{
    //RFF("1370.in");
    //WFF("t.out");
    int N;
    cin>>N;
    FOR(i,1,N)
        init();
    return 0;
}
