//change into Lower or Upper case
// we should know capital alphabet - 65 - 90 and small alphabet = 97 - 122, enter - 10, space - 13, esc - 27, total - 128, 7 bits are required
#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin>>s;
  //s = ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890!@#$%^&*()_+{}:"|>?<-=[];'/.,

  string l,u;

  //Upper case
  for(int i=0;i<s.length();i++){
    int a = (int)s[i];
    if(a<123 && a>96){
      a = a-32;
      u = u + (char)a;
    }
    else{
      u=u+s[i];
    }
  }
  cout<<"upper case"<<endl;
    cout<<u<<endl;

  // Lower case
  for(int i=0;i<s.length();i++){
    int a = (int)s[i];
    if(a<91 && a>64){
      a = a+32;
      l = l + (char)a;
    }
    else{
      l=l+s[i];
    }
  }
  cout<<l<<endl;

  return 0;
}