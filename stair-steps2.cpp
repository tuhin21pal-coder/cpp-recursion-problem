#include<iostream>

int steps(int n){
    if(n == 1){
        return 1;
    }
    else if(n == 2){
        return 2;
    }
    return steps(n-1) + steps(n-2);
}

int main(){
    std::cout<<"Enter the number of steps that is required to be climbed : ";
    int n;
    std::cin>>n;
    int num = steps(n);
    std::cout<<"Number of steps : "<<num<<'\n';
    return 0;
}