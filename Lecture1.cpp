//everything in C++ is case sensitive 

#include <iostream>

/*
int main(){
    std::cout << "Hello, World!\n"; 
    return 0; 
}
*/

/* 
Keywords - words with specific meaning to the compiler: int, double, for, auto 
Identifiers - Name of thing that are not built in to the language: cout, std, x, myFunction 
Literals - Basic constant values whose value is spcified directly in the source code: "Hello, World!", 24.3, 0, 'c' 
Operators - Mathematical of logical operators: +, -, &&, %, <<
Punctuation/separators - Punctuation defining the structure of a program: {} () , ; 
Whitespace - Spaces of various sorts; ignored by the compiler: Spaces, tabs, newlines, comments  
*/

//Lines beginning with # are preprocessor commands, which usually change which code what code is actually being compiled. 
//#include tells the preprocessor to dump in the contents of another file. 

/*int main(){...} defines the code that should execute when the program starts up. The curly braces represents grouping of multiple 
commands into a block.*/ 

//cout << is the syntax for outputting some piece of text to the screen. 

/* Namespaces: In C++ identifiers can be defined whithin a context - sort of a directory of names called a namespace.
When we want to access an identifier defined in a namespace, we tell the compiler to look for it in that namespace 
using the scope resolution operator (::). std::cout looks for cout in the std namespace. Many C++ identifiers defined in std
cleaner way is to use using namespace std; */ 

/*This line tells the compiler that it should look in the std namespace for any
identifier we haven’t defined. If we do this, we can omit the std:: prefix when
writing cout. This is the recommended practice.*/ 

// 1/4 = 0 and 1/4.0 = 0.25 

//an example again 

using namespace std; 

int main(){
    int x = 4+2;  
    cout << x/3 << ' ' << x*2; 
    return 0; 
}

//syntax for input of value is cin instead of cout which it output 
