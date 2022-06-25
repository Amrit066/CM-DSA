#include <iostream>
#include<vector>
using namespace std;
int *findRepeat(vector<int> v,int n){
  int *b;
  int sm;
  int repeating,missing;
  b= new int[2];
  // Checking for repeated number in the array
  for(int i=0;i<n;i++){
    if(v[i]==i+1){
      continue;
    }
    while(v[i]!=i+1){
      if(v[v[i]-1]==v[i]){
        repeating=v[i];
        break;
      }
      int temp=v[v[i]-1];
      v[v[i]-1]=v[i];
      v[i]=temp;
    }
  }
  sm=0;
  // Calculating the difference between sum of array without repeated element and with repeated element
  for(int i=0;i<n;i++){
    sm=sm+(i+1)-v[i];
  }
  // After the above execution of statement, equation would be somewhat like:- missing-repeating=sm
  missing=sm+repeating;
  *b=repeating;
  *(b+1)=missing;
  return b;
}

int main() {
  int *b=new int[2];
  vector<int> v{1,2,3,9,4,5,6,7,8,4};
  int n=10;
  b=findRepeat(v, n);
  cout<<"Repeating number is- "<<b[0]<<endl;
  cout<<"Missing number is- "<<b[1]<<endl;
}