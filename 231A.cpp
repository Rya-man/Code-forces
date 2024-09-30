#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count =0,ans[3],n;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ans[0]>>ans[1]>>ans[2];
        if((ans[0]+ans[1]+ans[2])>=2)
        count++;
    }
    cout<<count;

}