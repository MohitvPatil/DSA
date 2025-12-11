using namespace std;
#include <iostream>
// //Put no of patterns 

//for n*n print
void print(int n){
    for(int i=0; i<n; i++ ){
        for(int j=0; j<n; j++){
            cout << "*";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    print(n);


// //For multiple test cases    
// void print1(int n){
//     for(int i = 0; i < n; i++){
//         {for(int j = 0 ; j <= n ; j++ )
//             cout << "*" ;
//         }
//     cout << endl ;
//     } 
// }

// int main() {
//     int t;
//     cin >> t;
//     for(int i = 0;  i<t;  i++){
//         int n;
//         cin >> n;
//         print1(n);
//     }
    
    return 0;
}