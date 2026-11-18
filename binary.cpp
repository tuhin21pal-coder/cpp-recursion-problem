#include<iostream>

int reverseBinary(int num,int rev){
    if(num == 0){
        return rev;
    }
    return reverseBinary(num/2,rev*10 + num%2);
}

int Binary(int num,int rev){
    if(num == 0){
        return rev;
    }
    return Binary(num/10,rev*10 + num%10);
}

int main(){
    std::cout<<"Enter a number : ";
    int num;
    std::cin>>num;
    int reverse = reverseBinary(num,0);
    int original = Binary(reverse,0);
    std::cout<<original<<'\n';
    return 0;
}