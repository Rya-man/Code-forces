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
const int INF2 = 0x3f3f3f3f;
const int INF = INT_MAX;
double EPS = 1e-9;
long long INFF = 1000000000000000005LL;
double PI = acos(-1);
int dirx[8] = {-1,0,0,1,-1,-1,1,1};
int diry[8] = {0,1,-1,0,-1,1,-1,1};

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

// Modular arithmetic
inline LL mod(LL a, LL m) {
    return (a % m + m) % m;
}

// Power function with modulo
inline LL power(LL x, LL y, LL m){
    if (y == 0)
        return 1;
    LL p = power(x, y / 2, m) % m;
    p = (p * p) % m;
    return (y % 2 == 0) ? p : (x * p) % m;
}

// Prime number check
inline bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

// Sum of array
inline LL sum_of_array(const vi& arr) {
    LL sum = 0;
    for(int i : arr)
        sum += i;
    return sum;
}

inline string IntToString(LL a) {
    return to_string(a);
}

inline LL StringToInt(const string& a) {
    return stoll(a);
}

inline string GetString() {
    string s;
    cin >> s;
    return s;
}

inline string uppercase(string s) {
    for (char &c : s) if (c >= 'a' && c <= 'z') c -= 'a' - 'A';
    return s;
}

inline string lowercase(string s) {
    for (char &c : s) if (c >= 'A' && c <= 'Z') c += 'a' - 'A';
    return s;
}

inline void OPEN (const string& s) {
    #ifndef TESTING
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
    #endif
}

inline int binsearch(const vi& arr, int a) {
    int l = 0, h = SIZE(arr) - 1;
    while(l <= h) {
        int m = l + (h - l) / 2;
        if(arr[m] == a)
            return m;
        else if(arr[m] > a)
            h = m - 1;
        else
            l = m + 1;
    }
    return -1;
}

// Sieve of Eratosthenes
vi sieve(int n) {//sieve(31622)
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    vi primes;
    for (int i = 2; i <= n; ++i) {
        if (is_prime[i]) primes.push_back(i);
    }
    return primes;
}

// Matrix struct (used in some solutions)
struct matrix {
    long long mat[2][2];
    matrix friend operator *(const matrix &a, const matrix &b){
        matrix c;
        for (int i = 0; i < 2; i++) {
          for (int j = 0; j < 2; j++) {
              c.mat[i][j] = 0;
              for (int k = 0; k < 2; k++) {
                  c.mat[i][j] += a.mat[i][k] * b.mat[k][j];
              }
          }
        }
        return c;
    }
};

// Fast exponentiation for matrix
matrix matpow(matrix base, long long n) {
    matrix ans{ {
      {1, 0},
      {0, 1}
    } };
    while (n) {
        if(n & 1)
            ans = ans * base;
        base = base * base;
        n >>= 1;
    }
    return ans;
}

// Fibonacci via matrix exponentiation
long long fib(int n) {
    matrix base{ {
      {1, 1},
      {1, 0}
    } };
    return matpow(base, n).mat[0][1];
}

// Digit-by-digit addition of large strings
string stringsum(const string &a, const string &b) {
    string A(a.rbegin(), a.rend()), B(b.rbegin(), b.rend());
    string result;
    int carry = 0;
    int n = max(A.size(), B.size());
    
    for (int i = 0; i < n || carry; ++i) {
        int x = (i < (int)A.size()) ? A[i] - '0' : 0;
        int y = (i < (int)B.size()) ? B[i] - '0' : 0;
        
        int sum = x + y + carry;
        carry   = sum / 10;
        sum    %= 10;
        
        result.push_back(char(sum + '0'));
    }
    reverse(result.begin(), result.end());
    return result;
}

bool lessThanNumeric(const string &a, const string &b) {
    if (a.size() < b.size()) return true;
    if (a.size() > b.size()) return false;
    return a < b;
}

void result() {
    LL l;
    cin >> l;  // length of the number
    string s;
    cin >> s;  // the large number itself

    // We'll look around the midpoint for valid splits
    // because we want to keep the sum as small as possible
    int mid = l / 2;

    // Candidate splits
    int L = -1, R = -1;

    // Search left from mid for a valid position
    // We ensure the right substring doesn't start with '0'
    // and that left substring is non-empty (i >= 1).
    for (int i = mid; i >= 1; i--) {
        if (s[i] != '0') {
            L = i;
            break;
        }
    }

    // Search right from mid+1 for a valid position
    // Must ensure right substring is not empty (i < l)
    // and doesn't start with '0'.
    for (int i = mid + 1; i < (int)l; i++) {
        if (s[i] != '0') {
            R = i;
            break;
        }
    }

    // We'll compute sums for each valid split
    auto splitAndSum = [&](int idx) {
        string leftPart  = s.substr(0, idx);
        string rightPart = s.substr(idx);
        return stringsum(leftPart, rightPart);
    };

    string sumL, sumR;
    if (L != -1) sumL = splitAndSum(L);
    if (R != -1) sumR = splitAndSum(R);

    // Compare whichever sums are valid and pick the smallest numerically
    if (!sumL.empty() && !sumR.empty()) {
        if (lessThanNumeric(sumL, sumR)) cout << sumL << "\n";
        else                             cout << sumR << "\n";
    } 
    else if (!sumL.empty()) {
        cout << sumL << "\n";
    } 
    else {
        // sumR must be valid if sumL is empty
        cout << sumR << "\n";
    }
}

int main() {
    int tc=1;
    // cin >> tc;
    TC(tc) {
        result();
    }
    return 0;
}
