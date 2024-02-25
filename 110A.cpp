#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long int n,count;
    cin>>n;
    for(count = 0;n!=0;)
    {
        if(n%10==7 or n%10 ==4)
        count++;
        n/=10;
    }
    (count ==7 or count==4)?cout<<"YES"<<endl:cout<<"NO";
}