#ifndef MYBITSTRING_H
#define MYBITSTRING_H

#include "mystring.h"

class mybitstring : public mystring {
public:
    mybitstring();                       
    mybitstring(const char* cstr);       
    mybitstring(const mybitstring& other);

    mybitstring& operator=(const mybitstring& other); 

    ~mybitstring();                      

    void changeSign();                   
    mybitstring(const mystring& other);  

    mybitstring operator+(const mybitstring& other) const; 
   
    mybitstring& operator+=(const mybitstring& other);     

    bool operator==(const mybitstring& other) const;   
    bool operator!=(const mybitstring& other) const;  
};

#endif
