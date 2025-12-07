// pass by reference 
 #include<iostream>
using namespace std;

// void printArray(int arr[],int size){
//     for(int i=0;i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void inc(int arr[], int size){
//     arr[0] = arr[0]+10;
//     printArray(arr, size); 
// }

// int main(){     
//     int arr[]={5,6};
//     int size=2;
//     inc(arr,size);
//     printArray(arr,size);
// }

//  linear search/

// bool find(int arr[], int size, int key){
//     //  liners serach

//     for(int i=0; i<size;i++){
//         if(arr[i]==key)
//             return true;
        
//     }
//     return false;
// }
// int main(){
//     int arr[5]={1,3,5,7,8};
//     int size =5;
//     cout<<"Enter the key to find "<<endl;
//     int key;
//     cin>>key;
//     if(find(arr,size,key)){
//         cout<<"Found"<<endl;

//     }else{
//         cout<<"not found "<<endl; 
//     }
// }


// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9};

//     int size =8;
//     int key =9;

//     bool flag =0;
//     //  0-> not found
//     //  0-> found

//     // linear search  
//     for(int i=0; i<size; i++){
//         if(arr[i]==key){
//             cout<<"found"<<endl;

//         }
//     }
//     cout<<"Not found"<<endl;
//     return 0;
// }


// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9};

//     int size =8;
//     int key =1;

//     bool flag =0;
//     //  0-> not found
//     //  0-> found

//     // linear search  
//     for(int i=0; i<size; i++){
//         if(arr[i]==key){
//             //found
//             flag=1;

//         }
//     }
//     if(flag)
//         cout<<"Present "<<endl;
//     else
//         cout<<"Absent"<<endl;
    
//     // cout<<"Not found"<<endl;
//     return 0;
// }

// counting 
// int main(){
//  int arr[]={0,1,1,1,0,0,0,0,1,0,1,0,1,0,1};

//  int size =15;
//   int numZero =0;
//   int numOne = 0;
// for(int i=0;i<size; i++){
//     if(arr[i]==0){
//         numZero++;
//     }
//     if(arr[i]==1){
//         numOne++;
//     }
// }
// cout<<"number or zeroes"<<numZero<<endl;
// cout<<"number or ones"<<numOne<<endl;
// }


#include<limits.h>
// int main(){
//     int arr[]= {2,3,4,5,6,7,7,23,34,54,67,60};
//     int size =11;

//     int maxi = INT_MIN;
//     int mini = INT_MAX;
//     for(int i=0;i<size;i++){
//         if(arr[i]>maxi){
//             maxi=arr[i];
//         }
//     }

//     for(int i=0;i<size;i++){
//         if(arr[i]<mini){
//             mini=arr[i];
//         }
//     }

//     cout<<"maximun "<<maxi <<endl;
//     cout<<"Minimun"<<mini<<endl;
//     return 0;
// }