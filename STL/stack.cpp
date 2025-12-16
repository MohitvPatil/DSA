using namespace std;
#include <iostream>
#include <stack>

int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(6);

    cout << "Top=" << st.top()<<endl;

    st.pop();

    cout << "Top=" << st.top() << endl;
    cout << "Size=" << st.size() << endl;
    cout << "Empty=" << st.empty() << endl;
    
    stack<int>st1,st2;
    st1.swap(st2);

    return 0;
}