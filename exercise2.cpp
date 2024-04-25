#include<iostream>
using namespace std;

int main(){
    //srand(time(0));
    //generating random numbers and assigning them to daysUntilExpiration.
    int daysUntilExpiration = 7 ;//(rand() % 10);
    //if statements for executing if  numbers between 5 and 10
   
switch( daysUntilExpiration ){
    case 1:
       if (daysUntilExpiration>=5 ){
        cout<<"Your subscription will expire soon. Renew now!";
       }
    
break;
//if statement for executing if  numbers between 1 and 5.
 case 2:
    if(daysUntilExpiration<5 ){
    if( daysUntilExpiration>1){
      cout<<"Your subscription expires in " <<  daysUntilExpiration  <<  "Renew now and save 10%!";

 }
 }
break;

    //if statement if number is equal to 1.
  case 3:
 
    if (daysUntilExpiration ==1){
    cout<<"Your subscription expires within a day! Renew now and save 20%!";
}
 
break;
// if statement for executing if number is equal to zero.
case 4: 

    if(daysUntilExpiration ==0){
    cout<<"Your subscription has expired";
}

break;
//else if statement for executing if random number is greater then 10.
case 5 :
    if(daysUntilExpiration ==0){
         cout<<"You have an active subscription.";
    
}
break;
default: return 0;
}
}

