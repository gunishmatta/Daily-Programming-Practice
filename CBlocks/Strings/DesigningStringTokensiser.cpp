#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

char mystrtok(char *str,char delimiter)
{
//string and single char that accepts a delimiter
static char *input = NULL; //dynamic array to store inputs
 if (str!=NULL) {
   input = str; //first call

 }

//base case - after final token has been returned
if (input==NULL) {
return NULL;
}


 char *output = new char[strlen(input)+1];
 for (int i = 0; input[i]!='\0'; i++) {
   if (input[i]!=delimiter) {
     output[i] = input[i];
   }
   else
{   output[i] = '\0';
   input = input+i+1;
   return output;
}
//corner case
output[i] ='\0';
input = NULL;
return output;

  }


}



int main() {
char s[100] = "Hi I am Gunish Matta";
char *ptr = mystrtok(s," ");
std::cout <<ptr<< '\n';

while (ptr!=NULL) {
  ptr = mystrtok(NULL," ");
std::cout <<ptr<< '\n';
}

  return 0;
}
