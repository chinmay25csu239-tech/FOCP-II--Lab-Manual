#include <iostream>
using namespace std;
void printing(int num){
    if (num == 4){
        return ;
    }
    cout << num << endl;
    printing(num+1);
    cout << num  << endl; 
}
void printArr(int arr[],int index, int size, int ele){ 
    if(index == size){
        return ;
    }
    if(arr[index] == ele){
        cout << index << endl;
        return; 
    }
    cout << arr[index] << endl;
    printArr(arr,index+1, size, ele);
}
int main(){
    int arr[] = {10,20,30,40};
    int size = sizeof(arr)/ sizeof(arr[0]);
    int ele = 30; 
    printArr (arr,0,size,ele);
    // int num =1;
    // printing(num); 
}