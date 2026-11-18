#include<iostream>
#include<climits>
int Large(int arr[],int size,int largeNum){
    if(size<0){
        return largeNum;
    }
    if(arr[size] > largeNum){
        largeNum = arr[size];
    }
    return Large(arr,size-1,largeNum);
}

int main(){
    std::cout<<"Enter the number of elemnts in the array : ";
    int size;
    std::cin>>size;
    int arr[size];
    std::cout<<"Enter the elemntsof the array : ";
    for(int i=0;i<size;i++){
        std::cin>>arr[i];
    }
    int largeNum = INT_MIN;

    int result = Large(arr,size-1,largeNum);
    std::cout<<"Largest = "<<result<<'\n';
    return 0;
}