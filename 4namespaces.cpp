#include <iostream>

/*Namespace = provides a solution for preventing name conflicts in large
projects. Each entity needs a unique name. A namespace allows for 
indetically named entities as long as the namespaces are different

Purpose:
Namespaces avoid name conflicts between identifiers (like variables, functions, classes) in large programs or libraries.

Why Needed:
If two libraries have the same function/class name, they’ll clash. Namespaces separate them logically.

How It Works:
A namespace acts like a container or label for related code.

Best Practice:
Don’t use using namespace std; in headers or large programs (can cause clashes).
Prefer std::cout instead.

basically if we do 
int x = 1;
then we cant do
int x = 2;
so for that we need namespace*/

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}
int main() {

    int x = 0;

    std::cout << x;
    std::cout << first::x;
    std::cout << second::x;

    return 0;
}