#include<iostream>

void arrReversal(int arr[],int end,int start){
    if(start>end){
        return;
    }
    int temp = arr[end];
    arr[end] = arr[start];
    arr[start] = temp;
    return arrReversal(arr,end-1,start+1);
}

int main(){
    std::cout<<"Enter the size of the array : ";
    int size;
    std::cin>>size;
    int arr[size];
    std::cout<<"Enter the elemnts of the array : ";
    for(int i=0;i<size;i++){
        std::cin>>arr[i];
    }
    arrReversal(arr,size-1,0);
    std::cout<<"The reverse of the array is : \n";
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<"  ";
    }
    return 0;
}