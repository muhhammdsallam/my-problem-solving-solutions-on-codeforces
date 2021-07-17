#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    int n1,n2;
    int a1[1000],a2[1000];
    int counter = 0;
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>n1>>n2;
        a1[i]=n1;
        a2[i]=n2;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a1[i]==a2[j])
                counter++;
        }
    }
    cout<<counter<<endl;
    return 0;
}