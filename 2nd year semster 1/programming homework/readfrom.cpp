#include <iostream>
#include <fstream>

using namespace std;

int main(){
ifstream infile("example.txt"); // opening file

if (!infile){
    cerr <<"file could not be found"<<endl;
    return 1;
}

string line;

while(getline(infile,line)){
    cout<<line<<endl;
}


infile.close();

return 0;
}
