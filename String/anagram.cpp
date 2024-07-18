#include<bits/stdc++.h>
using namespace std;

int main(){
  string s1;
  cin>>s1;
  string s2;
  cin>>s2;
  int size1 = s1.length(), size2=s2.length();
  int H[26]={0};
  for(int i=0;i<size1;i++){
    H[s1[i]-97]++;
  }
  for(int i=0;i<size2;i++){
    H[s2[i]-97]--;
    if(H[s2[i]-97]<0){
      cout<<"not anagram"<<endl;
      return 0;
    }
  }
  for(int i=0;i<26;i++){
    if(H[i]>0){
      cout<<"Not anagram"<<endl;
      return 0;
    }
  }
  cout<<"Yes! Anagram"<<endl;


  return 0;
}