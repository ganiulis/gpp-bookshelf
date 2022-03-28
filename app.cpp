#include<iostream>
#include<fstream>
#include<string>

int main()
{
    std::string bookString;
    std::ifstream bookData; // ifstream = input file stream

    bookData.open("data/mydata.txt"); // opens the file using the bookData object

    while (bookData.is_open()) {
        if (false == bookData.good()) {
            break;
        }

        std::getline(bookData, bookString); // stores a bookData row into bookString

        std::cout << bookString << std::endl; // prints out what is found in bookString and writes a newline
    }

    bookData.close(); // frees memory from opened bookData object

    return 0;
}
