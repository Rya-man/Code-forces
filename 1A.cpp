#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,m,a;
    cin>>n>>m>>a;
    int res = (n*m)/(a*a);
    (n*m)%(a*a)==0?cout<<res:cout<<res+1;
}