#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
string is_sorting(string s1)
{
    vector<int>alpha(26,0);
    for(int i=0;i<s1.size();i++)
    {
        alpha[s1[i]-'a']++;
    }
    string ans;
    for(int i=0;i<26;i++)
    {
        char c='a'+i;
        while(alpha[i])
        {
            ans+=c;
            alpha[i]--;
        }
    
    }
return ans;
}
int main()
{
    string s;
    cin>>s;
     string g=is_sorting(s);
     cout<<g;
    }
