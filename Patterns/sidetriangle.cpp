using namespace std;
#include <iostream>


// void print(int n){
//     for(int i = 1; i<=2*n-1 ; i++){
//         int stars = i;
//         if (i > n) stars = 2*n - i;
//         for(int j = 1; j<=stars ; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }


void print(int n){
    int start = 1   ;
    for(int i = 0; i<n ; i++){
        if(i%2 == 0) start = 1;
        else start = 0;
        for(int j = 0; j<=i ; j++){
            cout << start;
            start = 1-start;
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