#include <iostream> // preprocessor directive

int main() // main function
{
    // print welcome expression messages to the terminal  
    std::cout << "You are a robotics engineer trapped in a conference room with an AI system gone rogue";
    std::cout << std::endl; // ends text line
    std::cout << "Enter the correct code to disable every robot in the room or else the board will be terminated...";
    
    // declare 3 number code
    const int a = 4;
    const int b = 3;
    const int c = 2;

    /*
    This is
    a 
    multi-line
    comment
    */

    
    const int sum = a + b + c;
    const int product = a * b * c;

    // Print sum and product to the terminal
    std::cout << std::endl; 
    std::cout << sum << std::endl; 
    std::cout << product << std::endl;

    return 0;
}