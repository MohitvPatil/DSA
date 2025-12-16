using namespace std;
#include <iostream>
#include <set>


int main() {
    
    set<int>st;
    st.insert(1);
    st.emplace(2);
    st.insert(3);
    st.insert(4);
    st.insert(5);

    for (int element : st) {
        cout << element << " ";
    }
    cout << endl;

    auto it =st.find(3);
    
    return 0;
}