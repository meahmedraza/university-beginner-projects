// basic file operations
#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
ofstream myfile;
myfile.open ("example.txt");
myfile << "Hi, I'm Ahmed Raza from CS department.It's my 3rd Semester.\n";
myfile.close();
return 0;
}

