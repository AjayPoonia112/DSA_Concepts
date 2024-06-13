#include<bits/stdc++.h>
using namespace std;

int power(int n, int p){
  if(p<0){
    return 1;
  }
  else{
    return power(n,p-1)*n;
  }
  //return n*power(n,p-1);
}

int main(){
  cout<<power(2,10)<<endl;
  return 0;
}