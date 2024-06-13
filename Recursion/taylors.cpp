#include<bits/stdc++.h>
using namespace std;
double c = 0;
double factorial(double n){
  if(n==0){
    return 1;
  }
  else{
    return n*factorial(n-1);
  }
}

double power(double n, double p){
  if(p==0){
    return 1;
  }
  else{
    return power(n,p-1)*n;
  }
}

double taylor(double x, double n){
  if(n==0){
    return 1;
  }
  else{
    ++c;
    return power(x,c)/factorial(c)+taylor(x,n-1);
  }
}

int main(){
  cout<<power(2,10)<<endl;
  cout<<factorial(5)<<endl;
  cout<<taylor(4,10)<<endl;
  return 0;
}