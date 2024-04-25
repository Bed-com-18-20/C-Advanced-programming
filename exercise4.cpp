#include<iostream>
#include<string>
using namespace std;

int main(){
    int number ;
   

    do{
    cout<<"Enter an integer value between 5 and 10";
    
    cin>> number;
    if (number != number){
        cout<<"sorry, you entered an invallid number,please try again";
    }
   
     if (number<5 |number>=10){
    
        cout<<"you entered  " << number <<" please enter a number between 5 and 10.";
  
    }

     if (number>=5){
     if(number<=10){
    cout<<"Your input is ("<< number <<") has been accepted";
   
   }
     }
number++;
}while(number!=0);
}