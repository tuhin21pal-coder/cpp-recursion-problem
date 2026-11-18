#include<iostream>

int Add(int arr[],int size){
    if(size ==  0){
        return arr[0];
    }
    return arr[size] + Add(arr,size-1);
}

int main(){
    std::cout<<"Enter the size of the array  : ";
    int size;
    if(!(std::cin>>size)){
        std::cout<<"Invalid input.\n";
        return 0;
    }
    if(size<1){
        std::cout<<"Invalid Input.\n";
        return 0;
    }
    int arr[size];
    std::cout<<"Enter the elemnts of the array : \n";
    for(int i=0;i<size;i++){
        if(!(std::cin>>arr[i])){
            std::cout<<"Invalid input.\n";
            return 0;
        }
    }
    int result = Add(arr,size-1);
    std::cout<<"Sum = "<<result<<'\n';
    return 0;
}