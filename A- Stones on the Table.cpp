#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string String;
    int counter=0;
    cin>>String;
    for (int i=0;i<n;i++)
    {
        if (String[i]==String[i+1])
            counter=counter+1;
    }
    cout<<counter<<endl;
    return 0;
}
