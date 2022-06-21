#include<iostream>
#include<vector>
#include<bitset>
using namespace std;

vector<bool> subsetSum(vector<int> num, vector<int> query)
{
    int N = query.size();
    int i=0;
    bitset<100000> b;
    vector<bool> vb(N);
    
    b.reset();
    b[0]=1;
    
    for(auto x: num)
        b|=(b<<x);
        
    for(auto x:query){
        if(b[x])
            vb[i++]=true;
        else
            vb[i++]=false;
    }
    return vb;
}

int main(){
    vector<int> num,query;
    vector<bool>vb;
    int n;
    
    cout<<"Enter number of elements in the array set: ";
    cin>>n;

    cout<<"Enter elements of the array set:"<<endl;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        num.push_back(temp);
    }

    cout<<"Enter elements of the query set:"<<endl;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        query.push_back(temp);
    }

    vb=subsetSum(num,query);
    cout<<"Result: "<<endl;
    for(int i=0;i<n;i++){
        cout<<query[i]<<" found: "<<vb[i]<<endl;
    }
    return 0;
}