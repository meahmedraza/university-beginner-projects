#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
ofstream myfile;
myfile.open ("example.bin", ios::out | ios::app | ios::binary);// basic file operations
myfile << "Hi, I'm Ahmed Raza from CS department.It's my 3rd Semester.\n";
myfile.close();
return 0;
}

