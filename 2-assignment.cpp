/*
Problem 2: Move all zeroes to the end of an array.
Statement: Given an array of random numbers, push all zeroes to the end 
           while maintaining the relative order of the non-zero elements.

Approach : Apply Merge Sort manually and then push all 0s to the end.The input should be positive numbers

Input(Input should be positive numbers only):4 0 1 3 0 5
Output:1 3 4 5 0 0
*/
#include<iostream>
using namespace std;

class sort {
    public:
    void mergesort(int a[], int lb, int ub) {
        if (lb < ub) {
            int mid = (lb + ub) / 2;
            mergesort(a, lb, mid);
            mergesort(a, mid + 1, ub);
            merge(a, lb, mid, ub);
        }
    }

    void merge(int a[], int lb, int mid, int ub) {
        int b[20];
        int i = lb;
        int j = mid + 1;
        int k = lb;

        while (i <= mid && j <= ub) {
         
            if (a[i] >= a[j]) {
                b[k] = a[i];
                i++;
            }
            else {
                b[k] = a[j];
                j++;
            }
            k++;
        }

        if (i > mid) {
            while (j <= ub) {
                b[k] = a[j];
                j++;
                k++;
            }
        }
        else {
            while (i <= mid) {
                b[k] = a[i];
                i++;
                k++;
            }
        }

        for (int m = lb; m <= ub; m++) {
            a[m] = b[m];
        }
    }
};

int main() {
    int size, a[20];
    cout << "Enter ARRAY size: ";
    cin >> size;

    cout << "Enter ARRAY elements:\n";
    for (int i = 0; i < size; i++) {
        cout << "Enter " << i << " Element: ";
        cin >> a[i];
    }

    sort obj;
    obj.mergesort(a, 0, size - 1);

    cout << "\nSorted ARRAY in Descending Order:\n";
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}


