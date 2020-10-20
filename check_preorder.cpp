#include <bits/stdc++.h>
#define ll long long int
#define N 1000
#define M 1000000007
#define f(i, a, b) for (ll i = (ll)a; i <= (ll)b; i++)
#define rf(i, a, b) for (ll i = (ll)a; i >= (ll)b; i--)
#define po pop_back
#define pb push_back
#define lb lower_bound
#define fi first
#define se second
#define mp make_pair
#define bs binary_search
#define debug(x) cout << #x << " = " << x << endl
#define ub upper_bound
#define ibs ios_base::sync_with_stdio(false)
#define cti cin.tie(0)
#define all(x) x.begin(), x.end()
#define PI 3.14159265
#define cot cout.tie(0)
using namespace std;
/**
  * @author :: Rishabh
  *
  */
int main() 
{
    ibs;
    cti;
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n; int a[n],c=0; 
	    for(int i=0;i<n;i++) 
	    {cin>>a[i];}
	    for(int i=0;i<(n-1)/2;i++)
	    {
	       if(a[i]>a[0]) {c++;}
	    }
	    for(int i=(n+3)/2;i<n;i++)
	    {
	        if(a[i]<a[0]) {c++;}
	    }
	    if(c==0)cout<<"1"<<endl;
	    if(c>0)cout<<"0"<<endl;
	}
	return 0;
}