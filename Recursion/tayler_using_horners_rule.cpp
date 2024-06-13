#include<bits/stdc++.h>
using namespace std;

int S = 0;
int taylor(int x, int n){
  if(n==0){
    return S;
  }
  S = 1 + x*S/n;
  return taylor(x,n-1);
}

int main(){
  cout<<taylor(2,10)<<endl;
  return 0;
}