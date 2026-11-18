#include<iostream>
int power(int base,int exponent){
    if(exponent == 0){
        return 1;
    }
    return base* power(base,exponent-1);
}

int main(){
    int base,exponent;
    std::cout<<"Enter a base : ";
    if(!(std::cin>>base)){
        std::cout<<"Invalid base input.\n";
        return 0;
    }
    std::cout<<"Enbter a positive exponent : ";
    if(!(std::cin>>exponent)){
        std::cout<<"Invalid input.\n";
        return 0;
    }
    if(exponent<0){
        std::cout<<"Invalid number input.\n";
        return 0;
    }
    int result = power(base,exponent);
    std::cout<<base<<"^"<<exponent<<" = "<<result<<'\n';
    return 0;
}