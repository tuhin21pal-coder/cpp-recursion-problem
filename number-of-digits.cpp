#include<iostream>

int numofDigits(int num){
    if(num == 0){
        return num;
    }
    return 1+ numofDigits(num/10);
}

int main(){
    int num;
    std::cout<<"Enter a number : ";
    std::cin>>num;
    int result = numofDigits(num);
    std::cout<<"Number of digits = "<<result<<'\n';
    return 0;
}