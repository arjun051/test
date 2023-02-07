/*swapping alternate nos in case of even nos and odd nos of terms */
 #include<iostream>
 using namespace std;
//  program to print array 
  void printArray(int arr[], int n){
    for (int i=0;i<n;i++){
        cout << arr[i];
    }
    cout<< endl;
  }
 
//  Program to swap array (THIS IS THE MAIN PROGRAM .)


 void swapArray ( int arr[], int size ){
    for (int i=0; i<size; i+=2){
        if (i+1<size){
            swap (arr[i], arr[i+1]);
        }
    }
 }

//  Driver code 


 int main(){
 
int arr[5]={1,2,3,4,5};
printArray(arr,5);
swapArray(arr,5);
printArray(arr,5);
int ar[4]={1,2,3,4};

printArray(ar,4);
swapArray(ar,4);
printArray(ar,4);


 return 0;}



 