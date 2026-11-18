#include<iostream>
#include<cmath>
int reverseNumber(int num,int power){
    if(num == 0){
        return 0;
    }
    return (num%10)*power + reverseNumber(num/10,power/10);
}

int digits(int num){
    if(num == 0){
        return 0;
    }
    return 1 + digits(num/10);
}

int main(){
    std::cout<<"Enter a number : ";
    int num;
    std::cin>>num;
    int numofDigits = digits(num);
    double power = pow(10,numofDigits-1);
    int result = reverseNumber(num,power);
    std::cout<<"Reverse of the number is : "<<result<<'\n';
    return 0;
}