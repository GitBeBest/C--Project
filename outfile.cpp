#include<iostream>
#include<fstream>

int main()
{
  using namespace std;
  char automobile[50];
  int year;
  double a_price;
  double b_price;
  
  ofstream outFile;
  outFile.open("carinfo.txt");
  
  cout<<"enter the make and model of automobile: ";
  cin.getline(automobile,50);
  cout<<"enter the model year: ";
  cin>>year;
  cout<<"cout the original asking price: ";
  cin>>a_price;
  b_price = 0.913*a_price;
  
  cout<<fixed;
  cout.precision(2);
  cout.setf(ios_base::showpoint);
  cout<<"Make and model: "<<automobile<<endl;
  cout<<"year: "<<year<<endl;
  cout<<"was asking $"<<a_price<<endl;
  cout<<"Now asking $"<<b_price<<endl;

  outFile<<fixed;
  outFile.precision(2);
  outFile.setf(ios_base::showpoint);
  outFile<<"Make and model:"<<automobile<<endl;
  outFile<<"Year: "<<year<<endl;
  outFile<<"was asking $"<<a_price<<endl;
  outFile<<"Now asking $"<<b_price<<endl;
  outFile.close();
  return 0;
}
