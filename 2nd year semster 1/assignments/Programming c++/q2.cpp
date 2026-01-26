#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;
struct Resource
{
    /* data */
    int id,qty;
    double price;
    string name,location;
};

void loadResources(vector<Resource>& resList){
    ifstream file("resources.txt");
    Resource r;
    while (file >> r.id >> r.name >> r.qty >> r.price >> r.location)
    {
        resList.push_back(r);
    }
    file.close();
    
}

void saveResources(const vector<Resource>& resList){
    ofstream file("resources.txt");
    for (const auto& r : resList) {
        file << r.id<<" "<<r.name << " "<< r.qty <<" "<< r.price << " "<< r.location <<"\n";
    }
    file.close();
}

void addResources(vector<Resource>& resList){
    Resource r;
    cout << "Enter ID Name Qty Price Location:";
    cin >> r.id >> r.name>>r.qty>>r.price>>r.location;
    resList.push_back(r);
}

void updateResource(vector<Resource>& resList){
    int id;
    cout <<"Enter ID to Update: ";
    cin >> id;
    for (auto& r: resList){
        if (r.id == id){
            cout << "New Name Qty Price Location:";
            cin >> r.name>>r.qty>>r.price>>r.location;
            return;
        }
    }
    cout << "Resource not found.\n";
}
void deleteResource(vector<Resource>& resList){
    int id;
    cout<<"Enter ID to delete: ";
    cin >> id;
    for(auto it =resList.begin(); it != resList.end(); ++it){
        if (it->id == id){
            resList.erase(it);
            cout << "Deleted \n";
            return;
        }
    
    }
    cout << "Resource not found.\n";
}

void searchResource(const vector<Resource>& resList){
    int id;
    cout<<"Enter ID to search: ";
    cin >> id;
    for (const auto& r :resList){
        if (r.id == id){
            cout << r.id<<" "<<r.name << " "<< r.qty <<" "<< r.price << " "<< r.location <<"\n";
            return;
        }
    }
    cout << "Resource not found.\n";
}

int main(){
    vector<Resource> resList;
    loadResources(resList);
    int choice;
    do
    {
        /* code */
    
    
    switch (choice)
    {
    case 1: addResources(resList); break;
    case 2: updateResource(resList); break;
    case 3: deleteResource(resList); break;
    case 4: searchResource(resList);break;
    case 5: saveResources(resList); break;
    
    } 
   
    
    }while(choice != 5);
    return 0;
}