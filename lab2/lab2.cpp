#include <iostream> 
#include <string> 
#include <fstream> 
#include <cstdlib>
using namespace std;
int main()
{
 string wam;
 double height,mass,i;	
 ifstream inFile("file.in", ios::in);
 ofstream outFile("file.out",ios::out);		
 if(!inFile)
 {
 	outFile<< "檔案無法開啟\n";
 } 
while(inFile>>height>>mass)
{ if(height==0 && mass==0)
  break;
  
  outFile<<mass/(height*height/10000)<<"\t";

  i = mass/(height*height/10000);
  if(i<15.0)
  { outFile<<"Very severely underweight"<< endl;}	
  else if(i>=15 && i<16)
  { outFile<<"severely underweight"<< endl;}	 
  else if(i>=16 && i<18.5)
  { outFile<<"underweight"<< endl;}	
  else if(i>=18.5 && i<25)
  { outFile<<"normal"<< endl;}	
  else if(i>=25 && i<30)
  { outFile<<"overweight"<< endl;}		
  else if(i>=30 && i<35)
  { outFile<<"Obese Class I"<< endl;}		
  else if(i>=35 && 1<40)
  { outFile<<"Obese Class II"<< endl;}	
  else if(i>=40)
  { outFile<<"Obese Class III"<< endl;}	
  outFile<<endl;
}
  return 0;

}


