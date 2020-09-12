#include<iostream>
#include<string>
using namespace std;
class Person
{
  public:
    string name;
    void PutName()
    {
      cout<<"mlk"<<endl;
    }
};
int main()
{
  Person P;
  P.name = "MLK";
  P.PutName();
  return 0;

}
