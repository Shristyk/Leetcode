#include <iostream>
using namespace std;
//array& function
void PrintArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"";
    }
}

bool LINEARSEARCH(int arr[], int size ,int target){
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            return true;
        }
    }
    return false;
}

void countzeroone(int arr[], int size){
    int zerocount=0;
    int onecount=0;
    for(int i=0; i<size; i++){
        if(arr[i]==0){
            zerocount++;
        }
        if (arr[i]==1){
            onecount++;
        }
    }
    cout<<"ZEROCOUNT:"<<zerocount<<endl;
    cout<<"ONECOUNT:"<<onecount<<endl;
}


int main(){
    // // doble array print and take input
    // int arr[10];
    // //input take
    // int n=10;
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }

    // // double the aaray
    // for(int i=0; i<n; i++){
    //     arr[i] = 2*arr[i];
         
    // }
    // //print array
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }




    // //total sum print take input
    // int arr[5];
    // //input take
    // int n=5;
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }

    // //sum  the array
    // int sum=0;
    // for(int i=0; i<n; i++){
    //     sum=sum+arr[i];
    // }
   
    //  //print  sum of clear array
   
    //     cout<<sum <<" ";
    


    //linear search in  an array target=10

    // int arr[5]={5,11,13,15,16};
    // int target=10;
    // int n=5;
    // bool flag=0;
    // //0-not found
    // //1- found
    // for(int i=0; i<n; i++){
    //    if(arr[i]==target){
    //     flag=1;
    //     break;

    //    }
    // }
    // if(flag==1){
    //     cout<<"target found";

    // }
    // else{
    //     cout<< "target not found";
    // }



    //linear search function method
    // int arr[5]={5,10,15,20,25};
    // int size;
    // int target=10;
    // bool ans =LINEARSEARCH (arr,size,target );
    // if (ans==1){
    //     cout << "target found"<<endl;

    // }
    // else{
    //     cout<<"target not found"<<endl;
    // }



    //count'0' and '1' code
    int arr[]={1,0,0,0,1,0,0,0,0,};
    int size = 9 ;
    countzeroone(arr,size);

    return 0;

}