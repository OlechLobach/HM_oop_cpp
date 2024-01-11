#include "mybitstring.h"


int main() {
   
    mystring str1("Hello");
    mystring str2(" World");
    mystring concatenatedStr = str1 + str2;

    cout << "Concatenated String: " << concatenatedStr.getCString() << endl;
    cout << "Length of Concatenated String: " << concatenatedStr.getLength() << endl;

   
    mybitstring bitstr1("1010");
    mybitstring bitstr2("1101");
    mybitstring result = bitstr1 + bitstr2;

    std::cout << "Result of Bitwise Addition: " << result.getCString() << std::endl;
    std::cout << "Length of Result: " << result.getLength() << std::endl;

    result.changeSign();
    std::cout << "Result after Changing Sign: " << result.getCString() << std::endl;

    return 0;
}