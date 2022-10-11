#include <iostream>

namespace first{
    int x = 1;
}


namespace second{

    int x = 2;

}

int main() {

    // Namespace = Provides a solution for preventing name conflicts
    // in large projects. Each entity needs a unique name. A namespace
    // allows for identically named entities as long 
    // as the namespaces are different

    int x = 0;
    // int x = 1; will result in an error
    std::cout << x;
    std::cout << first::x;
    std::cout << second::x;


    // Can also do the following

    //using namespace first;

    //std::cout << x;
    //std::cout << second::x;

    using namespace std;

    string name = "Bro";

    cout << "Hello " << name;

    // you dont have to write std everytime, but there might be naming conflicts

    //using std::cout;
    //using std::string;

    //string name = "Bro"
    //cout << "Hello " << name;

    return 0;


}