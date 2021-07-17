#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int totalWords;
    cin>> totalWords;
    stringstream finalOutput;
    for (int i = 0; i< totalWords;i++)
    {
        string word;
        cin>> word;
        if(word.size()>10)
        {
            finalOutput << word[0] << (word.size()-2)<< word[word.size()-1];
        }
        else
        {finalOutput << word;}
        finalOutput<<endl;
    }

    cout<< finalOutput.str()<<endl;
    return 0;
}