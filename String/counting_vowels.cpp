#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  getline(cin,s);

  //vowet and consonent count
  int count_v=0;
  int count_c=0;
  for(int i=0;i<s.length();i++){
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
      count_v++;
    }
    else if(s[i]>64 && s[i]<91 || s[i]>96 && s[i]<123){
      count_c++;
    }
  }
  cout<<"Consonents: "<<count_c<<" "<<"Vowels: "<<count_v<<endl;
  
  //counting words
  int count_w = 0;
  for(int i=0;i<s.length();i++){
    if(s[i]==32 && s[i-1]!=32){
      count_w++;
    }
  }
  cout<<"Number of words is: "<<count_w+1<<endl;
  return 0;
}