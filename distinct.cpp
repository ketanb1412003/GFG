#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& arr) {
    int n;
    cin >> n; // Read the number of elements
    int a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        arr.push_back(a);
    }
    if (n <= 1)
        return n;
    int idx = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            arr[idx++] = arr[i];
        }
    }
    return idx;
}

int main() {
    vector<int> v;
    int newSize = removeDuplicates(v);
    for (int i = 0; i < newSize; i++)
        cout << v[i] << " ";
    return 0;
}