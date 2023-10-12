#include <iostream>
#include <array>
#include <math.h>
using namespace std;

void see_arr(array<float, 100> arr){
    for (int k = 0; k < arr.size(); k++){
        cout << arr[k] << " ";
    }
}

float count_T(array<float, 100> arr){
    int cnt_T = 0;
    int pol = 0;
    int otr = 0;
    for (int j = 1; j < arr.size(); j++){
        if (arr[j] > 0 && arr[j - 1] < 0 ){
            pol++;
        }
        else {
            if (arr[j] < 0 && arr[j - 1] > 0) {
                otr++;
            }
            
        }
    }
    return float(pol + otr) / 2.0;
}

int main(){
    
    const float PI = 3.14159265358979323846;
    array<float, 100> arr;
    for (int i = 0; i < arr.size(); i++){
        float x = 2*sin(float(2*PI*i)/16.0);
        arr[i] = x;
    }
    see_arr(arr);
    cout << "\n";
    cout << "T = " << count_T(arr);
}