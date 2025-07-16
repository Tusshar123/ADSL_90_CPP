#include<iostream>
using namespace std;

int main () {
    int arr[] = {1, 1, 1, 0, 0, 0};   
    int n = sizeof(arr) / sizeof(arr[0]);   
    int low = 0;
    int high = n - 1;
    int ans = n;   
    int mid;

     
    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == 0) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    int zerocount = n - ans;   

    cout << "The Zero's Are Present in the array :- " << zerocount << endl;

    return 0;
}
