#include<bits/stdc++.h>
using namespace std;

// Note - only for small alphabets  for capital letters  you can use 65 instead of 97

int main(){
  string s;
  getline(cin, s);

  int H[26]={0};
  int size = s.length();
  for(int i=0;i<size;i++){
    H[s[i]-97]++;
    }
  for(int i=0;i<26;i++){
    if(H[i]>0){
      cout<<(char)(i+97)<<endl;
    }
  }
  return 0;
}