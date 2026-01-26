#include <iostream>
#include <fstream>

using namespace std;

int main(){
//for opening a file inoder to write to it
ofstream outFile("example.txt");

if (!outFile){
    cerr <<"file could not be found"<<endl;
    return 1;
}

outFile <<"Hello world, I'm working in c++ "<<endl;


outFile.close();

return 0;
}
