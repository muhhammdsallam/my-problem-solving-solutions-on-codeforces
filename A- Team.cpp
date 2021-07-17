#include <iostream>

using namespace std;

int main()
{
    int n;
    int a,b,c;
    int countt = 0;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        if (a==1&&b==1&&c==1){
            countt++;
        }
        if(a==1&&b==1&&c==0){
            countt++;
        }
        if(a==1&&b==0&&c==1){
            countt++;
        }
        if(a==0&&b==1&&c==1){
            countt++;
        }
    }
    cout<<countt<<endl;
    return 0;
}