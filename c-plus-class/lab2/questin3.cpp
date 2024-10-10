#include<iostream>
#include<iomanip>
using namespace std;
class workh{
  public:
void display(){
float h,rate=10.0;
cout<<"enter hours worked(-1 to end):";
cin>>h;
cout<<fixed<<showpoint<<setprecision(2);
while(h!=-1){
 if(h<=40){
  cout<<"salary is $"<<(h*rate)<<endl;
 }
 if(h>40&&h!=55&&h<75){
   cout<<"salary is $"<< (40*rate)+(h-40.0)*rate*1.5 <<endl;
 }
 if(h==55){
  cout<<"salary is $"<<(h*rate)+100<<endl;
 }
 if(h>=75){
   cout<<"salary is $"<< ((40*rate)+(h-40.0)*rate*1.5)+1000.0 <<endl;

 }


 cout<<"enter hours worked(-1 to end):";
cin>>h;
}

}
};
int main(){
workh work1;
work1.display();

}
