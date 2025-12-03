#include<iostream>
using namespace std;
// int suraj(int n){

    int result=2*n;
    return result;

}
int main(){
     int m=10;
     int result=suraj(m);
     cout<<result<<endl;
    return 0;
}



void printName(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"babbar"<<endl; 
    }
}

int main(){
 printName();  function call
}


2.// add two numner using pass by value
 
int add(int a, int b){
    int result = a+ b;
    return result;
}

int main(){
   
int a;
cout<<"Enter the value of a"<<endl;
cin>>a;
int b;
cout<<"eneter the value of b"<<endl;
cin>>b;
int sum= add(a,b);
cout<<"Addition result is:"<<sum<<endl;
    
}

3.find max of 3 number
int findmax(int a,int b,int c){
    if(a>b && a>c){
        return a;
    }else if (b>a && b>c){
        return b;
    }else{
        return c;

    }
    
    
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int n=findmax(a,b,c);
    cout<<n<<endl;
}

4.counting from 1 to n

 void printcounting (int n){
    for(int i=0;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
 }
int main(){
    int n;
    cout<<"enter no.";
    cin>>n; 
    printcounting(n);
    return 0;

}

5.write a function of student & grade problem
char getGrade(int marks){
    if(marks>=90)
    return 'A';
    else if(marks>=80)
    return 'B';
    else if(marks>=70)
    return 'C';
    else if(marks>=60)
    return 'D';
    else
    return 'E';
}


int main(){
    int marks;
    cout<<"endter the marks: "<<endl;
    cin>>marks;
    char finalgrade = getGrade(marks);
    cout<<finalgrade<<endl;
    return 0;


    part 2
    for(int i=1;i<=100;i++){
        char ans=getGrade(i);
        cout<<"Grade for marks="<<i<<" is "<<ans << endl;
    }
    return 0;

}

6.sum of Even no.upto n




int main(){

}