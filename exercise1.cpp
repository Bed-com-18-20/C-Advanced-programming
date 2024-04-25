#include <iostream>
#include <cstdlib>
#include<ctime>

using namespace std;

int main(){
    
    srand(time(0));
    //generating random numbers and assigning them to daysUntilExpiration.
    int daysUntilExpiration = (rand() % 10);
    //if statements for executing if  numbers between 5 and 10.
  
if( daysUntilExpiration<=10 ){
    if (daysUntilExpiration>=5){
    cout<<"Your subscription will expire soon. Renew now!";
}
}
//if statement for executing if  numbers between 1 and 5.
 if(daysUntilExpiration<5 ){
    if( daysUntilExpiration>1){
      cout<<"Your subscription expires in " <<  daysUntilExpiration  <<  "Renew now and save 10%!";
}
}
    //if statement if number is equal to 1.
  if (daysUntilExpiration ==1)
 {
    cout<<"Your subscription expires within a day! Renew now and save 20%!";
}
// if statement for executing if number is equal to zero.
else if(daysUntilExpiration ==0)
{
    cout<<"Your subscription has expired";
}
//else if statement for executing if random number is greater then 10.
else if(daysUntilExpiration>=10){
    cout<<"You have an active subscription.";
}
}