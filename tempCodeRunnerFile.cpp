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

ll sum_of_array(vi arr,int n)
{
    ll sum =0;
    for(int i=0;i<n;i++)
        sum+=arr[i];
    return sum;
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

    int nt;
    cin>>nt;
    while(nt>0)
    {
        int n;
        cin>>n;
        vi arr(n);
        inp(arr,n);
        vi m(3);
        m[0]=m[1]=m[2]=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>m[2])
            {
                m[0]=m[1];
                m[1]=m[2];
                m[2]=arr[i];
                continue;
            }
            if(arr[i]>m[1])
            {
                m[0]=m[1];
                m[1]=arr[i];
                continue;
            }
            if(arr[i]>m[0])
            {
                m[0]=arr[i];
            }
        }
        if(sum_of_array(m,3)>99)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

        nt--;
    }

    // Your code here

    return 0;
}
