#include<iostream>
#include<vector>
using namespace std;

vector<int> BubbleSort(vector<int> arr, int n){
    bool isSorted;
    int iteration=0;
    for(int i=0;i<n-1 ;i++){
        isSorted=true;
        iteration++;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
                isSorted=false;
            }
        }
        if(isSorted){
            cout<<"No. of iteration: "<<iteration<<endl;
            break;
        }
    }
    cout<<"No. of iteration: "<<iteration<<endl;
    return arr;
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