 #include <iostream>
 using namespace std;

 void weird(long int n){
        if(n==1){
          cout << "1\n";
          return;
        } 
            cout << n << " ";
        if(n%2)
           weird(n*3 + 1);
        else
           weird(n/2);
 }

 int main(){

   long int n;
    cin >> n;

    weird(n);

    return 0;;
 }