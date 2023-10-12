#include <iostream>
#include <array>
using namespace std;

typedef array<array<int, 2>, 2> matrix;

void add_arr(matrix& arr){
    for (int i = 0; i < arr.size(); i++){
        for (int j = 0; j < arr.size(); j++){
            cin >> arr[i][j];
        }
    }
}

void see_arr(const matrix& arr){
    for (int k = 0; k < arr.size(); k++){
        for (int g = 0; g < arr.size(); g++){
            cout << arr[k][g] << " ";
        }
        cout << "\n";
    }
}

int main(){
    
    matrix arr;
    add_arr(arr);
    cout << "\n";
    see_arr(arr);
}