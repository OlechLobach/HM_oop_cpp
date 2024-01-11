#ifndef MYSTRING_H
#define MYSTRING_H
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
using namespace std;

class mystring {
public:
    mystring();                           
    mystring(const char* cstr);           
    mystring(const mystring& other);      

    mystring& operator=(const mystring& other);  

    size_t getLength() const;             
    void clear();                         

    virtual ~mystring();                  

    mystring operator+(const mystring& other) const;  
    mystring& operator+=(const mystring& other);      

    bool operator==(const mystring& other) const;   
    bool operator!=(const mystring& other) const;   
    const char* getCString() const;
protected:
    char* str;                            
    size_t length;                        
};

#endif