#include <iostream>
#include <cpr/cpr.h>

void getCommand()
{
    cpr::Response r = cpr::Get(cpr::Url("http://httpbin.org/get"));
    std::cout << r.text << std::endl;
}

void postcommand()
{
    cpr::Response r = cpr::Post(cpr::Url("http://httpbin.org/post"));
    std::cout << r.text << std::endl;
}

void putCommand()
{
    cpr::Response r = cpr::Put(cpr::Url("http://httpbin.org/put"));
    std::cout << r.text << std::endl;
}

void deleteCommand()
{
    cpr::Response r = cpr::Delete(cpr::Url("http://httpbin.org/delete"));
    std::cout << r.text << std::endl;
}

void patchCommand()
{
    cpr::Response r = cpr::Patch(cpr::Url("http://httpbin.org/patch"));
    std::cout << r.text << std::endl;
}

int main() {
    std::string command = "";
    while (command != "exit")
    {
        std::cout << "Input command: ";
        std::cin >> command;
        if (command == "get") getCommand();
        else if (command == "post") postcommand();
        else if (command == "put") putCommand();
        else if (command == "delete") deleteCommand();
        else if (command == "patch") patchCommand();
        else if (command != "exit") std::cout << "Wrong input!" << std::endl;
    }
    return 0;
}
