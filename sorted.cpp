#include<iostream>

int sortedArr(int arr[],int size){
    if(size == 0){
        return 1;
    }
    if(arr[size-1] > arr[size]){
        return 0;
    }
    return sortedArr(arr,size-1);
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
    int result = sortedArr(arr,size-1);
    if(result){
        std::cout<<"Sorted.\n";
    }
    else{
        std::cout<<"Not Sorted.\n";
    }
    return 0;
}