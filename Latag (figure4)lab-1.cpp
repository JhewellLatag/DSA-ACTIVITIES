#include <iostream>

using namespace std;

int myArray[30];
int numElem = 0;
int maxElem = 20;

void traverseArray(){
    cout << "Showing elements in my array\n";
    for(int i= 0; i< maxElem; i++){
        cout<< to_string(myArray[i]) + " | ";
    }
    cout << "\n";
    
}


int main(){
 myArray[0] = 0;
 myArray[1] = 1;
 myArray[2] = 2;
 myArray[3] = 3;
 myArray[4] = 4;

 

traverseArray();



    



return 0;
 

}