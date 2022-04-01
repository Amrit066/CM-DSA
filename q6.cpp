#include<iostream>
#include<vector>
using namespace std;

vector<int> BubbleSort(vector<int> a, bool flag){
    bool isSorted;
    for(int i=0;i<a.size() ;i++){
            isSorted=true;
            for(int j=0;j<a.size()-i-1;j++){
                if(a[j]>a[j+1]){
                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                    isSorted=false;
                }
            }
            if(isSorted){
                break;
            }
        }
    return a;
}

int main(void){
    int n;
    vector<int> a;

    cout<<"Enter number of elements in array: ";
    cin>>n;
    cout<<"Enter elements of array: "<<endl;
    for(int i=0;i<n;i++){
        int input=0;
        cin>>input;
        a.push_back(input);
    }

    cout<<"Original array:"<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<endl;
    }

    a=BubbleSort(a,true);

    cout<<"Sorted array:"<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<endl;
    }

    return 0;
}