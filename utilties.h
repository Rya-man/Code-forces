#ifndef UTILITIES_H
#define UTILITIES_H

#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

using namespace std;

// Typedefs
#define nl cout<<'\n';
typedef vector<int> vi;
typedef long long LL;
typedef pair<int,int> pii;
typedef pair<LL,LL> pll;
typedef pair<string,string> pss;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<LL> vl;
typedef vector<vl> vvl;
#define ump unordered_map
#define ust unordered_set
#define pq priority_queue
typedef unordered_map<int,int> umpii;
typedef unordered_map<char,int> umpci;
typedef unordered_map<int,bool> umpib;
typedef unordered_set<int> usi;
typedef unordered_set<char> usc;

// Debugging
#ifdef TESTING
  #define DEBUG fprintf(stderr,"====TESTING====\n")
  #define VALUE(x) cerr << "The value of " << #x << " is " << x << endl
  #define debug(...) fprintf(stderr, __VA_ARGS__)
#else
  #define DEBUG 
  #define VALUE(x)
  #define debug(...)
#endif

// Constants
const int MOD = 1e9 + 7;
const int INF = INT_MAX;
double EPS = 1e-9;
long long INFF = 1000000000000000005LL;
double PI = acos(-1);
extern int dirx[8];
extern int diry[8];

// Macros
#define show(arr) for (auto i: arr) {cout << i << ' ';} cout << "\n"
#define inp(arr,n) for(int i=0;i<n;i++) {cin>> arr[i];}
#define ALL(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define FOR(a,b,c) for (int (a)=(b);(a)<(c);++(a))
#define FORN(a,b,c) for (int (a)=(b);(a)<=(c);++(a))
#define FORD(a,b,c) for (int (a)=(b);(a)>=(c);--(a))
#define FORSQ(a,b,c) for (int (a)=(b);(a)*(a)<=(c);++(a))
#define FORC(a,b,c) for (char (a)=(b);(a)<=(c);++(a))
#define FOREACH(a,b) for (auto &(a) : (b))
#define REP(i,n) FOR(i,0,n)
#define REPN(i,n) FORN(i,1,n)
#define MAX(a,b) a = max(a,b)
#define MIN(a,b) a = min(a,b)
#define SQR(x) ((LL)(x) * (x))
#define RESET(a,b) memset(a,b,sizeof(a))
#define ALLA(arr,sz) arr,arr+sz
#define SIZE(v) (int)v.size()
#define SORT(v) sort(ALL(v))
#define REVERSE(v) reverse(ALL(v))
#define SORTA(arr,sz) sort(ALLA(arr,sz))
#define REVERSEA(arr,sz) reverse(ALLA(arr,sz))
#define PERMUTE next_permutation
#define TC(t) while(t--)

// Fast I/O
auto initialize = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

// Function declarations
LL mod(LL a, LL m);
LL power(LL x, LL y, LL m);
bool isPrime(int n);
LL sum_of_array(const vi& arr);
string IntToString(LL a);
LL StringToInt(const string& a);
string GetString();
string uppercase(string s);
string lowercase(string s);
void OPEN(const string& s);
int binsearch(const vi& arr, int a);
vi sieve(int n);

#endif // UTILITIES_H
