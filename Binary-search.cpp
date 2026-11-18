#include<iostream>

int binarySearch(int arr[],int size,int number){
    if(size<0){
        return -1;
    }
    else if(arr[size] == number){
        return size;
    }
    else{
        binarySearch(arr,size-1,number);
    }
}

void sort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int *arr = nullptr;
    std::cout<<"Enter the size of the array : ";
    int size;
    std::cin>>size;
    arr = new int[size];
    std::cout<<"Enter the values of the array : ";
    for(int i=0;i<size;i++){
        std::cin>>arr[i];
    }
    sort(arr,size);
    std::cout<<"Enter a number to search : ";
    int number;
    std::cin>>number;
    int result = binarySearch(arr,size-1,number);
    if(result == -1){
        std::cout<<"Number not found.\n";
    }
    else{
        std::cout<<"Number found at index = "<<result<<'\n';
    }
    return 0;
}