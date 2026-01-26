#include <iostream>
using namespace std;
/*  this class is to create a self adjusting array which 
works a bit like a que all the operations start at the front  
since this is not a normal  array we have to set it to 100 to make it simple to adjust  it 
without constantly chaning the actual length of the array */
class self_Adjusting_Arr{
    private:
        int arr[100];
        int size;
    public:
    self_Adjusting_Arr(){
        size =0;
    }
    // adding to the front of the array
    void insert_front(int val){
        // shift the elements to the right
        for (int i =size; i > 0; --i){
            arr[i]= arr[i-1];
        }
        arr[0] = val;
        size++;

    }
    /* this function or method allow you to tell if 
    the number we are looking for is in the array in the first place */
    bool find(int val){
        int index = -1;
        for (int i =0; i<size;i++){
            if(arr[i] == val){
                index = i;
                break;
            }
        }
        if (index == -1){
            return false; //just in case it is not found
        }
        int temp = arr[index];
        for (int j = index; j>0; --j){
            arr[j] = arr[j -1];
        }
        arr[0] = temp;
        return true;
    }
    
    void display(){
        for (int i =0;i<size;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }


};

int main() {
    self_Adjusting_Arr list;
    list.insert_front(10);
    list.insert_front(20);
    list.insert_front(30);
    list.insert_front(40);

    cout<<"initial list:";
    list.display();

    list.find(20);
    cout <<"After accessing 20: ";
    list.display();
    
    return 0;
} 