#include <iostream>
#include <array>
using namespace std;

int find_i(array<int, 10> arr){
    int n;
    cout << "Enter n:";
    cin >> n;
    int left = 0;
    int right = (sizeof(arr) / sizeof(arr[0])) - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == n)
            return mid;
        if (arr[mid] < n)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
    
}

int main(){
    array<int, 10> arr;
    for (int i = 0; i < arr.size(); i++){
        cout << "Enter: ";
        cin >> arr[i];
    }
    int s = find_i(arr);
    if (s == -1){
        cout << "Error";
    }
    else {
        cout << s + 1;
    }
}