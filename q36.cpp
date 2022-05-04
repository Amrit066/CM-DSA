#include <iostream>
using namespace std;

int fastModularExponentiation(int a,int b,int mod){
  int res=-1;
  // when b is power of 2
  int modValue1=(a%mod);
  int powOf2=2;
  // when b is not power of 2
  int modValue2=1,exp=b;
  int temp=(a%mod);
  // int powOfa=a;
  
  if((b&b-1)==0){
    while(powOf2<=b){
      modValue1=(modValue1*modValue1)%mod;
      powOf2*=2;
    }
    res=modValue1;
  }
  else{
    while(exp>0){
      if(exp&1){
        modValue2*=temp;
      }
      temp=(temp*temp)%mod;
      // powOfa*=powOfa;
      exp=exp>>1;
    }
    res=modValue2%mod;
  }

  return res;
}

int main() {
  int a,b,mod;

  cout<<"Enter base number: ";
  cin>>a;
  cout<<"Enter exponenet: ";
  cin>>b;
  cout<<"Enter value to find mod: ";
  cin>>mod;

  cout<<"Remainder of ("<<a<<"^"<<b<<")%"<<mod<<" is "<<fastModularExponentiation(a,b,mod)<<endl;

  return 0;
}