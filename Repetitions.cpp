#include <iostream>
using namespace std;

int main(){

    string s;
    cin >> s;

    long int size = s.length();

   int count = 1, highest = 1;
   bool match = false;
   for(int i=0; i<size-1; i++){

        if(s[i] == s[i+1]){
            count++;
            match = true;
            if(count!=1 && highest<count){
                highest=count;
            }
        } else if(match==true) {
            match = false;
            count=1;
        }
   }

   cout << highest << endl;


    return 0;
}