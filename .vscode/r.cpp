#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    char a;
	int t;
	cin>>t;
	while(t--)
	{
	    cin>>a;
	    if(a=='B'|| a=='b')
	    cout<<"BattleShip"<<endl;
	    if (a=='C'|| a=='c')
	    cout<<"Cruiser"<<endl;
	    if (a=='D'|| a=='d')
	    cout<<"Destroyer"<<endl;
	    if (a=='F'|| a=='f')
	    cout<<"Frigate"<<endl;
	    
	}
    return 0;
}