// how to write
// vector<int> arr(n);
// insert int vector
// arr.push_back(5);
// remove
// arr.pop_back();
// size
// arr.size();

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;

    // int ans=(sizeof(arr)/sizeof(char));
    // cout<<ans<<endl;



    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

    // insert
arr.push_back(5);
arr.push_back(6);


// remove
arr.pop_back();

// print 
for(int i=0; i<arr.size(); i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

int ;
cout<<"Enter the value of n "<<endl;
cin>>n;


vector<int> brr(10 , -101);
cout<<"Size of b "<<brr.size()<<endl;
cout<<"Capacity of b "<<brr.capacity()<<endl;


for(int i=0; i<brr.size(); i++){
    cout<<brr[i]<<" ";
}
cout<<endl;

cout<<" printing crr"<<endl;
vector<int> crr{10,20,30,50};

for(int i=0; i<crr.size(); i++){
    cout<<crr[i]<<" ";
}
cout<<endl;





    
    return 0;
}