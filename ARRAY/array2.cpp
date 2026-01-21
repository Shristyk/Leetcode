#include<iostream>
#include<limits.h>

using namespace std;

// minimum no find in the array
int FINDMINIMUMNUMBER(int arr[],int size){
    int minans = INT_MAX;
    for( int i=0; i<size; i++){
        if(arr[i]<minans){
        
       minans = arr[i];
        
        }
       
    }
    return minans;


}

int main(){
    int arr[]={1,5,7,8,9,6.7,3,5};
    int size=9;
    int minimumans= FINDMINIMUMNUMBER(arr,size);
    cout<<"find minimum no:"<<minimumans<<endl;
return 0;

}