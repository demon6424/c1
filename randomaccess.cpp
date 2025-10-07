#include <iostream>
#include <fstream>

struct Record {
    int id;
    std::string data;
};

int main() {
    // Writing data randomly
    std::ofstream outfile("data3.bin", std::ios::binary);
    if (outfile.is_open()) {
        Record record1 = {1, "Sounak"};
        Record record2 = {2, "Tanman"};
        Record record3 = {3, "Puja"};
        outfile.write(reinterpret_cast<char*>(&record1), sizeof(Record));
        outfile.write(reinterpret_cast<char*>(&record2), sizeof(Record));
        outfile.write(reinterpret_cast<char*>(&record3), sizeof(Record));
        outfile.close();
    }

    // Reading data randomly
    std::ifstream infile("data3.bin", std::ios::binary);
    if (infile.is_open()) {
        int recordNumber; // The record number you want to read (1, 2, 3)
        infile.seekg((recordNumber-1) * sizeof(Record)); // Move the file pointer to the desired record
        Record record;
        infile.read(reinterpret_cast<char*>(&record), sizeof(Record));
        std::cout << "Record " << record.id << ": " << record.data << std::endl;
        infile.close();
    }
    return 0;
}
