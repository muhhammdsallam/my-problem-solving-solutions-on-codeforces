#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string a;
    cin>>a;
    sort(a.begin(),a.end());
    int x=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=a[i+1]){
            x++;}
    }
    if(x%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

    return 0;
}