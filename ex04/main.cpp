#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <cstdio>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "wrong number of arguments." << std::endl;
        return (1);
    }
    const std::string find = argv[2];
    const std::string replace = argv[3];
    std::ifstream file (argv[1]);
    size_t current = 0;
    std::string line;

    if (find.empty())
    {
        std::cerr <<"error: file empty." << std::endl;
        return (1);
    }

    if (!file.is_open())
    {
        std::cout <<"error: file closed." << std::endl;
        file.close();
        return (1);
    }

    std::ofstream newFile((std::string(argv[1]).append(".replace")).c_str());

    if (!newFile.is_open())
    {
        std::cout <<"error: output file failed on opening." << std::endl;
        file.close();
        return (1);
    }

    while(std::getline(file,line))
    {
        current = line.find(find, 0);
        while (current != line.npos)
        {
            line.erase(current, find.length());
            line.insert(current, replace);
            current = line.find(find, current + replace.length());
        }
        newFile << line << std::endl;
    } 
        
    file.close();
    newFile.close();

    return (0);

}