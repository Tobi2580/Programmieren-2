#include <iostream>
#include <string>
// function declaration
void printerr(std::string, int = 0);
int main(){
    double a, b;
    std::cout << "Two numbers: ";
    std::cin >> a >> b;
    try {
        if (!a && !b)
            throw "Division 0 / 0 - 2";
        else if (!b)
            throw "Division by zero - 1";
        else if (!a)
            throw "Example too easy - 0";
        else
            std::cout << a << " / " << b << " = " << a / b << '\n';
    }
    catch (const char * sz){
        std::cout << sz << std::endl;
    }

}
// function definition
void printerr (std::string message, int severity){
    std::cerr << message + "Severity: " << severity << '\n';
}
