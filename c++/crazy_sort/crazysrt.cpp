//Jeremy Seago
//CSC 160

#include<iostream.h>
#include<conio.h>

void swap(int&, int&);
int getList(int[]);
void original(int[], int);
void highLow(int[], int);
void lowHigh(int[], int);
void average(int[], int);

void swap(int& a, int& b)
{
	int temp=0;
	temp=a;
	a=b;
	b=temp;
}

int getList(int list[])
{
	int length=0;

	cout<<"How many numbers do you have?"<<endl;
	cin>>length;
   clrscr();
	for(int i=0; i<length; i++)
	{
		if(i==length-1)
			cout<<"What is the last number?"<<endl;
		else
		{
			switch(i)
			{
				case 0:
					cout<<"What is the first number?"<<endl;
					break;
				default:
					cout<<"What is the next number?"<<endl;
					break;
			}
		}
		cin>>list[i];
		clrscr();
	}
	return length;
}

void original(int list[], int length)
{
	cout<<"Original: ";
	for(int i=0; i<length; i++)
	{
		if(i==length-1)
			cout<<list[i]<<endl<<endl;
		else
			cout<<list[i]<<", ";
	}
}

void highLow(int list[], int length)
{
	cout<<"High to Low: ";
	for(int sortNumber=0; sortNumber<length; sortNumber++)
	{
		for(int checkNumber=sortNumber; checkNumber<length; checkNumber++)
		{
			if(list[sortNumber]<list[checkNumber])
				swap(list[sortNumber], list[checkNumber]);
		}
		if(sortNumber==(length-1))
			cout<<list[sortNumber]<<endl<<endl;
		else
			cout<<list[sortNumber]<<", ";
	}
}

void lowHigh(int list[], int length)
{
	cout<<"Low to High: ";
	for(int sortNumber=0; sortNumber<length; sortNumber++)
	{
		for(int checkNumber=sortNumber; checkNumber<length; checkNumber++)
		{
			if(list[sortNumber]>list[checkNumber])
				swap(list[sortNumber], list[checkNumber]);
		}
		if(sortNumber==(length-1))
			cout<<list[sortNumber]<<endl<<endl;
		else
			cout<<list[sortNumber]<<", ";
	}
}

void average(int list[], int length)
{
	int sum=0;
	double average=0.0;

	cout<<"Average: ";
	for(int i=0; i<length; i++)
	{
		sum=sum+list[i];
	}
	average=(sum/length);
	cout<<average<<endl<<endl;
}
void main()
{
	int list[150], length=0, yn=0;

	do
	{
		length=getList(list);
		original(list, length);
		highLow(list, length);
		lowHigh(list, length);
		average(list, length);
		cout<<"Would you like to sort another list? Yes(1) or No(2)"<<endl;
		cin>>yn;
		clrscr();
	}while(yn==1);

}






