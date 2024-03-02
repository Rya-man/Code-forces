#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int sec,x =0;
    char a[3];
    cin>>sec;
    for(int i=0;i<sec;i++)
    {
        cin>>a[0]>>a[1]>>a[2];
        if(a[1]=='+')
        x++;
        if(a[1]=='-')
        x--;
    }
    cout<<x;
}