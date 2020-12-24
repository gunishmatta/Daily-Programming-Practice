#include<bits/stdc++.h>
using namespace std;

string find_window(string str,string pattern)
{
int strlen = str.length();
int patternlen = pattern.length();
int start =0; //left pointer for shrinking window
int minwindowlen = INT_MAX;
int start_index=-1;
if(patternlen>strlen)
{
	return "None"; //corner case
}

//freq maps
int freqStrMap[256]={0};
int freqPatternMap[256]={0};

for (int i = 0; i < patternlen; i++)
{
char ch = pattern[i];
freqPatternMap[ch]++;
}

//sliding window(expansion and contraction + update min length window)
int count=0;

for (int i = 0; i < strlen; ++i)
{
char ch = str[i];
freqStrMap[ch]++;
//maintain count of chars matched
 

 if(freqPatternMap[ch]!=0 and freqStrMap[ch]<=freqPatternMap[ch])
//check if the frequency of current char is reqd in pattern and check if freq is less than reqd freq then only increase value of count
{
	count++; 
}

//if all chars match
if(count==patternlen)
{
	//start shrinking the window from left
//loop to remove all unwanted chars

char temp = str[start];

while(freqPatternMap[temp]==0 or freqStrMap[temp]>freqPatternMap[temp]) //if freq is more than reqd or element not present in pattern
freqStrMap[temp]--;
start++;
temp = s[start];
}
int windowlen = i-start+1;

if(windowlen<minwindowlen)
{
minwindowlen = windowlen;
start_index = start;
}

}
if(start_index==-1){
	return "None";
}

string ans = s.substr(start_index,minwindowlen);

return ans;

}


int main()
{
string str = "hellloeaeo world";
string pattern ="eelo";
cout<<find_window(str,pattern);
	return 0;
}