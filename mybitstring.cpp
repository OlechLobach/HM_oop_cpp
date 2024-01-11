    #include "mybitstring.h"

    mybitstring::mybitstring() : mystring() {}

    mybitstring::mybitstring(const char* cstr) : mystring(cstr) {
       
        for (size_t i = 0; i < length; ++i) {
            if (str[i] != '0' && str[i] != '1') {
                clear(); 
                break;
            }
        }
        
    }

    void mybitstring::changeSign() {
  
        for (size_t i = 0; i < length; ++i) {
            str[i] = (str[i] == '0') ? '1' : '0';
        }
    }

    mybitstring::mybitstring(const mybitstring& other) : mystring(other) {}

    mybitstring& mybitstring::operator=(const mybitstring& other) {
        if (this != &other) {
            mystring::operator=(other);
        }
        return *this;
    }

    mybitstring::~mybitstring() {}


    mybitstring::mybitstring(const mystring& other) : mystring(other) {}

    mybitstring mybitstring::operator+(const mybitstring& other) const {
        mybitstring result(static_cast<const mystring&>(*this));  
        result += other;  
        return result;
    }

    bool mybitstring::operator==(const mybitstring& other) const {
        return static_cast<mystring>(*this) == static_cast<mystring>(other);
    }
    mybitstring& mybitstring::operator+=(const mybitstring& other) {
        mystring::operator+=(static_cast<mystring>(other));
        return *this;
    }

    bool mybitstring::operator!=(const mybitstring& other) const {
        return static_cast<mystring>(*this) != static_cast<mystring>(other);
    }