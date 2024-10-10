
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
float miles,gal;
float tmiles=0,tgal=0,mpg,tmpg;
cout<<fixed<<showpoint;
cout<<"Enter miles driven(-1 to end):";
cin>>miles;
while(miles!=-1){
  cout<<"enter gallons used:";
  cin>>gal;
  tmiles=tmiles+miles;
  tgal=tgal+gal;
  mpg=(miles/(gal*1.0));
  tmpg=(tmiles/tgal*1.0);
  cout<<"MPG this tankful:"<<setprecision(6)<<mpg<<endl;
  cout<<"total MPG: "<<setprecision(6)<<tmpg<<endl;
  cout<<"Enter miles driven(-1 to end):";
 cin>>miles;

}



}
