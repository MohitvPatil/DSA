using namespace std;
#include <iostream>
#include<vector>

int main() {
    
    // vector<int> v{1,2,3,4,5,6}; 
    // v.reserve(10);

    vector<int> v(6);
    cout << "Enter 6 numbers: ";
    for (int i = 0; i < 6; i++) {
    cin >> v[i]; // Store each input in the current index
    }

    // v.push_back(20);
    // v.pop_back();
    // v.insert(v.begin() + 2, 15);
    // v.erase(v.begin() + 1);
    // v.clear();
    // cout << "Size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;
 

    cout << "First element: " << v.front() << endl;
    cout << "Current Vector: ";

    for (int element : v) {
        cout << element << " ";
    }
    cout << endl;



    return 0;
}