#include<bits/stdc++.h>
using namespace std;
// before going ahead we should know left shift, masking and merging

int main(){
  string s;
  cin>>s;
  int n = s.length();

  int H=0, x = 0; // h is for hash and x is for masking and merging by applying shift operations

  for(int i=0;i<n;i++){
    x = 1;
    x = x<<(s[i]-97);
    if((x&H)>0){
      cout<<"Duplicate: "<<s[i]<<endl;
    }
    else{
      H = x|H;
    }
  }

  return 0;
}