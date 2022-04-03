#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int findAllPairs(vector<int> length,int D){
    int count=0;
    // sorting array using inbuilt function
    sort(length.begin(),length.end());

    for(int i=0;i<length.size()-1;i++){
        for(int j=i+1;j<length.size();j++){
            if(length[j]-length[i] <= D){
                i=j;
                count++;
                break;;
            }
            else{
                continue;
            }
        }
    }
    
    return count;
}

int main(){
    vector<int> a;
    int n,d;

    cout<<"Enter number of elements of array: ";
    cin>>n;

    cout<<"Enter the constant number: ";
    cin>>d;

    cout<<"Enter elements of length array"<<endl;
    for(int i=0;i<n;i++){
        int temp=0;
        cin>>temp;
        a.push_back(temp);
    }

    cout<<"Original array: "<<endl;
    for(int i=0;i<a.size();i++){
        cout<<"a["<<i<<"]= "<<a[i]<<endl;
    }

    cout<<"Total such pairs whose difference is at most "<<d<<" = "<<findAllPairs(a,d)<<endl;

    return 0;
}