#include <iostream>
using namespace std;

class animal {
public:
    void make_sound(){
        cout << "sound!"<<endl;
        }
};
class dog : public animal{
public:
    void make_sound(){
        cout <<"Bark!"<<endl;
        }
};
int main(){
animal a;
dog d;

a.make_sound();
d.make_sound();

return 0;
}
