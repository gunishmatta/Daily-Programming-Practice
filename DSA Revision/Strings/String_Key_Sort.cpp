#include<bits/stdc++.h>
using namespace std;

string extractTokens(string str,int key)
{
    char *s = strtok((char *)str.c_str(), " "); //to get the underlined char representation of string
    while(key>1)
    {
        s = strtok(NULL, " ");
        key--;
    }
    return (string)s;
}


int convertToInt(string s1)
{
    return stoi(s1);
}

bool numericCompare(pair<string,string> s1,pair<string,string> s2)
{
    string key1 = s1.second;
    string key2 = s2.second;

    return convertToInt(key1) < convertToInt(key2);
}

bool lexicoCompare(pair<string,string> s1,pair<string,string> s2)
{
    string key1 = s1.second;
    string key2 = s2.second;

    return (key1)<(key2);
}
int main()
{
    int n;
    cin>>n;
    cin.get();

    string temp;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        getline(cin, temp);
        v.push_back(temp);
    }

    int key;
    string reversal, ordering;
    cin >> key >> reversal >> ordering;

    vector<pair<string, string>> vp;

    for (int i = 0;i<n;i++)
    {
        vp.push_back({v[i], extractTokens(v[i], key)});
    }

    if(ordering=="numeric")
    {
        sort(vp.begin(), vp.end(), numericCompare);
    }
    else
    {
        sort(vp.begin(), vp.end(),lexicoCompare);
    }

    if(reversal=="true")
    {
        reverse(vp.begin(), vp.end());
    }

    for (int i = 0;i<n;i++)
{
    cout << vp[i].first<<endl;
}

        return 0;
}