#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
  if(n<=1){
    return n;
  }
  else{
    return fibo(n-2) + fibo(n-1);
  }
}

int main(){
  cout<<"hello"<<endl;
  cout<<fibo(1)<<endl;
  cout<<fibo(2)<<endl;
  cout<<fibo(3)<<endl;
  cout<<fibo(4)<<endl;
  cout<<fibo(5)<<endl;
  cout<<fibo(6)<<endl;
  return 0;
}