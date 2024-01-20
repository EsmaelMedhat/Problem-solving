#include <string>
using namespace std;
string gimme_the_letters(const string& sp)
{
  string collect="";
  char letter1=sp[0];
  char letter2=sp[2];
  for(int i=int(letter1);i<=int(letter2);i++)
collect+=char(i);
  return collect;
}
