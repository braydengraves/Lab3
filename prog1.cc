
/** 
 *    @file: prog1.cc
 *  @author: Brayden Graves
 *    @date: 9/15/2023
 *   @brief: Displays the sum and product of two numbers and tells us which is bigger
 * 
 */ 

#include<iostream> 
#include<cstdlib>

using namespace std;

const int INT1 = 15;
const int INT2 = 20;

int main()
{
    cout<< "Sum of " << INT1 << " and " << INT2 << " is " << INT1 + INT2 << "\n";
    cout << "Product is " << INT1 * INT2 << endl;

if(INT1 < INT2) {
    cout << INT2 <<" is bigger \n";
}
else {
    cout << INT1 <<" is bigger \n"; 
}    
    return (EXIT_SUCCESS);
}
