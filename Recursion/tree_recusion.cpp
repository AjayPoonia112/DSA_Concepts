#include<bits/stdc++.h>
using namespace std;

int func(int n){
  if(n>0){
    cout<<n<<endl;
    func(n-1);
    func(n-1);
  }
  return 0;
}

int main(){
  func(3);
  return 0;
}