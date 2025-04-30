#include "Harl.hpp"

int main (void)
{
    Harl harl;

    std::cout << "DEBUG LEVEL" << std::endl;
    harl.complain("DEBUG");  
    std::cout << "INFO LEVEL" << std::endl;
    harl.complain("INFO");
    std::cout << "ERROR LEVEL" << std::endl;
    harl.complain("ERROR");
    std::cout << "WARNING LEVEL" << std::endl;
    harl.complain("WARNING");
    return (0);
}