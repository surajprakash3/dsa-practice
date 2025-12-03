#include<iostream>
using namespace std;
int main(){

    // solid rectangle
    // int a;
    // cin>>a;
//     for(int i=0;i<a;i++){
//         for(int j=0;j<a;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
 

// for(int i=0;i<3;i++){
//     for(int j=0;j<5;j++){
//         cout<<" * ";
//     }
//     cout<<endl;
// }

// hollow rectangle

// for(int i=0;i<3;i++){
//     if(i==0||i==2){
//         for(int j=0;j<5;j++){
//             cout<<"*";
//         }
//     }
//     else{
//         cout<<"*";
//         for(int i=1;i<4;i++){
//             cout<<" ";
//         }
//         cout<<"*";
//     }
//     cout<<endl;
    

// }

for(int i=0;i<6;i++){
    for(int j=0;j<i+1;j++){
        cout<<" * ";
    }
    cout<<endl;
}


for(int i=0;i<6;i++){
    for(int j=i;j<6;j++){
        cout<<" * ";
    }
    cout<<endl;
}


for(int i=1;i<6;i++){
    for(int j=1;j<i+1;j++){
        cout<<j;
    }
    cout<<endl;
}
for(int i=0;i<6;i++){
    for(int j=i;j<6;j++){
        cout<<j;
    }
    cout<<endl;
}




}