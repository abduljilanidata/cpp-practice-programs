/* Q.If the cost price (cp) and selling price (sp) of an item is 
input through the keyboard, write a program to determine wether  	
the seller has made profite or loss , or no profit no loss
also determind how mush profit he made also loss.*/
#include <iostream>
using namespace std;
int main()
{
	int cp;
	cout<<"Enter Cost Price: ";
	cin>>cp;
	int sp;
	cout<<"Enter Selling Price: ";
	cin>>sp;
	if(cp>sp)
    cout<<"Loss is "<<cp-sp;
    else if(sp>cp)
    cout<<"Profit is "<< sp-cp;
    else  
    cout<<"No profit No loss.";
    return 0;
}
