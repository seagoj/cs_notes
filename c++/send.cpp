//Jeremy Seago
//send grades

#include<iostream.h>
#include<fstream.h>
#include<stdlib.h>


void main()
{
	double possible;
	int which;
	int yn;
	double my;
	do
	{
		ofstream pointer;
	    cout<<"What class do you have a new grade for?"<<endl;
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
	    system("cls");
		switch(which)
		{
		case 1:
			pointer.open("a:\\class1\\my.dat", ios::app);
			if(!pointer.fail())
			{
				cout<<"How many points did you get?"<<endl;
			    cin>>my;
			    pointer<<my<<endl;
			    pointer.close();
			}
			else
			{
		        cout<<"This file cannot be opened"<<endl;
		        return;
			}
			pointer.open("a:\\class1\\poss.dat", ios::app);
			if(!pointer.fail())
			{
				cout<<"How many points possible were there?"<<endl;
			    cin>>possible;
			    pointer<<possible<<endl;
			    pointer.close();
			}
		    else
			{
	 	        cout<<"This file cannot be opened"<<endl;
		        return;
			}
			break;
	    case 2:
		    pointer.open("a:\\class2\\my.dat", ios::app);
			if(!pointer.fail())
			{
				cout<<"How many points did you get?"<<endl;
			    cin>>my;
			    pointer<<my<<endl;
				pointer.close();
			}
			else
			{
		        cout<<"This file cannot be opened"<<endl;
		        return;
			}
			pointer.open("a:\\class2\\poss.dat", ios::app);
			if(!pointer.fail())
			{
				cout<<"How many points possible were there?"<<endl;
			    cin>>possible;
			    pointer<<possible<<endl;
			    pointer.close();
			}
			else
			{
		        cout<<"This file cannot be opened"<<endl;
		        return;
			}
			break;
	    case 3:
		    pointer.open("a:\\class3\\my.dat", ios::app);
			if(!pointer.fail())
			{
				cout<<"How many points did you get?"<<endl;
			    cin>>my;
			    pointer<<my<<endl;
			    pointer.close();
			}
			else
			{
		        cout<<"This file cannot be opened"<<endl;
		        return;
			}
			pointer.open("a:\\class3\\poss.dat", ios::app);
			if(!pointer.fail())
			{
				cout<<"How many points possible were there?"<<endl;
			    cin>>possible;
			    pointer<<possible<<endl;
			    pointer.close();
			}
			else
			{
		        cout<<"This file cannot be opened"<<endl;
		        return;
			}
			break;
	    case 4:
		    pointer.open("a:\\class4\\my.dat", ios::app);
            if(!pointer.fail())
			{
				cout<<"How many points did you get?"<<endl;
			    cin>>my;
			    pointer<<my<<endl;
			    pointer.close();
			}
			else
			{
		        cout<<"This file cannot be opened"<<endl;
		        return;
			}
			pointer.open("a:\\class4\\poss.dat", ios::app);
			if(!pointer.fail())
			{
				cout<<"How many points possible were there?"<<endl;
			    cin>>possible;
			    pointer<<possible<<endl;
				pointer.close();
			}
			else
			{
		        cout<<"This file cannot be opened"<<endl;
		        return;
			}
			break;
	    case 5:
		    pointer.open("a:\\class5\\my.dat", ios::app);
			if(!pointer.fail())
			{
				cout<<"How many points did you get?"<<endl;
			    cin>>my;
			    pointer<<my<<endl;
				pointer.close();
			}
			else
			{
		        cout<<"This file cannot be opened"<<endl;
		        return;
			}
			pointer.open("a:\\class5\\poss.dat", ios::app);
			if(!pointer.fail())
			{
				cout<<"How many points possible were there?"<<endl;
			    cin>>possible;
			    pointer<<possible<<endl;
				pointer.close();
			}
			else
			{
		        cout<<"This file cannot be opened"<<endl;
		        return;
			}
			break;
	    case 6:
		    pointer.open("a:\\class6\\my.dat", ios::app);
			if(!pointer.fail())
			{
				cout<<"How many points did you get?"<<endl;
			    cin>>my;
			    pointer<<my<<endl;
				pointer.close();
			}
			else
			{
		        cout<<"This file cannot be opened"<<endl;
		        return;
			}
			pointer.open("a:\\class6\\poss.dat", ios::app);
            if(!pointer.fail())
			{
				cout<<"How many points possible were there?"<<endl;
			    cin>>possible;
			    pointer<<possible<<endl;
				pointer.close();
			}
		    else
			{
		        cout<<"This file cannot be opened"<<endl;
		        return;
			}
			break;
		case 7:
		    pointer.open("a:\\class7\\my.dat", ios::app);
			if(!pointer.fail())
			{
				cout<<"How many points did you get?"<<endl;
			    cin>>my;
			    pointer<<my<<endl;
				pointer.close();
			}
			else
			{
		        cout<<"This file cannot be opened"<<endl;
		        return;
			}
			pointer.open("a:\\class7\\poss.dat", ios::app);
            if(!pointer.fail())
			{
				cout<<"How many points possible were there?"<<endl;
			    cin>>possible;
			    pointer<<possible<<endl;
				pointer.close();
			}
		    else
			{
		        cout<<"This file cannot be opened"<<endl;
		        return;
			}
			break;
		case 8:
		    pointer.open("a:\\class8\\my.dat", ios::app);
			if(!pointer.fail())
			{
				cout<<"How many points did you get?"<<endl;
			    cin>>my;
			    pointer<<my<<endl;
				pointer.close();
			}
			else
			{
		        cout<<"This file cannot be opened"<<endl;
		        return;
			}
			pointer.open("a:\\class8\\poss.dat", ios::app);
            if(!pointer.fail())
			{
				cout<<"How many points possible were there?"<<endl;
			    cin>>possible;
			    pointer<<possible<<endl;
				pointer.close();
			}
		    else
			{
		        cout<<"This file cannot be opened"<<endl;
		        return;
			}
			break;
		case 9:
		    pointer.open("a:\\class9\\my.dat", ios::app);
			if(!pointer.fail())
			{
				cout<<"How many points did you get?"<<endl;
			    cin>>my;
			    pointer<<my<<endl;
				pointer.close();
			}
			else
			{
		        cout<<"This file cannot be opened"<<endl;
		        return;
			}
			pointer.open("a:\\class9\\poss.dat", ios::app);
            if(!pointer.fail())
			{
				cout<<"How many points possible were there?"<<endl;
			    cin>>possible;
			    pointer<<possible<<endl;
				pointer.close();
			}
		    else
			{
		        cout<<"This file cannot be opened"<<endl;
		        return;
			}
			break;
		case 10:
		    pointer.open("a:\\class10\\my.dat", ios::app);
			if(!pointer.fail())
			{
				cout<<"How many points did you get?"<<endl;
			    cin>>my;
			    pointer<<my<<endl;
				pointer.close();
			}
			else
			{
		        cout<<"This file cannot be opened"<<endl;
		        return;
			}
			pointer.open("a:\\class10\\poss.dat", ios::app);
            if(!pointer.fail())
			{
				cout<<"How many points possible were there?"<<endl;
			    cin>>possible;
			    pointer<<possible<<endl;
				pointer.close();
			}
		    else
			{
		        cout<<"This file cannot be opened"<<endl;
		        return;
			}
			break;
		}
	cout<<"Do you have another grade? 1=yes 2=no"<<endl;
	cin>>yn;
	}while(yn==1);
}
	










