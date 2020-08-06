// The benefit in using bitsets is that they require less memory than ordinary
// arrays, because each element in a bitset only uses one bit of memory
#include<bits/stdc++.h>

using namespace std;

int main()

{
bitset<10> s;
s[1]=1;
s[2]=0;
s[3]=1;
s[4]=0;
s[5]=1;
s[6]=0;
cout<<s[4]<<endl;
cout<<s[5]<<endl;

bitset<10> a(string("0010011010"));
cout<<a[5]<<endl;
bitset<10> b(string("1011011000"));
cout << (a&b) << "\n"; // 0010010000
cout << (a|b) << "\n"; // 1011111110
cout << (a^b) << "\n"; // 1001101110

cout<<a.count()<<endl;

return 0;

}