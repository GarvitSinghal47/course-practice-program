# include<iostream>
using namespace std;
    
/*program for final keyword

*/

//once a function is declared final it cannot be overrided
class parent
{
	virtual void show() final
	{}
};
class child:parent
{
	 void show()
     {}
	
};