#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 int longestPalindrome(string s) {
        vector<int>small(26,0);
        vector<int>capital(26,0);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a')
            small[s[i]-'a']++;
            else
            capital[s[i]-'A']++;
        }
        int count=0;
        bool ans=0;
        for(int i=0;i<26;i++)
        {
            
            if(small[i]%2==0)
            count+=small[i];
            else
            {
            count+=small[i]-1;
            ans=1;
            }
            if(capital[i]%2==0)
            count+=capital[i];
            else
            {
            count+=capital[i]-1;
            ans=1;
            }

        }
        return count+ans;

    }
    int main()
    {
        string s1;
        cin>>s1;
        cout<<longestPalindrome(s1);
    }