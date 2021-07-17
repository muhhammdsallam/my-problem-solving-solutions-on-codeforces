#include <iostream>
#include <string>
using namespace std;

int main() {
    long n1,n2,n3,n4;
    int counter=0;
    cin>>n1>>n2>>n3>>n4;
    int a[4];
    a[0]=n1;
    a[1]=n2;
    a[2]=n3;
    a[3]=n4;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(a[i]==a[j]) {
                counter++;
                break;
            }

        }

    }
    cout<<counter<<endl;
}