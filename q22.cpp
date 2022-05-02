#include<iostream>
#include<vector>
using namespace std;

vector<int> factorial(100,0);
int computeFactorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    else if(factorial[n]){
        return factorial[n];
    }
    else{
        factorial[n]=n*computeFactorial(n-1);
        return n*computeFactorial(n-1);
         
    }
}

vector<vector<int>> printPascal(int n)
{
    vector<vector<int>> v1;
    

    for(int i=0;i<n;i++){
        vector<int> temp;
        for(int j=0;j<i+1;j++){
            int uf,bf1,bf2,coefficient;
            uf=computeFactorial(i);
            bf1=computeFactorial(j);
            bf2=computeFactorial(i-j);
            coefficient=uf/(bf1*bf2);
            temp.push_back(coefficient);
            
        }
        v1.push_back(temp);
    }
    return v1;
    
}

int main(){
    vector<vector<int>> v1;
    int n;
    
    cout<<"Enter the number: ";
    cin>>n;
    v1=printPascal(n);
    cout<<"Pascal Triangle: "<<endl;
    for(vector<int> x: v1){
        for(int y: x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}