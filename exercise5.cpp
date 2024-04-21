#include<iostream>
using namespace std;
//declaration of  triangle ,rectangle and square functions
double areaOfTriangle(int length,int height);
int areaOfRectangle(int length,int width);
int areaOfSquare(int side);
//declaring variable
int option;
int base;
int height;
int x;
int width;
int length;
int side;

int main(){
        //the do while loop to iterate the execution
    do{
        cout<<" "<<endl;
        //cout to display option to the user to select one shape he or she want to calculate
        cout<<"please select the area of the shape you want to calculate"<<endl;
        cout<<"1.Square"<< endl;
        cout<<"2.Rectangle"<<endl;
        cout<<"3.Triangle"<<endl;
        cout<<"4.Quit the program"<<endl;
        cout<<""<<endl;
        cout<<"Enter selection :"<<endl;
        cin >>option;
        //statements tobe executed if the option is 1 
if(option == 1){
       //getting base and height from the user.
        cout<<"Enter your side "<<endl;
        cin >> side;
        
        //calling areaOfSquare function and assigning it to area.
        int area = areaOfSquare( side);
        // displaying base,height and area of the square to the console.
        cout<<"The area of square with side"" "<< side   << """is" ""<< area <<endl;
       
}
//statements tobe executed if the option is 2 
if(option==2){
        //getting input from the user for calculating rectangle
        cout<<"Enter your length "<<endl;
        cin >> length;
        cout<<"Enter your width "<<endl;
        cin>> width;
        //calling areaOfrectangle function and assigning it to area.
        int area =  areaOfRectangle(length, width);
        //displaying the the lenght ,width and area of rectangle.
        cout<<"The area of the rectangle of length"<<length <<"and width"<<width <<"is "<< area <<endl;  
}
//statements tobe executed if the option is 3
if(option==3){
        //getting input from the user.
        cout<<"Enter your base "<<endl;
        cin >> base;
        cout<<"Enter your height "<<endl;
        cin>> height;
        //calling areaOfTriangle function
        double area =areaOfTriangle( base, height);
        //displaying the length,height and  area of triangle to the console
        cout<< "The area of the triangle with length"<<length<<"and height"<<height<<"is "<<area <<endl;
}
//statement that qiut the program.
if(option == 4){
       return 0;
}
//statements that will be executed if the user entered the invalid option.
else if(option>=5){
       cout<<"You have entered invalid options, please enter the valid option"<<endl;
}
 }while(x<=5);

}
//function definition of the triangle that return  a double value area.
double areaOfTriangle(int base, int height)
{
     return 0.5 *(base * height);
}
//function definition of the rectangle that return integer value.
int areaOfRectangle(int length, int width)
{
    return length*width;
}
//function definition of the area of the square that return a double value area.
int areaOfSquare(int side)
{
    return side* side;
}
