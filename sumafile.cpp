#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

const int SIZE = 60;
int main()
{
  char filename[SIZE];
  ifstream inFile;

  cout<<"Enter name fo data file:";
  cin.getline(filename,SIZE);
  inFile.open(filename);
  if(!inFile.is_open())
    {
      cout<<"Could not open the file"<<filename<<endl;
      cout<<"Program terminating.\n";
      exit(EXIT_FAILURE);
    }
  double value;
  double sum = 0.0;
  int count = 0;
  inFile>>value;
  while(inFile.good())
    {
	cout<<value<<endl;
      ++count;
      sum += value;
      inFile>>value;
    }

  if(inFile.eof())
    cout<<"End of file reached.\n";
  else if(inFile.fail())
    cout<<"Input terminated by data mismatch.\n";
  else
    cout<<"input terminated for unknown reason.\n";
  
  if(count == 0)
    cout<<"No data processed.\n";
  else
    {
      cout<<"Item read:"<<count<<endl;
      cout<<"sum:"<<sum<<endl;
      cout<<"Average:"<<sum/count<<endl;
    }

  inFile.close();
  return 0;
}
