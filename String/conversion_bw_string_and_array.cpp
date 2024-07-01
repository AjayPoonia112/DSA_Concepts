#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	 
	string str = "";
	cout<<"Enter the string:\n";
	
	cin>>str;

	vector<char> arr(str.length() + 1); 
  cout<<"String to char array conversion:\n";
    int s = arr.size();
	for (int i = 0; i < s; i++){
    arr[i] = str[i];
  }
  arr[s] = '\0';
  for (int i = 0; i < s; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  cout<<"Array to string conversion"<<endl;
  string str1 = "";
  for(int i=0;i<s-1;i++){
    str1 = str1+arr[i];
  }
  cout<<str1<<endl;
  return 0; 
}