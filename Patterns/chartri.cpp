using namespace std;
#include <iostream>

void print(int n){
    int num = 1;    
    for(int i = 1 ; i <= n ;  i++){
        for(int j = 1 ; j <= i  ; j++){
            cout << num ;
            num = num + 1;
        }
        cout << endl;
    }
}


// void print(int n){
//     for(int i=0; i<n ; i++){
//         for(char ch = 'A' ; ch <= 'A' + (n-i-1) ; ch++ ){
//             cout << ch << " ";
//         }
//        cout << endl; 
//     }
// }


// void print(int n){
//     for(int i=0; i<n ; i++){
//         for(char ch = 'A' ; ch <= 'A'+ i ; ch++ ){
//             cout << ch << " ";
//         }
//        cout << endl; 
//     }
// }


// void print(int n){
//     for(int i=0; i<n ; i++){
//         char ch = 'A' + i;
//         for(int j =0 ; j<=i ; j++ ){
//             cout << ch << " ";
//         }
//        cout << endl; 
//     }
// }


int main(){ 
    int n;
    cin >> n;
    print(n);
    return 0;
}

