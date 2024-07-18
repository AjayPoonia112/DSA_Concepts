#include<bits/stdc++.h>
using namespace std;
/*
we will use bactracking, recursion and state space tree
  >----->backtracking
  |         |
  |         |
  |         |
  |       \  /
  |        \/
  |     BruteForce
  |
  ^---Recursion
       ABC
          O
        / |  \
       A   B  C
      / \  / \ / \
     B  C A  C A  B
     |  | |  | |  |
     C  B C  A B  A
     |  | |  | |  |
    ABC|ACB||BAC|BCA|CAB|CBA
*/

void permut(string s, int k){
  int size = s.length();
  static bool A[50]={0};
  static char res[50];
  
  if(k==size){
    res[size] = '\0';
    cout<<res<<endl;
  }
  else{
    for(int i=0;i<size;i++){
    if(A[i]==0){
      A[i]=1;
      res[k] = s[i];
      permut(s, k+1);
      A[i]=0;
    }
  }
}
  }
int main(){
  string s;
  cin>>s;
  permut(s,0);
  return 0;
}