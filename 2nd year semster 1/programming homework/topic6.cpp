#include <iostream>
using namespace std;
// function to sort an array prototype
void selectionSort(int lis[], int length);
int main(){
    int list[10] ; //= {5,54,31,29,10,9,3,81,90,60} ;
    cout << "Please enter 10 numbers into the array that you want sorted" <<endl;
    for (int i = 0; i < 10; i++){
        cin >> list[i];
    }
    selectionSort(list,10);
    cout << "the sorted list is: " << endl;
    for (int i = 0; i < 10; i++){
        cout << list[i] << " ";
    }
    cout << endl;

    return 0;
}
//the actual function
void selectionSort(int lis[], int length){
    int index,small,loc,temp;
    for(index =0; index <length-1; index++){
        small = index;

        for(loc = index +1; loc < length; loc++){
            if (lis[loc] < lis[small]){
                small = loc;
            }
        }
        temp = lis[small];
        lis[small] = lis[index];
        lis[index]= temp;

    }

}
