#include <bits/stdc++.h>
 
using namespace std;
 
#define InT_MA      2147483647
#define FastIO      ios_base::sync_with_stdio(false);
#define whi(x)      cout << #x << " is " << x << endl;
#define ff0(i,n)    for (int i=0; i<n; i++)
#define bug1(x,y)   cout<<"$ "<<x<<" $ "<<y<<endl
#define bug2(x,y)   cout<<"% "<<x<<" % "<<y<<endl
#define bug3(x)     cout<<"# "<<x<<" #"<<endl
#define ppcll __builtin_popcountll
#define ve          vector
#define pii         pair<int,int> 
#define tii         tuple<int,int,int>
#define ll          long long
#define pb          push_back
#define qi          queue <int>
#define mp          make_pair
#define loop(i,a,b) for(long long i=a; i<b; i++)
#define ffj         for(int j=1;j<=t;j++)
#define mx 100001
#define pi acos(-1.0)
#define inf 1e9
 
int main()
{
    FastIO
    ll n,r=0,x;
    cin>>n>>x;
    ff0(i,n-1){
        int p;
        cin>>p;
        if(p<x)r+=x-p;
        else x=p;
    }
    cout<<r;
}