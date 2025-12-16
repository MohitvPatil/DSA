using namespace std;
#include <iostream>
#include<list>

int main() {
    
    list<int>ls;
    ls.push_back(1);
    ls.emplace_back(2);
    ls.push_front(3);
    ls.emplace_front(4);

    for (int element : ls) {
        cout << element << " ";
    }
    cout << endl;
 
    return 0;
}