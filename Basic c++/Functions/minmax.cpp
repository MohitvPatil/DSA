using namespace std;
#include <iostream>


//min
int maxx(int n1 , int n2){
    if(n1 >= n2) return n1;
    else 
    return n2;
}
int main(){
    int n1 , n2;
    cin >> n1 >> n2 ;
    int maximum = maxx (n1,n2);
    cout << maximum << endl;



//array    
// int main(){

//     int arr[4];
//     cin >>arr[0]>>arr[1]>>arr[2]>>arr[3];
//     int maxx = max ({arr[0],arr[1],arr[2],arr[3]});
//     cout << maxx ;

    return 0;
}   