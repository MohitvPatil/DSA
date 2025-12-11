using namespace std;
#include <iostream>

// //Put no of patterns
// void print(int n){
//     for(int i=0;  i<n;  i++){
//         for(int j=0 ; j<=i ; j++){
//                 cout <<"*";
//         }
//         cout << endl;
//     }
// }



// void print(int n){
//     for(int i = 1; i<=n ; i++){
//         for(int j = 1; j<=i ; j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }    



// void print(int n){
//     for(int i = 1; i<=n ; i++){
//         for(int j = 1; j<=i ; j++){
//             cout << i << " ";
//         }
//         cout << endl;
//     }
// }    



// void print(int n){
//     for(int i = 1; i<=n ; i++){
//         for(int j = 0; j<n-i+1 ; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }


void print(int n){
    for(int i = 1; i<=n ; i++){
        for(int j = 1; j<n-i+1 ; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}


int main(){
    int t;
    cin >> t;
    for(int i=0 ; i<t ; i++){
        int n;
        cin >> n;
        print(n);
    }

    return 0;
}