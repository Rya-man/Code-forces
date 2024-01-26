#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    
    if(a==2){
        cout<<"No";
        return 0;
    }
    a&1?cout<<"No":cout<<"Yes";
    return 0;
}