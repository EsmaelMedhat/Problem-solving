#include<bits/stdc++.h>

using namespace std;
//Implement the class Box
class Box {
int  l,b,h;
  public:
 Box(){
 l=0;h=0;b=0;
      }
 Box(int length, int breadth, int height){
l=length;h=height;b=breadth;
 }
Box(Box  &ob){
 l=ob.l;
 h=ob.h;
b=ob.b;
}
  int getLength() {return l;}

   int getBreadth()  {return b;}
   int getHeight() {return h;}
   long long CalculateVolume() {
      long long Volume=(long long)l*h*b;
     return Volume;
   }
bool operator <(Box ob){
bool case1=l<ob.l;
bool case2=b<ob.b&&l==ob.l;
bool case3=h<ob.h&&b==ob.b&&l==ob.l;
if(case1||case2||case3)
return true;

return false;
}
friend ostream&operator <<(ostream & output,Box ob)
{
output<<ob.l<<" "<<ob.b<<" "<<ob.h;
return output;
}


};
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions :

// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
