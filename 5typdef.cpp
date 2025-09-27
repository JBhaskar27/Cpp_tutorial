#include <iostream>
#include <vector>

/*typedef = Reserved keyword used to create an additional name(alias) for
another data type. New identifier for an existing type, helps with 
readability and reduces typos

syntax:
typedef original_type new_name;

example:
typedef unsigned int uint;
uint x = 10;  // same as: unsigned int x = 10;

Replaced with 'using' keyword in C++11(works better with templates)
Cleaner and more powerful than typedef.

syntax:
using new_name = original_type;

example:
using uint = unsigned int;
*/

//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;

int main(){

    text_t firstName = "Bro";
    number_t age = 21;

    std::cout << firstName << '\n';
    std::cout << age << '\n';

    return 0;
}