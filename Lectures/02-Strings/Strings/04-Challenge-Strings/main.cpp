#include <iostream>
#include <string>


int main() {
    
    std::string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    std::string key      {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    std::string message {};
    std::string crypted_message {};
    
    std::cout<<"Enter your message: ";
    std::getline(std::cin,message);

    for (char c :message){
        size_t index = alphabet.find(c);
        
        if(index != std::string::npos)
            crypted_message+=key[index];
        else{
            crypted_message+=c;
        }
    }
    
        
    std::cout<<"\nCrypted message: "<<crypted_message << std::endl;
    
    std::cout<<"Enter your Crypted message: ";
    std::getline(std::cin,crypted_message);

    message=" ";
    
    for (char c :crypted_message){
        size_t index = key.find(c);
        
        if(index != std::string::npos)
            message+=alphabet[index];
        else{
            message+=c;
        }
    }

    std::cout<<"\nNormal message: "<<message << std::endl;

    
    

    
    
    
    return 0;
}
