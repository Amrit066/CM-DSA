#include<iostream>
using namespace std;

template<typename T>
class Vector{
    // Data Members
    private:
        T *arr;
        int cs,ms;
    // Constructor
    public:
        Vector(int max_size=1){
            cs=0;
            ms=max_size;
            arr=new T[ms];
        }
    // Methods
        void push_back(const T d){
            if(cs==ms){
                T *oldArr=arr;
                ms=2*ms;
                arr= new T[ms];
                for(int i=0;i<cs;i++){
                    arr[i]=oldArr[i];
                }
                delete [] oldArr;
            }
            arr[cs++]=d;
        }

        void pop_back(){
            if(cs==0){
                cs++;
            }
            cs--;
        }

        bool isEmpty() const{
            return cs==0;
        }

        T front() const{
            if(cs==0){
                return 0;
            }
            return arr[0];
        }

        T back() const{
            if(cs==0){
                return 0;
            }
            return arr[cs-1];
        }

        T at(const int i) const{
            if(i>=0 && i<=ms-1){
                return arr[i];
            }
            else{
                return -1;
            }
        }

        int size() const{
            return cs;
        }

        int capacity() const{
            return ms;
        }
        T operator[](const int i) const{
            if(i>=0 && i<=ms-1){
                return arr[i];
            }
            else{
                return -1;
            } 
        }
};

int main(){
    Vector<int> v;

    return 0;
}