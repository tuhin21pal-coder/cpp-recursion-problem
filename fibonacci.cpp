#include<iostream>

int fibo(int num){
    if(num == 1 || num==0){
        return num;
    }
    return fibo(num-1) + fibo(num-2);
}

int main(){
    std::cout<<"Enter the number till which you want fibonacci series : ";
    int range;
    std::cin>>range;
    for(int i=0;i<=range;i++){
        int result = fibo(i);
        std::cout<<result<<"  ";
    }
    return 0;
}