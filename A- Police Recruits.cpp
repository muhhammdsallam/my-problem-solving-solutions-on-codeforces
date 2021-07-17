#include <iostream>

using namespace std;

int main()
{
    int police=0;
    int crime=0;
    int n;
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>> n;
        if(n>0)
        {
            police=police+n;
        }
        else if(n<0)
        {
            if(police>0)
                police=police+n;
            else
                crime=crime+1;
        }
    }
    cout<<crime<<endl;
    return 0;
}