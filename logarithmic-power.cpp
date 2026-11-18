#include<iostream>

int power(int a,int b){
    if(b == 0){
        return 1;
    }
    int x = power(a,b/2);
    if(b%2 == 0){
        return x*x;
    }
    else{
        return x*x*a;
    }
}

int main(){
    int a,b;
    std::cout<<"Enter a base : ";
    if(!(std::cin>>a)){
        std::cout<<"Invalid input.\n";
        return 0;
    }
    std::cout<<"Enter a positive exponent : ";
    if(!(std::cin>>b)){
        std::cout<<"Invalid input.\n";
        return 0;
    }
    if(b<0){
        std::cout<<"Negative input invalid.\n";
        return 0;
    }
    int result = power(a,b);
    std::cout<<a<<"^"<<b<<" = "<<result<<'\n';
    return 0;
}