// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     int c=0;
//     for(int i=0;i<7;i++){
//         if((n & (1<<i)) !=0){
//             cout<<(n & (1<<i))<<"\n";
//             }
//         }
//     // cout<<c;
//    	return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     cout<<(12 & (1<<1));
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int palin(long int n){
//     long int c=0;
//     while(n){
//         c+=n%10;n/=10;
//         if(n!=0)
//           c*=10;
//     }
//     if(c==n)
//         return 1;
//     return 0;

// }
// int main(){
//     int x=100;long int m=1;
//     while(x < 1000){

//         for(int i=101;i<1000;i++){
//         if(palin(x*i) && (x*i > m))
//             m=x*i;
//         }
//     }
//     cout<<m;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n=100;
//     long long x = pow((n*(n+1))/2,2) - (n*(n+1)*(2*n+1))/6;
//     cout<<x;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     unsigned int n = -1000;
//     cout<<n;
//     return 0;
// }

     // #include<bits/stdc++.h>
     // using namespace std;

     // #define fast_io std::ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0); 
     // #define PI 3.14159265358979323844
     // #define pb push_back
     // #define pbk pop_back
     // #define fs first
     // #define sc second
     // #define all(v) v.begin(),v.end() 
     // #define fo(i,n) for(int i=0;i<n;i++)
     // // #define vector<int> vi
     // #define nl "\n"

     
     // typedef long long ll;
     // // typedef unsigned long long ull
     

     // void solve(){
     //     ll n = 100000000000000;
     //     cout<<n;
     // }


     // int main(){
     // fast_io;
     //    long long t = 1;
     //    cin>>t;
     //    while(t--){
     //    solve();
     //    }
     //    return 0;
     // }

 //     #include<bits/stdc++.h>
 //     #pragma GCC optimize ("-O3")
 //     using namespace std;

 //     #define fast_io std::ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0); 
 //     #define PI 3.14159265358979323844
 //     #define pb push_back
 //     #define pbk pop_back
 //     #define fs first
 //     #define sc second
 //     #define all(v) v.begin(),v.end() 
 //     #define fo(i,n) for(int i=0;i<n;i++)
 //     #define nl "\n"


 //     typedef long long ll;
 //     typedef unsigned long long ull;
     

 //     void solve(){
 //        long int q;
 //        cin>>q;
 //         vector<pair<long int,long int>> p;
 //          for(int i=0;i<q;i++){
 //            long int a,b;
 //            cin>>a>>b;
 //            p.pb(make_pair(a,b));
 //        }
 //        for(int i=0;i<q;i++){
 //            cout<<p[i].first<<p[i].second<<nl;
 //     }
 // }


 //     int main(){
 //     fast_io;
 //        long long t = 1;
 //        // cin>>t;
 //        while(t--){
 //        solve();
 //        }
 //        return 0;
 //     }

// #include<stdio.h>
// using namespace std;
// int main(){
//     int n;
//     scanf('%d',&n);
//     const int dg =5;
//     int a[dg];
//     for(int i=0;i<dg;i++)
//         printf('%s',"chill");
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     n--;
//     if(n == 0)
//         cout<<"t";
//     return 0;
// 

// #include<bits/stdc++.h>
// using namespace std;
// namespace f{
//     double val;
// }
// int main(){
//     int v = 8;
//     cout<<(++v)-(v++);
    
    
    
//     return 0;
// }

// #include<bits/stdc++.h>
// #include<string>
// using namespace std;

// #ifndef ONLINE_JUDGE
// #define dbg(x) cerr<<#x<<" =";_printv(x);
// #endif

// void _printv(vector<int> v){
//     cerr<<"[";
//     for(auto x:v)
//         cerr<<x<<",";
//     cerr<<"]"<<"\n";

// }
// void _printv(int x){cerr<<x<<"\n";}
// void _printv(double x){cerr<<x<<"\n";}
// void _prints(string s){cerr<<s<<"\n";}

// // void _printv(vector<int> v)
// // void _printv(vector<int> v)
// // void _printv(vector<int> v)
// // void _printv(vector<int> v)


// int main(){
//     #ifndef ONLINE_JUDGE
//          freopen("error.txt","w",stderr);
//     #endif
//     double a=10.09972,b=20.246;
//     vector<int> v = {1,2,3,4,5,6,7,8};


//     a++;
//     v[1]++;
    
//     v[6] = v[1]+v[0];
//     cout<<a+b;
//     dbg(v);
//     dbg(a)
//     dbg(b)
//     string s = "debayan";
//     dbg(s);
    
//     return 0;
// }

// #include<bits/stdc++.h>
// #pragma GCC optimize ("-O3")
// using namespace std;

// #define fast_io std::ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0); 
// #define PI 3.14159265358979323844
// #define mod 1000000007
// #define pb push_back
// #define pbk pop_back
// #define fs first
// #define sc second
// #define all(v) v.begin(), v.end() 
// #define tr(it,v) for(auto it=a.begin(),it!=a.end();it++)
// #define fo(i,n) for(int i=0;i<n;i++)
// #define rfo(i,n) for(int i=n-1;i>=0;i--)
// #define sorta(v) sort(all(v))
// #define mp make_pair
// #define nl "\n"
// #ifndef ONLINE_JUDGE
// #define db(x) cerr<<#x<<" = "; _dbgf(x);cerr<<nl;
// #endif

// _dbgf(int x){cerr<<x;}
// _dbgf(float x){cerr<<x;}
// _dbgf(double x){cerr<<x;}
// _dbgf(long long x){cerr<<x;}
// _dbgf(string x){cerr<<x;}
// _dbgf(long int x){cerr<<x;}

// template<class T>void _dbgf(vector<T> v){cerr<<"[";for(T a:v){_dbgf(a);cerr<<" ";}cerr<<"]";}


// typedef long long ll;
// typedef unsigned long long ull;
// typedef pair<int, int>   pii;
// typedef pair<ll, ll> pl;
// typedef vector<int>     vi;
// typedef vector<ll>      vl;
// typedef vector<pii>     vpii;
// typedef vector<pl>      vpl;


// void solve(){

//    int a=20,b=30;
//    db(a);db(b);
//    string s = "debayan";
//    db(s);
//    vector<int> v={1,2,3,4,5,6,7};
//    db(v);
// }


// int main(){

//  #ifndef ONLINE_JUDGE
//      freopen("error.txt","w",stderr);
//  #endif

//  fast_io; 

//  long long t = 1; 
//  cin>>t; 
//  while(t--){

//   solve();

//   }

//   return 0;
// }

// #include<bits/stdc++.h>
// #pragma GCC optimize ("-O3")
// using namespace std;

// #define fast_io std::ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0); 
// #define PI 3.14159265358979323844
// #define mod 1000000007
// #define pb push_back
// #define pbk pop_back
// #define fs first
// #define sc second
// #define all(v) v.begin(), v.end() 
// #define tr(it,v) for(auto it=a.begin(),it!=a.end();it++)
// #define fo(i,n) for(int i=0;i<n;i++)
// #define rfo(i,n) for(int i=n-1;i>=0;i--)
// #define sorta(v) sort(all(v))
// #define mp make_pair
// #define nl "\n"
// #ifndef ONLINE_JUDGE
// #define db(x) cerr<<#x<<" = "; _dbgf(x);cerr<<nl;
// #endif

// void _dbgf(int x){cerr<<x;}
// void _dbgf(float x){cerr<<x;}
// void _dbgf(double x){cerr<<x;}
// void _dbgf(long long x){cerr<<x;}
// void _dbgf(string x){cerr<<x;}
// void _dbgf(long int x){cerr<<x;}
// void _dbgf(char x){cerr<<x;}


// template<class T>void _dbgf(vector<T> v){cerr<<"[";for(T a:v){_dbgf(a);cerr<<" ";}cerr<<"]";}
// template<class T>void _dbgf(set<T> s){cerr<<"[";for(T a:s){_dbgf(a);cerr<<" ";}cerr<<"]";}
// template<class T,class V>void _dbgf(map<T,V> m){cerr<<"[";for(pair<T,V> a : m){cerr<<a.first<<" : "<<a.second<<",";}cerr<<"]";}



// typedef long long  ll;
// typedef unsigned long long  ull;
// typedef pair<int, int>    pii;
// typedef pair<ll, ll> pl;
// typedef vector<int>     vi;
// typedef vector<ll>      vl;
// typedef vector<pii>     vpii;
// typedef vector<pl>      vpl;


// void solve(){

//    map<int,string> m;
//    m[0] = "skfhsi";
//    m[1] = "afhkfje";
//    m[2] = "fasuhekr";
//    db(m);
// }


// int main(){

//  #ifndef ONLINE_JUDGE
//      freopen("error.txt","w",stderr);
//  #endif

//  fast_io; 

//  long long t = 1; 
//  cin>>t; 
//  while(t--){

//   solve();

//   }

//   return 0;
// }

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
#define all(v) v.begin(), v.end() 
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

// debugging functions..

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
template<class T,class V>void _dbgh(pair<T,V> p){cerr<<p.ff<<" "<<p.ss;}


void solve(){

  pair<int,int> p ={1,5};
  db(p);
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
