
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file("Data.txt", ios::out | ios::trunc);

    file << "Programming Language";

    cout << "Writing Position: " << file.tellp() << endl;

    file.seekp(12);

    cout << "New Position: " << file.tellp() << endl;

    file << "C++";

    file.close();

    ifstream readFile("Data.txt");

    string text;

    getline(readFile, text);

    cout << "File Content: " << text << endl;

    readFile.close();

    return 0;
}
