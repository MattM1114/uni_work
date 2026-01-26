#include <iostream>
#include <vector>

using namespace std;

void manualSwap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                manualSwap(arr[j], arr[j + 1]);
            }
        }
    }
}

void selectionSort(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int mindex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[mindex]) {
                mindex = j;
            }
        }
        manualSwap(arr[i], arr[mindex]);
    }
}

void insertionsort(vector<int> &arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int linear_search(vector<int> &arr, int key) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int bin_search(vector<int> &arr, int key) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Please enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Please enter the numbers in the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sort;
    do {
        cout << "\nPlease enter the type of sort you want:" << endl;
        cout << "1 - Bubble Sort" << endl;
        cout << "2 - Selection Sort" << endl;
        cout << "3 - Insertion Sort" << endl;
        cout << "4 - Exit" << endl;
        cout << "Your choice: ";
        cin >> sort;

        switch (sort) {
            case 1:
                bubbleSort(arr);
                cout << "Array sorted using Bubble Sort.\n";
                break;
            case 2:
                selectionSort(arr);
                cout << "Array sorted using Selection Sort.\n";
                break;
            case 3:
                insertionsort(arr);
                cout << "Array sorted using Insertion Sort.\n";
                break;
            case 4:
                cout << "Starting search section...\n";
                break;
            default:
                cout << "Invalid option. Try again." << endl;
                break;
        }
    } while (sort != 4);

    int search;
    do {
        cout << "\nPlease enter the type of search you want:" << endl;
        cout << "1 - Linear Search" << endl;
        cout << "2 - Binary Search" << endl;
        cout << "3 - Exit" << endl;
        cout << "Your choice: ";
        cin >> search;

        if (search == 1) {
            int val;
            cout << "Enter the value to search for: ";
            cin >> val;
            int s = linear_search(arr, val);
            if (s == -1)
                cout << "Value not found." << endl;
            else
                cout << "Value found at index " << s << endl;
        } else if (search == 2) {
            int val;
            cout << "Enter the value to search for: ";
            cin >> val;
            int s = bin_search(arr, val);
            if (s == -1)
                cout << "Value not found." << endl;
            else
                cout << "Value found at index " << s << " (in sorted array)" << endl;
        } else if (search == 3) {
            cout << "Goodbye!" << endl;
        } else {
            cout << "Invalid option. Try again." << endl;
        }
    } while (search != 3);

    return 0;
}
