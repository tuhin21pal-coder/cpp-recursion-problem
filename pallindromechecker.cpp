#include<iostream>

std::string pallindrome(std::string word,int size){
    if(size<0){
        return "";
    }

    return word.at(size) + pallindrome(word,size-1);
}

void lower(std::string &word,int size){
    for(int i=0;i<=size-1;i++){
        if(word[i]>='A' && word[i]<='Z'){
            word[i] = word[i]+32;
        }
    }
}

int main(){
    std::cout<<"Enter a word : ";
    std::string word;
    std::cin>>word;
    lower(word,word.size());
    if(word == pallindrome(word,word.size()-1)){
        std::cout<<"Pallindrome.\n";
    }
    else{
        std::cout<<"Not a pallindrome.\n";
    }
    return 0;
}