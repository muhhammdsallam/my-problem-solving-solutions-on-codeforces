#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1,s2;
    int i=0;
    cin>>s1;
    cin>>s2;
    for(i;i<s1.size();i++){
        for(int j=0;j<s2.size();j++){
            if(s2[j]==s1[i]){
                i++;
            }
        }
        break;
    }
    i++;
    cout<<i<<endl;
}