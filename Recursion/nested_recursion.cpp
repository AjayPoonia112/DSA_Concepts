#include<bits/stdc++.h>
using namespace std;

int func(int n){
  if(n>100){
    return n-10;
  }
  else{
    return func(func(n+11));
  }
}

int main(){
  int x = 95;
  int r;
  r = func(x);
  cout<<r<<endl;
  return 0;
}