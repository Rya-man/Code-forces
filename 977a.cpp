#include<bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#define ll long long
#define endl "\n"
#define show(arr) for (auto i: arr) {cout << i << ' ';} cout << "\n"
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
#define debug(x) cout << #x << " = " << (x) << endl;
using namespace std;
auto initialize = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=0;i<k;i++)
    {
        if((n%10)==0)
        {
            n/=10;
        }
        else
        n--;
    }
    cout<<n;
}