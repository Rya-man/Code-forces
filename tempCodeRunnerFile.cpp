#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int sec,x =0;
    char* a;
    cin>>sec;
    for(int i=0;i<sec;i++)
    {
        cin>>a;
        if(!strcmp(a,"++x") || !strcmp(a,"x++"))
        x++;
        if(!strcmp(a,"--x") || !strcmp(a,"x--"))
        x--;
    }
    cout<<x;
}