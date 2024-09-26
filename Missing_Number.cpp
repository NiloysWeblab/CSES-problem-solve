#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n] = {0};
    for(int i=0; i<n; i++)
      cin >> arr[i];

    int a[n+1] = {0};

    for(int i=0; i<n; i++){
        a[arr[i]]++;
    }
   

    for(int i=1; i<=n+1; i++){
        if(a[i]==0){
            cout << i << endl;
            break;
        }
    }
    
    return 0;
}