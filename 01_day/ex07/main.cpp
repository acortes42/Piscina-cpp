#include <fstream>
#include <iostream> 
#include <string>

int main(int argc, char **argv)
{    
    std::string     filename;
    std::string     newFilename;
    std::string     str1;
    std::string     str2;
    std::string     line;

    if (argc != 4)
        return(-1);
    filename = argv[1];
    str1 = argv[2];
    str2 = argv[3];
    newFilename = filename + ".replace";
    std::ifstream  readFile(filename);
    if (readFile.fail())
    {
        std::cout << "Error opening file! :(" << std::endl;
        exit(1);
    }
    std::ofstream    outFile(newFilename);
    if (outFile.fail())
    {
        std::cout << "Error creating file! :(" << std::endl;
        exit(1);
    }
    while(getline(readFile, line))
    {
        while (line.find(str1) != std::string::npos)
            line.replace(line.find(str1), str1.length(), str2);
        outFile << line << std::endl;
    }
    outFile.close();
    readFile.close();
    return (1);
}