#include "mystring.h"


mystring::mystring() : str(nullptr), length(0) {}

mystring::mystring(const char* cstr) {
    length = strlen(cstr);
    str = new char[length + 1];
    strcpy(str, cstr);
}

mystring::mystring(const mystring& other) : length(other.length) {
    str = new char[length + 1];
    strcpy(str, other.str);
}

mystring& mystring::operator=(const mystring& other) {
    if (this != &other) {
        delete[] str;
        length = other.length;
        str = new char[length + 1];
        strcpy(str, other.str);
    }
    return *this;
}

size_t mystring::getLength() const {
    return length;
}

void mystring::clear() {
    delete[] str;
    str = nullptr;
    length = 0;
}

mystring::~mystring() {
    clear();
}

mystring mystring::operator+(const mystring& other) const {
    mystring result;
    result.length = length + other.length;
    result.str = new char[result.length + 1];
    strcpy(result.str, str);
   strcat(result.str, other.str);
    return result;
}

mystring& mystring::operator+=(const mystring& other) {
    size_t newLength = length + other.length;
    char* newStr = new char[newLength + 1];
    strcpy(newStr, str);
    strcat(newStr, other.str);

    delete[] str;
    str = newStr;
    length = newLength;

    return *this;
}

bool mystring::operator==(const mystring& other) const {
    return strcmp(str, other.str) == 0;
}

bool mystring::operator!=(const mystring& other) const {
    return strcmp(str, other.str) != 0;
}


const char* mystring::getCString() const {
    return str;
}