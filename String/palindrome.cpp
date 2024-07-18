#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  getline(cin, s);

  // by comparing
  int size = s.length();
  int j = size-1;
  bool flag  = false;
  for(int i=0;i<j;i++){
    if(s[i]!=s[j]){
      flag = false;
      break;
    }
    flag = true;
    j--;
  }
  if(flag==true){
    cout<<"Yes string is palindrome"<<endl;
  }
  else{
    cout<<"No string is not palindrome"<<endl;
  }
  return 0;
}