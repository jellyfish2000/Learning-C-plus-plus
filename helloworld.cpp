#include <iostream>

int main(){
    std::cout <<"I like pizza!" << std:: endl;

    // endl will flush output buffer

    std::cout << "It's really good!" << '\n';
    /* 
    \n is better performance wise
    but both do the same thing
    */
    std::cout << "Ok" << std:: endl ;

    // Variables:

    int x; //declaration 

    x = 5; //assignment

    std::cout << x << '\n';

    // Can also do this:

    int y = 6;
    std::cout << y << '\n';

    int sum = x + y;

    std::cout << sum << '\n';

    // Integer (whole number)
    int days = 7.5;
    std::cout << days << '\n';
    // if not whole number: output is just the whole number part

    //Double (number including decimal)
    double price = 10.99;
    std::cout <<price << '\n';

    //Char (single character)
    char grade = 'A';
    std::cout <<grade <<'\n';
    // if more than one character: error will display along with last character
    //example 'AB'
    char currency = '$';
    std::cout <<currency <<'\n';

    // Boolean (true of false)
    bool student = true;
    bool power =true;

    //string (objects that represent a sequence of text)
    std::string name = "Preethi";
    std::cout <<name <<'\n';
    int age = 12;

    std::cout << "Hello " << name << '\n';
    std::cout <<"You are " << age << " years old";



    return 0;

}