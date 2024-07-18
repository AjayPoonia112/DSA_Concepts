#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  getline(cin, s);
  int size = s.length();
  
  //Method 1
  string d = "";
  int i = size-1;
  for(int j = 0;j<size;j++){
    d = d + s[i];
    i--;
  }
  cout<<"Reverse string technique 1: "<<d<<endl;

  //Method 2
  char arr[size+1];
  for(int j=0;j<size;j++){
    arr[j] = s[j];
  }
  arr[s.length()] = '\0';

  int z = s.length()-1;
  for(int j=0;j<z;j++){
    char temp = arr[z];
    arr[z] = arr[j];
    arr[j] = temp;
    z--;
  }

  cout<<"Reverse string technique 2: ";
  for(int j=0;arr[j]!='\0';j++){
    cout<<arr[j];
  }

  return 0;
}