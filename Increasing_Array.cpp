#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    long int arr[n];

    for(int i=0; i<n; i++)
      cin >> arr[i];

    long int operation = 0;

    for(int i=1; i<n; i++){
        if(arr[i-1]>arr[i]){
            operation += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
    }

   //6 10 4 10 2 8 9 2 7 7

    cout << operation << endl;

}