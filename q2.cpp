#include<iostream>
#include<vector>

using namespace std;

int largestElement(vector<int> arr) {
    int largest=arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    
    return largest;
     
}

int main(void){
    vector<int> arr;
    int n;

    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter each element of array"<<endl;

    for(int i=0;i<n;i++){
        int j=0;
        cin>>j;
       arr.push_back(j);
    }

    cout<<"Largest number in the array is "<<largestElement(arr);

    return 0;
}