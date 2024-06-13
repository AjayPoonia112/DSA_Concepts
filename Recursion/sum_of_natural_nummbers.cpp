#include<bits/stdc++.h>
using namespace std;

int natural_sum(int n){
  if(n>0){
    return n+natural_sum(n-1);
  }
  return 0;
}

int main(){
  cout<<natural_sum(10)<<endl;
  return 0;
}