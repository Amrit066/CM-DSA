#include<iostream>
using namespace std;

int largetSumSubarray(int arr[],int n){
    int largestSum=0;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp=0;
            for(int k=i;k<=j;k++){
                temp+=arr[k];
                if(temp>largestSum){
                    largestSum=temp;
                }
                else{
                    continue;
                }
            }
        }
    }

    return largestSum;
}

int main(void){
    int arr[10];
    int n;

    cout<<"Enter no of elements in array(<10): ";
    cin>>n;

    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    cout<<"Largest sum of all possible subarray is "<<largetSumSubarray(arr,n);

    return 0;
}