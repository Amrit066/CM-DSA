#include<iostream>
#include<vector>
using namespace std;

int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int i,j,l,in,elem;
        bool flag=false;
        in=0;
        i=0;
        j=0;
        l=0;
        while(i<n && j<m){
            if(l==k){
                flag=true;
                break;
            }
            if(arr1[i]<=arr2[j]){
                i++;
                l++;
                in=0;
            }
            else{
                j++;
                l++;
                in=1;
            }
        }
        if(l==k)
            flag=true;
        if (flag){
            if(in){
                elem=arr2[j-1];
            }
            else{
                elem=arr1[i-1];
            }
        }
        else{
            if(i<n){
                elem=arr1[i+k-l-1];
            }
            else{
                elem=arr2[j+k-l-1];
            }
        }
        
        return elem;
    }