#include<iostream>
#include<vector>
using namespace std;

void helper(int n, string &s,vector<string> vs){
    if(n==0){
        return;
    }
    helper(n/10,s,vs);
    s=s+vs[n%10]+" ";
}

string numSpell(int n){
    vector<string> vs{"zero","one","two","three","four","five","six","seven","eight","nine"};

    string s="";
    helper(n,s,vs);
    return s;
}

int main(){
    int n;
    string s;

    cout<<"Enter number: ";
    cin>>n;

    s=numSpell(n);
    cout<<"Number "<<n<<" in string form is "<<s<<endl;
}