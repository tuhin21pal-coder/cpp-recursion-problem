#include<iostream>

int multiply(int a,int b){
    if(b == 0){
        return 0;
    }
    return a+ multiply(a,b-1);
}

int main(){
    std::cout<<"Enter two number to get their product : ";
    int a,b;
    std::cin>>a>>b;
    int result = multiply(a,b);
    std::cout<<a<<" * "<<b<<" = "<<result<<'\n';
    return 0;
}