#include<stdio.h>
#include<conio.h>
#include<iostream.h>

class frt
{
		char frtname [50];
	public :
		int frtno;
		void getfrt( int);
		void dispfrt();
} f[5],ftemp;
class veg
{
		char vegname[50];
   public:
		int vegno;
		void getveg(int);
		void dispveg();
} g[5],gtemp;

void frt:: getfrt(int i)
{
		cout<<"\nEnter the fruit name: ";
		cin>>frtname;
		cout<<"\nHow many would you like to purchase: ";
		cin>>frtno;
}

void frt:: dispfrt()
{
		cout<<"\n"<<frtname;
		cout<<"\t\t->"<<frtno;
}

void veg:: getveg(int i)
{
		cout<<"\nEnter the vegetable name: ";
		cin>>vegname;
		cout<<"\n How many would you like to purchase";
		cin>>vegno;
		getch();
}

void veg:: dispveg()
{
		cout<<"\n"<<vegname;
		cout<<"\t\t->"<<vegno;
}

void arrange(int frtn,int vegn)
{
		int i,j;
		for(i=0;i<frtn;i++)
		{
			for(j=i;j<frtn;j++)
			{
				if((f[i].frtno)<(f[i+1].frtno))
				{
					ftemp=f[i];
					f[i]=f[i+1];
					f[i+1]=ftemp;
				}
			}
		}
		for(i=0;i<vegn;i++)
		{
			for(j=i;j<vegn;j++)
			{
				if((g[i].vegno)<(g[i+1].vegno))
				{
				gtemp=g[i];
				g[i]=g[i+1];
				g[i+1]=gtemp;
				}
			}
		}

}

void main()
{
	int i,frtn,vegn;
	clrscr();
	cout<<"\nWelcome to  mall!!";
	cout<<"\n\n Fruits list";
	cout<<"\nEnter the no types of fruits you would like to purchase:\n";
	cin>>frtn;
	for(i=0;i<frtn;i++)
		f[i].getfrt(i+1);

	cout<<"\n\n Vegetables list";
	cout<<"\nEnter the no of types of vegetable you would like to purchase:\n";
	cin>>vegn;
	for(i=0;i<vegn;i++)
		g[i].getveg(i+1);

	arrange(frtn,vegn);
	cout<<"\n Bill memo";
	cout<<"\n Fruits list\n Fruits name \t Fruit amount";
	for(i=0;i<frtn;i++)
		f[i].dispfrt();
	cout<<"\nVege List\n Veg name\t Veg amt";
	for(i=0;i<vegn;i++)
		g[i].dispveg();

	 getch();
}


