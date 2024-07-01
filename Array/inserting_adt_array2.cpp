#include<iostream>
using namespace std;

struct Array{
  int p[10];
  int size;
  int len;
};

int main(){
  struct Array arr;

  cout<<"Enter size of an array"<<endl;
  cin>>arr.size;

  arr.len = 0;

  arr.p = new int*[arr.size];

  int n;
  cout<<"Enter array of elements"<<endl;
  cin>>n;

  for(int i=0;i<arr.size;i++){
    arr.p[i] = new int[arr.size];
  }

  cout<<"Enter elements in the array"<<endl;
  for(int i=0;i<n;i++){

  }
  return 0;
}