#include<iostream>
#include<stack>
using namespace std;
bool isCorrectExpression(char *s)
{
  stack<char> st;
  for (int i = 0; s[i]!='\0'; i++) {
    /* code */
    char ch = s[i];
    if(ch=='(')
    {
      st.push(ch);
    }
    else if(ch==')')
    {
      if(st.empty() or st.top()!='(')
      {
        return false;
      }
    st.pop();
    }

  }
return st.empty();
}
int main() {
  char s[100] ="(123+11)";
  if(isCorrectExpression(s))
  {
    cout<<"true";
  }
  else
  {
  cout<<"No";
}
  return 0;
}
