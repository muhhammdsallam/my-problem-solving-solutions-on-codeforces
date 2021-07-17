#include <iostream>
#include <string>

using namespace std;

int main()
{
    string seconds;
    int n1,n2,n3,n4;
    cin>>n1>>n2>>n3>>n4;
    cin>>seconds;
    int counter=0;
    int t;
    t = seconds.size();
    for(int i=0;i<t;i++)
    {
        if(seconds[i]=='1')
            counter=counter+n1;
        if(seconds[i]=='2')
            counter=counter+n2;
        if(seconds[i]=='3')
            counter=counter+n3;
        if(seconds[i]=='4')
            counter=counter+n4;
    }
    cout<<counter<<endl;

    return 0;
}