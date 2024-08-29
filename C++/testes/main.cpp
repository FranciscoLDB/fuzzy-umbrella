#include<iostream>
#include<cstring>
using namespace std;

string reverse_word(string str){
  int len = str.length();
  char resp[len] = {};
  for(int i = 0; i < len; i++){
    resp[i] = str[len - 1 - i];
  }
  return resp;
}

string reverse_words(string str)
{
  char resp[str.length()];
  return resp;
}

int main()
{
  string str = "Hello World!";
  cout << reverse_word("Hello a.") << endl;
  return 0;
}