#include<bits/stdc++.h>
using namespace std;

int main(){
  string s1;
  getline(cin, s1);

  string s2;
  getline(cin, s2);

  int size1 = s1.length();
  int size2 = s2.length();

  bool match = false;

  for(int i=0;i!=size1 && i!=size2;i++){
    if(s1[i]!=s2[i]){
      match = false;
      break;
    }
    match = true;
  } 

  if(match==true){
    if(size1==size2){
      cout<<"Complete match"<<endl;
    }
    else{
      cout<<"substring match"<<endl;
    }
  }
  else{
    cout<<"Not matched"<<endl;
  }
  return 0;
}