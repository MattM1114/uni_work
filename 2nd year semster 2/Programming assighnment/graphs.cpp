#include <iostream>
#include<vector>
using namespace std;

int main() {

    int matrix[5][5] = {0};
    vector<vector<int>> graph(5);
    matrix[0][1] = 1;
    matrix[1][2] = 1;
    matrix[2][1] = 1;
    matrix[1][4] = 1;
    matrix[2][4] = 1;
    matrix[0][3] = 1;
    matrix[4][3] = 1;

    cout << "matrix"<<endl;
    for (int i =0 ; i <5; i++){

        for(int j=0;j<5;j++){

            cout<<matrix[i][j]<<" ";
        }
    cout<<endl;
    }
    cout<<endl;

    graph[0].push_back(1);
    graph[1].push_back(2);
    graph[2].push_back(1);
    graph[1].push_back(4);
    graph[2].push_back(4);
    graph[0].push_back(3);
    graph[4].push_back(3);
    cout << "graph"<<endl;
    for (int i=0;i<5;i++){
        cout <<i<<"->{";
        for (int ilist: graph[i]){
            cout <<ilist<<" ";
        }
        cout<<"}"<<endl;
    }
    cout<<endl;


    return 0;
}