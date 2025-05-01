#include <iostream> //including basic input library 
using namespace std;


// Function to perform linear search


int main() {
    int arr[] = {2,6,8,10,15,40}; //created a simple array coz offcourse we need a list to travel 

    int n = sizeof(arr) / sizeof(arr[0]); //we will need total number of elemnents in list to know our current location and when to stop

    cout << "The list we have is: "; // printing the list we have so that user can pick a number
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int a; // the element we will be searching for

    cin>>a; // asking user for input 

    for(int i = 0; i < n; i++) { //looping through the list
        
        if (arr[i] == a) { //checking if the current element is equal to the element we are searching for

            cout << "Element found at index " << i << endl; //if yes, print the index

            return 0; //exit the program
        }
    }

    cout << "Element not found" << endl; //if we reach here, it means the element was not found

    return 0; //exit the program


}  
