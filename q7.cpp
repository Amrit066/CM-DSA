#include<iostream>
#include<vector>
using namespace std;

vector<int> BubbleSort(vector<int> a, bool flag){
    bool isSorted;
    if(flag){
        for(int i=0;i<a.size() ;i++){
            isSorted=true;
            for(int j=i+1;j<a.size();j++){
                if(a[j]<a[i]){
                    int temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                    isSorted=false;
                }
            }
            if(isSorted){
                break;
            }
        }
    }
    else{
        for(int i=0;i<a.size() ;i++){
            isSorted=true;
            for(int j=i+1;j<a.size();j++){
                if(a[j]>a[i]){
                    int temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                    isSorted=false;
                }
            }
            if(isSorted){
                break;
            }
        }
    }
    return a;
}

int main(void){
    int n;
    vector<int> arr;

    cout<<"Enter number of elements in array: ";
    cin>>n;
    cout<<"Enter elements of array: "<<endl;
    for(int i=0;i<n;i++){
        int input=0;
        cin>>input;
        arr.push_back(input);
    }

    cout<<"Original Array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    arr=BubbleSort(arr,n);

    cout<<"Sorted Array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}