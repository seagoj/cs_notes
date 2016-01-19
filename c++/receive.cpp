//Jeremy Seago
//receive grades

#include<iostream.h>
#include<fstream.h>
#include<stdlib.h>


void main()
{
	double average;
	int which;
	int yorn;
	double your=0;
	double poss=0;
	do
	{
		ifstream pointer;
	    cout<<"What class would you like to see the average of?"<<endl;
		cout<<" 1) Class 1"<<endl;
		cout<<" 2) Class 2"<<endl;
		cout<<" 3) Class 3"<<endl;
		cout<<" 4) Class 4"<<endl;
		cout<<" 5) Class 5"<<endl;
		cout<<" 6) Class 6"<<endl;
		cout<<" 7) Class 7"<<endl;
		cout<<" 8) Class 8"<<endl;
		cout<<" 9) Class 9"<<endl;
		cout<<"10) Class 10"<<endl;
		cin>>which;
		switch(which)
		{
			case 1:
				pointer.open("a:\\class1\\my.dat", ios::in);
				break;
			case 2:
				pointer.open("a:\\class2\\my.dat", ios::in);
				break;
			case 3:
				pointer.open("a:\\class3\\my.dat", ios::in);
				break;
			case 4:
				pointer.open("a:\\class4\\my.dat", ios::in);
				break;
			case 5:
				pointer.open("a:\\class5\\my.dat", ios::in);
				break;
			case 6:
				pointer.open("a:\\class6\\my.dat", ios::in);
				break;
			case 7:
				pointer.open("a:\\class7\\my.dat", ios::in);
				break;
			case 8:
				pointer.open("a:\\class8\\my.dat", ios::in);
				break;
			case 9:
				pointer.open("a:\\class9\\my.dat", ios::in);
				break;
			case 10:
				pointer.open("a:\\class10\\my.dat", ios::in);
				break;
		}
		if(!pointer.fail())
		{
			double total;
			total=0;
			do
			{
				pointer>>total;
				your=your+total;
			}while(!pointer.eof());
			your=your-total;
			cout<<"My points "<<your<<endl;
			pointer.close();
			total=0;
			switch(which)
			{
				case 1:
					pointer.open("a:\\class1\\poss.dat", ios::in);
					break;
				case 2:
					pointer.open("a:\\class2\\poss.dat", ios::in);
					break;
				case 3:
					pointer.open("a:\\class3\\poss.dat", ios::in);
					break;
				case 4:
					pointer.open("a:\\class4\\poss.dat", ios::in);
					break;
				case 5:
					pointer.open("a:\\class5\\poss.dat", ios::in);
					break;
				case 6:
					pointer.open("a:\\class6\\poss.dat", ios::in);
					break;
				case 7:
					pointer.open("a:\\class7\\poss.dat", ios::in);
					break;
				case 8:
					pointer.open("a:\\class8\\poss.dat", ios::in);
					break;
				case 9:
					pointer.open("a:\\class9\\poss.dat", ios::in);
					break;
				case 10:
					pointer.open("a:\\class10\\poss.dat", ios::in);
					break;
			}
			if(!pointer.fail())
			{
				total=0;
				do
				{
					pointer>>total;
					poss=poss+total;
				}while(!pointer.eof());
				poss=poss-total;
				average=100*(your/poss);
				cout<<"Total points: "<<poss<<endl;
				cout<<"Your average for this class is "<<average<<"%."<<endl;
				system("pause");
			}
			else
			{
				cout<<"This file cannot be opened"<<endl;
				return;
			}
		}
		else
		{
			cout<<"This file cannot be opened."<<endl;
			return;
		}
		pointer.close();
		cout<<"Would you like to see the average of another class? yes(1) no(2)"<<endl;
		cin>>yorn;
	}while(yorn==1);
}
