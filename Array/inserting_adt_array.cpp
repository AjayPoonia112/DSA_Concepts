/*
MIT License

Copyright (c) 2024 Ajay

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

// Abstract Data Structyre --> Array  
#include<iostream>
using namespace std;

//Array Structure
struct Array{
  int *p;
  int size;
  int len;
};

//Insertion
void insert(struct Array arr,int index, int element){
  for(int i=arr.len;i>index;i--){
    arr.p[i] = arr.p[i-1];
  }
  arr.p[index] = element;
}

//Display Function
void Display(struct Array arr){
  cout<<"Displaying......."<<endl;
  for(int i=0;i<arr.len;i++){
    cout<<arr.p[i]<<" ";
  }
  cout<<endl;
}

//Main Function
int main(){
  // Initialise the structure Array 
  struct Array arr;

  // Input Array Size
  cout<<"Enter Size of an array"<<endl;
  
  cin>>arr.size;

  // Allocate required memory in the heap
  arr.p = new int[arr.size];

  // No element in the array so len = 0
  arr.len = 0;

  // Input element of the array
  int n;

  cout<<"Enter number of elements"<<endl;
  cin>>n;

  for(int i=0;i<n;i++){
    cin>>arr.p[i];
  }
  arr.len = n;

  Display(arr);

  insert(arr, 2, 12);

  Display(arr);

  return 0;
}