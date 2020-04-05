// if, if-else and else if 

// if there is only one statement in if: the curly brackets can be ignored 

// if / else : one must be executed. If: False -> else is executed 

// else if is used when there are two or more blocks based on multiple conditions 

// there may be more than one else if - either one or no block is executed 

// else can be added in the end so that block is executed if no other is 

// example 

/*
#include <iostream>
using namespace std; 

int main(){
    int x = 6; 
    int y = 6; 
    if(x > y){
        cout << "x is greater than y \n"; 
    }
    else if(x < y){
        cout << "y is greater than x \n"; 
    }
    else{
        cout << "x and y are equal \n"; 
    }
    return 0; 
}
*/ 

// switch case in C++ example 
/*
#include <iostream>
using namespace std; 
int main(){
    int x = 2; 
    switch(x){
        case 1:{
            cout << "x is equal to 1 \n"; 
            break; 
        }
        case 2:
        case 3:{
            cout << "x is equal to 2 or 3 \n"; 
            break; 
        }
        default:{
            cout << "x is not 1, 2 or 3 \n"; 
            break; 
        }
    }
    return 0; 
}
*/ 

//while and do-while 
//example of while 

/*
#include <iostream>
using namespace std; 
int main(){
    int x = 0; 

    while(x<10){
        x = x+1; 
    }
    cout << "x is " << x << "\n";
    return 0;  
}
*/

// the do-while is a variation that garantees that the block of statements will be executed at least once 

/*
do
{
statement1
statement2
…
}
while(condition);
*/ 

// for loop: for(initialization; condition; incrementation) 







