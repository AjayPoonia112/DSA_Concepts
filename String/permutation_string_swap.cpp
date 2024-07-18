#include<bits/stdc++.h>
using namespace std;

void permut(char s[], int l, int h){
  if(l==h){
    cout<<s<<endl;
  }
  else{
    for(int i=l;i<=h;i++){
    swap(s[l],s[i]);
    permut(s, l+1, h);
    swap(s[l],s[i]);
    }
  }
}

int main(){
  string s;
  cin>>s;
  int size = s.length();
  char a[size+1];
  for(int i=0;i<size;i++){
    a[i] = s[i];
  }
  a[size] = '\0';
  permut(a, 0, size-1);
  return 0;
}