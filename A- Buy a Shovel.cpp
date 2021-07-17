#include <iostream>
#include <string>
using namespace std;

int main() {
    int n1,n2;
    int i=1;
    cin>>n1>>n2;
    int n3=n1;
    while(true)
    {
        if((n1*i)%10==n2 || (n1*i)%10==0){
            cout<<i<<endl;
            return 0;
        }
        i++;
    }
}