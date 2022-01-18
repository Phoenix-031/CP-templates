/* Debayan Pradhan */

#include<bits/stdc++.h>
#pragma GCC optimize ("-O3")
using namespace std;
using namespace chrono;

#define fast_io std::ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0); 
#define PI 3.14159265358979323844
#define mod 1000000007
#define pb push_back
#define pbk pop_back
#define ff first
#define ss second
#define all(x) x.begin(), x.end() 
#define tr(it,v) for(auto it=a.begin(),it!=a.end();it++)
#define fo(i,n) for(int i=0;i<n;i++)
#define rfo(i,n) for(int i=n-1;i>=0;i--)
#define sorta(v) sort(all(v))
#define mp make_pair
#define nl "\n"

#ifndef ONLINE_JUDGE
#define db(x) cerr<<#x<<" = "; _dbgf(x);cerr<<nl;
#endif


typedef long long  ll;
typedef unsigned long long  ull;
typedef pair<int, int>    pii;
typedef pair<ll, ll> pl;
typedef vector<int>     vi;
typedef vector<ll>      vl;
typedef vector<pii>     vpii;
typedef vector<pl>      vpl;

// debugging functions

void _dbgf(int x){cerr<<x;}
void _dbgf(double x){cerr<<x;}
void _dbgf(ll x){cerr<<x;}
void _dbgf(string x){cerr<<x;}
void _dbgf(long int x){cerr<<x;}
void _dbgf(char x){cerr<<x;}
void _dbgf(ull x){cerr<<x;}


template<class T>void _dbgf(vector<T> v){cerr<<"[";for(T a:v){_dbgf(a);cerr<<" ";}cerr<<"]";}
template<class T>void _dbgf(set<T> s){cerr<<"[";for(T a:s){_dbgf(a);cerr<<" ";}cerr<<"]";}
template<class T,class V>void _dbgf(map<T,V> m){cerr<<"[";for(pair<T,V> a : m){cerr<<a.first<<" : "<<a.second<<",";}cerr<<"]";}


void solve(){

   
}


int main(){

 #ifndef ONLINE_JUDGE
     freopen("error.txt","w",stderr);
 #endif

 fast_io; 

 long long t = 1; 
 cin>>t; 
 while(t--){
  auto start1 = high_resolution_clock::now();
  solve();
  auto stop1 = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop1 - start1);
  #ifndef ONLINE_JUDGE
        cerr<<"TIME: "<<duration.count()/1000<<nl;
  #endif
  }

  return 0;
}
