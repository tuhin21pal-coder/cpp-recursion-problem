#include<iostream>

int Add(int num){
    if(num == 0){
        return 0;
    }
    return (num%10) + Add(num/10);
}

int main(){
    std::cout<<"Enter a positive number : ";
    int  num;
    if(!(std::cin>>num)){
        std::cout<<"Invalid input.\n";
        return  0;
    }
    if(num<0){
        std::cout<<"Invalid input.\n";
        return 0;
    }
    int result = Add(num);
    std::cout<<"Sum = "<<result<<'\n';
    return 0;
}