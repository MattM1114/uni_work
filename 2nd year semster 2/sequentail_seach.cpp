#include <iostream>
#include <vector>
using namespace std;

int linear_search(int arr[],int n,int key){
    for(int i; i< n; i++){
        if (arr [i] == key)
        return i;
    }
    return -1;
}


bin


int main() {

    int n;
    cout<< "please enter the size of the array"<< endl;
    cin >>n;
    vector<int> arr(n) ;

    cout << "please enter the numbers in the array"<<endl;
    for (auto i:arr){
        cin >> arr[i];
    }
    int search;
    do
    {
        cout << "linear search 1"<<endl;
        cout << ""
    } while (search <3)
    







    return 0;

}