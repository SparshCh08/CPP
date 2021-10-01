#include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define f1(i,n) for(ll i=1;i<=n;i++)
#define f0(i,n) for(ll i=0;i<n;i++)
#define fr(i,n) for(ll i=n-1;i>=0;i--)
#define fa(i,p,n) for(ll i=p;i<=n;i++)
#define f(i,a) for(auto &i:a)
#define vr vector <ll>
#define pb push_back
#define sn cout<<"\n";
#define sf cout<<endl;
#define mp(x,y) make_pair(x,y)
#define M map<ll,ll>
#define P pair<ll,ll>
#define S second
#define F first
#define PI 3.14159265
#define count1(x) __builtin_popcount(x)
#define G greater<ll>()
#define all(X) X.begin(),X.end()
#define allg(X) X.rbegin(),X.rend()
#define T  int t;cin>>t; while(t--)
// #define OSS tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
// #define OSG tree<ll,null_type,greater<ll>,rb_tree_tag,tree_order_statistics_node_update>
// cout<<(s.order_of_key(5)); strictly greater/less 
// cout<<*(s.find_by_order(6));index of that element
#define sync ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll MX=200010;
const ll mod=1e9+7;
ll fact[MX],inv[MX];

ll power(ll x,ll y)
{
  if (y==0)return 1;
  ll p=power(x, y / 2) % mod;
  p=(p*p) % mod; 
  return (y % 2 == 0) ? p : (x * p) % mod;
}

void fac()
{
  fa(i,1,MX-1)
  {
    fact[i]=(fact[i-1]*i)%mod;
    inv[i]=power(fact[i],mod-2)%mod;
  }
  return;
}

ll nCr(ll n,ll r)
{

  if(r>n)return 0;
  if(r<0)return 0;
  return (((fact[n]*inv[r])%mod)*inv[n-r])%mod;
}
int main()
{
  sync
  //try:)
  T{
    // Your code here 
  }
  return 0;
}
