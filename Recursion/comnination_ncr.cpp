#include<bits/stdc++.h>
using namespace std;

int combination(int n, int r){
  if(n==r || r==0){
    return 1;
  }
  else{
    return combination(n-1, r) + combination(n-1, r-1);
  }
}

int main(){
  cout<<combination(4,2);
  return 0;
}