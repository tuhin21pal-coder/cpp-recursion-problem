#include<iostream>

int stairs(int n){
    if(n == 1){
        return 1;
    }
    else if(n==2){
        return 2;
    }
    else if(n==3){
        return 4;
    }
    return stairs(n-1) + stairs(n-2) + stairs(n-3);
}

int main(){
    std::cout<<"Enter the number of stairs needed to be climbed : ";
    int n;
    std::cin>>n;
    int result = stairs(n);
    std::cout<<"Number of steps : "<<result<<'\n';
    return 0;
}