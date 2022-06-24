#include <iostream>
#include<vector>
using namespace std;

int helper(vector<int> v, int s, int e,int key){
    if(s>e)
        return -1;
    int mid=(s+e)/2;
    if(v[mid]==key)
        return mid;
    return key<v[mid]?helper(v,s,mid,key):helper(v,mid+1,e,key);
}
int binarySearch(vector<int> v, int x)
{
    return helper(v,0,v.size(),x);
    
}
int main() {
  vector<int> v{1,2,3,4,5,6,7,8,9};
  int key= 10;
  cout<<"Found At: "<<binarySearch(v,key)<<endl;
}