#include <iostream>

using namespace std;

int main()
{
    int a,b;
    int i=0;
    cin>>a>>b;
    while (a<=b)
    {
        if (a>b)
            break;
        else
        {
            i++;
            a=3*a;
            b=2*b;
        }
    }
    cout<<i<<endl;
    return 0;
}