#include<iostream>
#include<vector>
using namespace std;

#include <iostream>
using namespace std;

int friendsPairing(int n){
    if(n==1 || n==0){
        return 1;
    }
    return friendsPairing(n-1)+(n-1)*friendsPairing(n-2);
}
int main() {
  int n=7;
  cout<<"Total: "<<friendsPairing(n)<<endl;;
  return 0;
}

