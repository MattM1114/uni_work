#include <iostream>

using namespace std;

int main(){
// multi dimensional arrays
// the 1st [] is the number of rows
// the 2nd [] is the number of columns
//int arr2[5]= {7,5,7,9,11};

// int arr3[2][3];
// int arr4[3][3];
// 
//int arr3[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

// this is just a 2 dimensional array but more readable
/*
enum day
{
    sunday,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
};
enum time {morning, afternoon}

schedule[tuesday] [afternoon]
*/
/*
int matrix [3][2];
for (int r=0;r<=3;r++){
    for(int c =0;c<2;c++){
        matrix[r][c]=c;
    }
}


for (int i = 0; i < matrix[3][2]; i++)
{
    cout<<matrix[i][i]<<endl;
}
*/

int arr1 [5] = {21,7,29,13,8};
int max;
for (int i = 0; i < 5; i++)
{
    if (arr1[i] > max)
    {
        max = arr1[i];
    }
}

return 0


}
