#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool pangram(string sentence)
{
    vector<bool>alg(26,0);
    for(int i=0;i<sentence.size();i++)
    {
        alg[sentence[i]-'a']=1;
    }
    for(int i=0;i<26;i++)
    {
        if(alg[i]!=1)
        return 0;
    }
    return 1;
}
int main()
{
    string sentence;
    cin>>sentence;
     
    cout<<pangram(sentence);
}