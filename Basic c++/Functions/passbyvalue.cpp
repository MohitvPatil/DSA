using namespace std;
#include<iostream>



void something(string &s){
    s[2]= 'z' ;
    cout << s << endl;
}
int main(){
    string s = "mvp";
    something(s);
    cout << s << endl;
    


// void something(int &i){
//     i *= 5;
//     cout << "F Iter = " << i << endl;
//     i *= 5;
//     cout << "S Iter = " << i << endl;
// }
// int main(){
//     int i;
//     cout << "I = ";
//     cin >> i ;
//     something(i);
//     cout << "final = " << i << endl;


// void dosome(int arr[] , int n){
//     arr[1] += 100;
//     cout<< "value 1 = "<< arr[1] << endl;
//     arr[2] += 100;
//     cout<< "value 2 = "<< arr[2] << endl;
// }
// int main(){
//     int n = 3;
//     int arr[n];
//     for(int i = 0;   i<n ;   i=i+1){
//         cin >> arr[i];        
//     }
//     dosome(arr , n);
//     cout<< "value in main = "<< arr[2] << endl;





    return 0;
}
