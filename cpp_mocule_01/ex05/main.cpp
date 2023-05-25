#include "Harl.hpp"

int main(void)
{
    Harl    harl;

    std::cout << "input: \"DEBUG\"" << std::endl;
    harl.complain("DEBUG");
    std::cout << "input: \"INFO\"" << std::endl;
    harl.complain("INFO");
    std::cout << "input: \"WARNING\"" << std::endl;
    harl.complain("WARNING");
    std::cout << "input: \"ERROR\"" << std::endl;
    harl.complain("ERROR");
    std::cout << "input: \"debug\"" << std::endl;
    harl.complain("debug");

    return (0);
}