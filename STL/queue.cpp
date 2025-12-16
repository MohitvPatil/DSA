using namespace std;
#include <iostream>
#include <queue>


int main() {
    //queue    
    queue<int> q;
    q.push(1);
    q.push(4);
    q.push(3);
    q.emplace(4);

    q.back() += 4;

    cout<<q.back()<<endl;
    cout<<q.front()<<endl;
    
    q.pop();

    cout<<q.front()<<endl;
    


// //priority_queue
//     priority_queue<int>q;
//     // priority_queue<int, vector<int>, greater<int>> q;

//     q.push(1);
//     q.push(6);
//     q.push(3);
//     q.emplace(8);

//     q.pop();
//     cout<<q.top();

    
    return 0;
}