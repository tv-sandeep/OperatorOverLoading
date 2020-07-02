#include "Header.h"

//In C++, operators are implemented as functions.
//By using function overloading on the operator functions, 
//you can define your own versions of the operators that work with 
//different data types(including classes that you’ve written).
//Using function overloading to overload operators is called operator overloading.


//Limitations
//First, almost any existing operator in C++ can be overloaded. 
//The exceptions are: conditional (?:), sizeof, scope (::), member selector (.), 
//member pointer selector (.*), typeid, and the casting operators.

//Second, you can only overload the operators that exist.
//You can not create new operators or rename existing operators.
//For example, you could not create an operator ** to do exponents.

//Third, at least one of the operands in an overloaded operator must be a user-defined type.
//This means you can not overload the plus operator to work with one integer and one double.
//However, you could overload the plus operator to work with an integer and a Mystring.

//Fourth, it is not possible to change the number of operands an operator supports.

//Finally, all operators keep their default precedenceand associativity
//(regardless of what they’re used for) and this can not be changed.

int main()
{
    
}
