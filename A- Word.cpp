#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int x=0,y=0;
    for(int i=0;i<a.size();i++)
    {
        if(isupper(a[i])){
            x++;}
        if(islower(a[i])){
            y++;
        }
    }
    if(x==y || y>x)
    {
        for(int i=0;i<a.size();i++)
        {
            a[i]=tolower(a[i]);
        }
    }
    if(x>y)
    {
        for(int i=0;i<a.size();i++)
        {
            a[i]=toupper(a[i]);
        }
    }
    cout<<a<<endl;
    return 0;
}