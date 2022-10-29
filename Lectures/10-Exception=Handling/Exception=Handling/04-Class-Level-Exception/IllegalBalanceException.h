#ifndef ILLEGALBALANCEEXCEPTION_H
#define ILLEGALBALANCEEXCEPTION_H
#include <iostream>

class IllegalBalanceException: public std::exception
{
public:
    IllegalBalanceException() noexcept =default;
    ~IllegalBalanceException()=default;
    virtual const char* what() const noexcept {
        return "Illegal Balance Exception";
/*        "Couldn't create account - Negative balance"*/
    }
};

#endif // ILLEGALBALANCEEXCEPTION_H
