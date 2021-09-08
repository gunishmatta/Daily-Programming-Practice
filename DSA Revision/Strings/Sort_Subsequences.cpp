#include<bits/stdc++.h>
using namespace std;
bool compare(string s1,string s2)
{
    if(s1==s2)
    {
        return s1.length() < s2.length();
    }
    else
    {
        return s1 < s2;
    }
}
void subsequence(string s,string o,vector<string> &v)
{
    if(s.size()==0)
    {
        v.push_back(o);
        return;
    }

    char ch = s[0];
    string remaining = s.substr(1);
    subsequence(remaining, o+ch, v);
    subsequence(remaining, o, v);
    
}

int main()
{
    string s;
    cin>>s;
    vector<string> v;
    string output = "";
    subsequence(s, output, v);
    sort(v.begin(), v.end(), compare);
    for (auto i : v)
    {
        
        cout << i << " , ";
    }

    return 0;
}