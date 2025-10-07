#include <iostream>
#include <fstream>

int main() {
    // Writing data sequentially
    std::ofstream outfile("shabi.txt");
    if (outfile.is_open()) {
        outfile << "Record 1\n";
        outfile << "Record 2\n";
        outfile << "Record 3\n";
        outfile.close();
    }

    // Reading data sequentially
    std::ifstream infile("shraddha.txt");
    if (infile.is_open()) {
        std::string line;
        while (std::getline(infile, line)) {
            std::cout << line << std::endl;
        }
        infile.close();
    }
    return 0;
}
