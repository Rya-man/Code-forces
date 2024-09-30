#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

using namespace std;

// Typedefs
#define ll long long
#define endl "\n"
#define vi vector<int>
#define pii pair<int, int>

// Constants
const int MOD = 1e9 + 7;
const int INF = INT_MAX;

// Macros
#define show(arr) for (auto i: arr) {cout << i << ' ';} cout << "\n"
#define inp(arr,n) for(int i=0;i<n;i++) {cin>> arr[i];}
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
#define pb push_back
#define mp make_pair
#define F first
#define S second

// Debugging
#ifdef LOCAL_DEBUG
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif

// Fast I/O
auto initialize = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

// Modular arithmetic
ll mod(ll a, ll m) {
    return (a % m + m) % m;
}

// Power function with modulo
ll power(ll x, ll y, ll m){
    if (y == 0)
        return 1;
    ll p = power(x, y / 2, m) % m;
    p = (p * p) % m;
    return (y % 2 == 0) ? p : (x * p) % m;
}

// Prime number check
bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

int main() {

    int n;
    cin>>n;
    vi arr(n);
    // Your code here
    
    inp(arr,n);
    int e=0,o=0;
    int ec=arr[0],oc=arr[0];
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]&1)
        {
            o++;
            oc=i;
        }
        else
        {
            e++;
            ec =i;
        }
        
        if(e>o && o!=0)
        {
            cout<<oc+1;
            return 0;
        }
        if(o>e && e!=0)
        {
            cout<<ec+1;
            return 0;
        }

    }

    return 0;
}
