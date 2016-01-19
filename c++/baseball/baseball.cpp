//Jeremy Seago

#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

void display(int);
int rank();
void winner(int);
int atbat(int);
void score(int);

struct TOne
{
	int one;
	int two;
	int three;
	int four;
	int five;
	int six;
	int seven;
	int eight;
	int nine;
	int ten;
	int runs;
	int hits;
	int errors;
	int rank;
};

struct TTwo
{
	int one;
	int two;
	int three;
	int four;
	int five;
	int six;
	int seven;
	int eight;
	int nine;
	int ten;
	int runs;
	int hits;
	int errors;
	int rank;
};

TOne one;
TTwo two;

void display(int inning)
{
	switch(inning)
	{
	case 0:
		cout<<"-------------------------------------------------------------"<<endl;
		cout<<"|        | 1   2   3   4   5   6   7   8   9  10| R | H | E |"<<endl;
		cout<<"|-----------------------------------------------------------|"<<endl;
		cout<<"|  Away  |                                      | "<<one.runs<<" | "<<one.hits<<" | "<<one.errors<<" |"<<endl;
		cout<<"|---------------------------------------------------|---|---|"<<endl;
		cout<<"|  Home  |                                      | "<<two.runs<<" | "<<two.hits<<" | "<<two.errors<<" |"<<endl;
		cout<<"-------------------------------------------------------------"<<endl;
		break;
	case 1:
		cout<<"----------------------------------------------------"<<endl;
		cout<<"|       | 1  2  3  4  5  6  7  8  9 10 | R | H | E |"<<endl;
		cout<<"|--------------------------------------------------|"<<endl;
		cout<<"|  Away | "<<one.one<<"                            | "<<one.runs<<" | "<<one.hits<<" | "<<one.errors<<" |"<<endl;		
		cout<<"|--------------------------------------------------|"<<endl;
		cout<<"|  Home | "<<two.one<<"                            | "<<two.runs<<" | "<<two.hits<<" | "<<two.errors<<" |"<<endl;		
		cout<<"----------------------------------------------------"<<endl;
		break;
	case 2:
		cout<<"----------------------------------------------------"<<endl;
		cout<<"|       | 1  2  3  4  5  6  7  8  9 10 | R | H | E |"<<endl;
		cout<<"|--------------------------------------------------|"<<endl;
		cout<<"|  Away  | "<<one.one<<"  "<<one.two<<"                        | "<<one.runs<<" | "<<one.hits<<" | "<<one.errors<<" |"<<endl;
		cout<<"|------------------------------------------|---|---|"<<endl;
		cout<<"|  Home  | "<<two.one<<"  "<<two.two<<"                        | "<<two.runs<<" | "<<two.hits<<" | "<<two.errors<<" |"<<endl;		
		cout<<"----------------------------------------------------"<<endl;
		break;
	case 3:
		cout<<"----------------------------------------------------"<<endl;
		cout<<"|       | 1  2  3  4  5  6  7  8  9 10 | R | H | E |"<<endl;
		cout<<"|--------------------------------------------------|"<<endl;
		cout<<"|  Away  | "<<one.one<<"  "<<one.two<<"  "<<one.three<<"                     | "<<one.runs<<" | "<<one.hits<<" | "<<one.errors<<" |"<<endl;
		cout<<"|------------------------------------------|---|---|"<<endl;
		cout<<"|  Home  | "<<two.one<<"  "<<two.two<<"  "<<two.three<<"                     | "<<two.runs<<" | "<<two.hits<<" | "<<two.errors<<" |"<<endl;		 
		cout<<"----------------------------------------------------"<<endl;
		break;
	case 4:
		cout<<"----------------------------------------------------"<<endl;
		cout<<"|       | 1  2  3  4  5  6  7  8  9 10 | R | H | E |"<<endl;
		cout<<"|--------------------------------------------------|"<<endl;
		cout<<"|  Away  | "<<one.one<<"  "<<one.two<<"  "<<one.three<<"  "<<one.four<<"                  | "<<one.runs<<" | "<<one.hits<<" | "<<one.errors<<" |"<<endl;
		cout<<"|------------------------------------------|---|---|"<<endl;
		cout<<"|  Home  | "<<two.one<<"  "<<two.two<<"  "<<two.three<<"  "<<two.four<<"                  | "<<two.runs<<" | "<<two.hits<<" | "<<two.errors<<" |"<<endl;		
		cout<<"----------------------------------------------------"<<endl;
		break;
	case 5:
		cout<<"----------------------------------------------------"<<endl;
		cout<<"|       | 1  2  3  4  5  6  7  8  9 10 | R | H | E |"<<endl;
		cout<<"|--------------------------------------------------|"<<endl;
		cout<<"|  Away  | "<<one.one<<"  "<<one.two<<"  "<<one.three<<"  "<<one.four<<"  "<<one.five<<"               | "<<one.runs<<" | "<<one.hits<<" | "<<one.errors<<" |"<<endl;
		cout<<"|------------------------------------------|---|---|"<<endl;
		cout<<"|  Home  | "<<two.one<<"  "<<two.two<<"  "<<two.three<<"  "<<two.four<<"  "<<two.five<<"               | "<<two.runs<<" | "<<two.hits<<" | "<<two.errors<<" |"<<endl;		
		cout<<"----------------------------------------------------"<<endl;
		break;
	case 6:
		cout<<"----------------------------------------------------"<<endl;
		cout<<"|       | 1  2  3  4  5  6  7  8  9 10 | R | H | E |"<<endl;
		cout<<"|--------------------------------------------------|"<<endl;
		cout<<"|  Away  | "<<one.one<<"  "<<one.two<<"  "<<one.three<<"  "<<one.four<<"  "<<one.five<<"  "<<one.six<<"            | "<<one.runs<<" | "<<one.hits<<" | "<<one.errors<<" |"<<endl;
		cout<<"|------------------------------------------|---|---|"<<endl;
		cout<<"|  Home  | "<<two.one<<"  "<<two.two<<"  "<<two.three<<"  "<<two.four<<"  "<<two.five<<"  "<<two.six<<"            | "<<two.runs<<" | "<<two.hits<<" | "<<two.errors<<" |"<<endl;		
		cout<<"----------------------------------------------------"<<endl;
		break;
	case 7:
		cout<<"----------------------------------------------------"<<endl;
		cout<<"|       | 1  2  3  4  5  6  7  8  9 10 | R | H | E |"<<endl;
		cout<<"|--------------------------------------------------|"<<endl;
		cout<<"|  Away  | "<<one.one<<"  "<<one.two<<"  "<<one.three<<"  "<<one.four<<"  "<<one.five<<"  "<<one.six<<"  "<<one.seven<<"         | "<<one.runs<<" | "<<one.hits<<" | "<<one.errors<<" |"<<endl;
		cout<<"|------------------------------------------|---|---|"<<endl;
		cout<<"|  Home  | "<<two.one<<"  "<<two.two<<"  "<<two.three<<"  "<<two.four<<"  "<<two.five<<"  "<<two.six<<"  "<<two.seven<<"         | "<<two.runs<<" | "<<two.hits<<" | "<<two.errors<<" |"<<endl;		
		cout<<"----------------------------------------------------"<<endl;
		break;
	case 8:
		cout<<"----------------------------------------------------"<<endl;
		cout<<"|       | 1  2  3  4  5  6  7  8  9 10 | R | H | E |"<<endl;
		cout<<"|--------------------------------------------------|"<<endl;
		cout<<"|  Away  | "<<one.one<<"  "<<one.two<<"  "<<one.three<<"  "<<one.four<<"  "<<one.five<<"  "<<one.six<<"  "<<one.seven<<"  "<<one.eight<<"      | "<<one.runs<<" | "<<one.hits<<" | "<<one.errors<<" |"<<endl;
		cout<<"|------------------------------------------|---|---|"<<endl;
		cout<<"|  Home  | "<<two.one<<"  "<<two.two<<"  "<<two.three<<"  "<<two.four<<"  "<<two.five<<"  "<<two.six<<"  "<<two.seven<<"  "<<two.eight<<"      | "<<two.runs<<" | "<<two.hits<<" | "<<two.errors<<" |"<<endl;		
		cout<<"----------------------------------------------------"<<endl;
		break;
	case 9:
		cout<<"----------------------------------------------------"<<endl;
		cout<<"|       | 1  2  3  4  5  6  7  8  9 10 | R | H | E |"<<endl;
		cout<<"|--------------------------------------------------|"<<endl;
		cout<<"|  Away  | "<<one.one<<"  "<<one.two<<"  "<<one.three<<"  "<<one.four<<"  "<<one.five<<"  "<<one.six<<"  "<<one.seven<<"  "<<one.eight<<"  "<<one.nine<<"   | "<<one.runs<<" | "<<one.hits<<" | "<<one.errors<<" |"<<endl;
		cout<<"|------------------------------------------|---|---|"<<endl;
		cout<<"|  Home  | "<<two.one<<"  "<<two.two<<"  "<<two.three<<"  "<<two.four<<"  "<<two.five<<"  "<<two.six<<"  "<<two.seven<<"  "<<two.eight<<"  "<<two.nine<<"   | "<<two.runs<<" | "<<two.hits<<" | "<<two.errors<<" |"<<endl;		
		cout<<"----------------------------------------------------"<<endl;
		break;
	case 10:
		cout<<"----------------------------------------------------"<<endl;
		cout<<"|       | 1  2  3  4  5  6  7  8  9 10 | R | H | E |"<<endl;
		cout<<"|--------------------------------------------------|"<<endl;
		cout<<"|  Away  | "<<one.one<<"  "<<one.two<<"  "<<one.three<<"  "<<one.four<<"  "<<one.five<<"  "<<one.six<<"  "<<one.seven<<"  "<<one.eight<<"  "<<one.nine<<"  "<<one.ten<<"  "<<one.runs<<"  "<<one.hits<<"  "<<one.errors<<" "<<endl;
		cout<<"|------------------------------------------|---|---|"<<endl;
		cout<<"|  Home  | "<<two.one<<"  "<<two.two<<"  "<<two.three<<"  "<<two.four<<"  "<<two.five<<"  "<<two.six<<"  "<<two.seven<<"  "<<two.eight<<"  "<<two.nine<<"  "<<two.ten<<"  "<<two .runs<<"   "<<two.hits<<"  "<<two.errors<<" "<<endl;
		cout<<"----------------------------------------------------"<<endl;
		break;
	}
}

int rank()
{
	int league;
	int division;
	int team;
	int rank;

	cout<<"Which League would you like to pick a team from?"<<endl;
	cout<<"1) American"<<endl;
	cout<<"2) National"<<endl;
	cin>>league;
	cout<<"Which Division would you like to pick a team from?"<<endl;
    cout<<"1) West"<<endl;
	cout<<"2) Central"<<endl;
	cout<<"3) East"<<endl;
	cout<<"4) Allstars"<<endl;
	cin>>division;
	if(league==1&&division==1)
	{
		cout<<"Which team would you like to play with?"<<endl;
		cout<<"1) Seattle Mariners"<<endl;
		cout<<"2) Oakland Athletics"<<endl;
		cout<<"3) Anaheim Angels"<<endl;
		cout<<"4) Texas Rangers"<<endl;
		cin>>team;
		switch(team)
		{
			case 1:
			    rank=5;
			    break;
		    case 2:
			    rank=8;
			    break;
		    case 3:
				rank=12;
			    break;
		    case 4:
			    rank=21;
			    break;
		}
	}
	if(league==1&&division==2)
	{
		cout<<"Which team would you like to play with?"<<endl;
		cout<<"1) Chicago White Sox"<<endl;
		cout<<"2) Clevland Indians"<<endl;
		cout<<"3) Detroit Tigers"<<endl;
		cout<<"4) Kansas City Royals"<<endl;
		cout<<"5) Minnesota Twins"<<endl;
				
		cin>>team;
		switch(team)
		{
		case 1:
			rank=1;
			break;
		case 2:
			rank=9;
			break;
		case 3:
			rank=15;
			break;
		case 4:
			rank=17;
			break;
		case 5:
			rank=23;
			break;
		}
	}
	if(league==1&&division==3)
	{
		cout<<"Which team would you like to play with?"<<endl;
		cout<<"1) New York Yankees"<<endl;
		cout<<"2) Boston Red Sox"<<endl;
		cout<<"3) Toronto Blue Jays"<<endl;
		cout<<"4) Baltimore Orioles"<<endl;
		cout<<"5) Tampa Bay Devil Rays"<<endl;
		cout<<"6) Philadelphia Phillies"<<endl;
		cin>>team;
		switch(team)
		{
		case 1:
			rank=2;
			break;
		case 2:
			rank=7;
			break;
		case 3:
			rank=11;
			break;
		case 4:
			rank=22;
			break;
		case 5:
			rank=24;
			break;
		case 6:
			rank=27;
			break;
		}
	}
	if(league==1&&division==4)
	{
		rank=33;
	}
	if(league==2&&division==1)
	{
		cout<<"Which team is the home team?"<<endl;
		cout<<"1) San Francisco Giants"<<endl;
		cout<<"2) Arizona Diamondbacks"<<endl;
		cout<<"3) Los Angeles Dodgers"<<endl;
		cout<<"4) Colorado Rockies"<<endl;
		cout<<"5) San Diego Padres"<<endl;
		cin>>team;
		switch(team)
		{
		case 1:
			rank=6;
			break;
		case 2:
			rank=13;
			break;
		case 3:
			rank=14;
			break;
		case 4:
			rank=16;
			break;
        case 5:
			rank=19;
			break;
		}
	}
	if(league==2&&division==2)
	{
		cout<<"Which team is the home team?"<<endl;
		cout<<"1) St. Louis Cardinals"<<endl;
		cout<<"2) Cincinnati Reds"<<endl;
		cout<<"3) Milwaukee Brewers"<<endl;
		cout<<"4) Chicago Cubs"<<endl;
		cout<<"5) Houston Astros"<<endl;
		cout<<"6) Pittsburgh Pirates"<<endl;
		cin>>team;
		switch(team)
		{
		case 1:
			rank=10;
			break;
		case 2:
			rank=18;
			break;
		case 3:
			rank=25;
			break;
		case 4:
			rank=26;
			break;
		case 5:
			rank=29;
			break;
		case 6:
			rank=30;
			break;
		}
	}
	if(league==2&&division==3)
	{
		cout<<"Which team is the home team?"<<endl;
		cout<<"1) Atlanta Braves"<<endl;
		cout<<"2) New York Mets"<<endl;
		cout<<"3) Florida Marlins"<<endl;
		cout<<"4) Montreal Expos"<<endl;
		cin>>team;
		switch(team)
		{
		case 1:
			rank=3;
			break;
		case 2:
			rank=4;
			break;
		case 3:
			rank=20;
			break;
		case 4:
			rank=28;
			break;
		}
	}
	if(league==2&&division==4)
	{
		rank=34;
	}	
	return rank;
}



void winner(int wrank)
{
	switch(wrank)
	{
		case 1:
		    cout<<"The winning team is the Chicago White Sox."<<endl;
		    break;
	        case 2:
		    cout<<"The winning team is the New York Yankees."<<endl;
			break;
		case 3:
			cout<<"The winning team is the Atlanta Braves."<<endl;
			break;
		case 4:
			cout<<"The winning team is the New York Mets."<<endl;
			break;
		case 5:
			cout<<"The winning team is the Seattle Mariners."<<endl;
			break;
		case 6:
			cout<<"The winning team is the San Francisco Giants."<<endl;
			break;
		case 7:
			cout<<"The winning team is the Boston Red Sox."<<endl;
			break;
		case 8:
			cout<<"The winning team is the Oakland Athletics."<<endl;
			break;
		case 9:
			cout<<"The winning team is the Clevland Indians."<<endl;
			break;
		case 10:
			cout<<"The winning team is the St. Louis Cardinals."<<endl;
			break;
		case 11:
			cout<<"The winning team is the Toronto Blue Jays"<<endl;
			break;
		case 12:
			cout<<"The winning team is the Anaheim Angels."<<endl;
			break;
		case 13:
			cout<<"The winning team is the Arizona Diamondbacks."<<endl;
			break;
		case 14:
			cout<<"The winning team is the Los Angeles Dodgers."<<endl;
			break;
		case 15:
			cout<<"The winning team is the Detroit Tigers."<<endl;
			break;
		case 16:
			cout<<"The winning team is the Colorado Rockies."<<endl;
			break;
		case 17:
			cout<<"The winning team is the Kansas City Royals."<<endl;
			break;
		case 18:
			cout<<"The winning team is the cincinnati Reds."<<endl;
			break;
		case 19:
			cout<<"The winning team is the San Diego Padres."<<endl;
			break;
		case 20:
			cout<<"The winning team is the Florida Marlins."<<endl;
			break;
		case 21:
			cout<<"The winning team is the Texas Rangers."<<endl;
			break;
		case 22:
			cout<<"The winning team is the Baltimore Orioles."<<endl;
			break;
		case 23:
			cout<<"The winning team is the Minnesota Twins."<<endl;
			break;
		case 24:
			cout<<"The winning team is the Tampa Bay Devil Rays."<<endl;
			break;
		case 25:
			cout<<"The winning team is the Milwaukee Brewers."<<endl;
			break;
		case 26:
			cout<<"The winning team is the Chicago Cubs."<<endl;
			break;
		case 27:
			cout<<"The winning team is the Philadelphia Phillies."<<endl;
			break;
		case 28:
			cout<<"The winning team is the Montreal Expos."<<endl;
			break;
		case 29:
			cout<<"The winning team is the Houston Astros."<<endl;
			break;
		case 30:
			cout<<"The winning team is the Pittsburgh Pirates."<<endl;
			break;
		case 31:
			cout<<"The winning team is the Gillespie Miners."<<endl;
			break;
		case 32:
			cout<<"The winning team is the Carlinville Cavaliers."<<endl;
			break;
		case 33:
			cout<<"The winning team is the National League Allstars."<<endl;
			break;
		case 34:
			cout<<"The winning team is the American League Allstars."<<endl;
	}
}

int atbat(int rank)
{
	int AB=0;
	int randNum;
	
		
	randNum=1+rand()%1000-1;
	switch(rank)
	{
	case 1:
		if(randNum>0&&randNum<=110)
			AB=1;
		if(randNum>110&&randNum<=220)
			AB=2;
		if(randNum>220&&randNum<=390)
			AB=3;
		if(randNum>390&&randNum<=460)
			AB=4;
		if(randNum>460&&randNum<=530)
			AB=5;
		if(randNum>530&&randNum<=648)
			AB=6;
		if(randNum>648&&randNum<=766)
			AB=7;
		if(randNum>766&&randNum<=884)
			AB=8;
		if(randNum>884&&randNum<=1000)
			AB=9;
		break;
	case 2:
		if(randNum>0&&randNum<=110)
			AB=1;
		if(randNum>110&&randNum<=220)
			AB=2;
		if(randNum>220&&randNum<=395)
			AB=3;
		if(randNum>390&&randNum<=458)
			AB=4;
		if(randNum>458&&randNum<=530)
			AB=5;
		if(randNum>530&&randNum<=648)
			AB=6;
		if(randNum>648&&randNum<=766)
			AB=7;
		if(randNum>766&&randNum<=884)
			AB=8;
		if(randNum>884&&randNum<=1000)
			AB=9;
		break;
	case 3:
		if(randNum>0&&randNum<=135)
			AB=1;
		if(randNum>135&&randNum<=270)
			AB=2;
		if(randNum>270&&randNum<=405)
			AB=3;
		if(randNum>405&&randNum<=470)
			AB=4;
		if(randNum>470&&randNum<=540)
			AB=5;
		if(randNum>540&&randNum<=655)
			AB=6;
		if(randNum>655&&randNum<=770)
			AB=7;
		if(randNum>770&&randNum<=885)
			AB=8;
		if(randNum>885&&randNum<=1000)
			AB=9;
		break;
	case 4:
		if(randNum>0&&randNum<=137)
			AB=1;
		if(randNum>137&&randNum<=274)
			AB=2;
		if(randNum>274&&randNum<=410)
			AB=3;
		if(randNum>410&&randNum<=475)
			AB=4;
		if(randNum>475&&randNum<=540)
			AB=5;
		if(randNum>540&&randNum<=655)
			AB=6;
		if(randNum>655&&randNum<=770)
			AB=7;
		if(randNum>770&&randNum<=885)
			AB=8;
		if(randNum>885&&randNum<=1000)
			AB=9;
		break;
	case 5:
		if(randNum>0&&randNum<=140)
			AB=1;
		if(randNum>140&&randNum<=280)
			AB=2;
		if(randNum>280&&randNum<=420)
			AB=3;
		if(randNum>420&&randNum<=485)
			AB=4;
		if(randNum>485&&randNum<=550)
			AB=5;
		if(randNum>550&&randNum<=663)
			AB=6;
		if(randNum>663&&randNum<=776)
			AB=7;
		if(randNum>776&&randNum<=889)
			AB=8;
		if(randNum>889&&randNum<=1000)
			AB=9;
		break;
	case 6:
		if(randNum>0&&randNum<=142)
			AB=1;
		if(randNum>142&&randNum<=284)
			AB=2;
		if(randNum>284&&randNum<=425)
			AB=3;
		if(randNum>425&&randNum<=488)
			AB=4;
		if(randNum>488&&randNum<=550)
			AB=5;
		if(randNum>550&&randNum<=663)
			AB=6;
		if(randNum>663&&randNum<=776)
			AB=7;
		if(randNum>776&&randNum<=889)
			AB=8;
		if(randNum>889&&randNum<=1000)
			AB=9;
		break;
	case 7:
		if(randNum>0&&randNum<=145)
			AB=1;
		if(randNum>145&&randNum<=290)
			AB=2;
		if(randNum>290&&randNum<=435)
			AB=3;
		if(randNum>435&&randNum<=498)
			AB=4;
		if(randNum>498&&randNum<=560)
			AB=5;
		if(randNum>560&&randNum<=670)
			AB=6;
		if(randNum>670&&randNum<=780)
			AB=7;
		if(randNum>780&&randNum<=890)
			AB=8;
		if(randNum>890&&randNum<=1000)
			AB=9;
		break;
	case 8:
		if(randNum>0&&randNum<=147)
			AB=1;
		if(randNum>147&&randNum<=294)
			AB=2;
		if(randNum>294&&randNum<=440)
			AB=3;
		if(randNum>440&&randNum<=500)
			AB=4;
		if(randNum>500&&randNum<=560)
			AB=5;
		if(randNum>560&&randNum<=670)
			AB=6;
		if(randNum>670&&randNum<=780)
			AB=7;
		if(randNum>780&&randNum<=890)
			AB=8;
		if(randNum>890&&randNum<=1000)
			AB=9;
		break;
	case 9:
		if(randNum>0&&randNum<=150)
			AB=1;
		if(randNum>150&&randNum<=300)
			AB=2;
		if(randNum>300&&randNum<=450)
			AB=3;
		if(randNum>450&&randNum<=510)
			AB=4;
		if(randNum>510&&randNum<=570)
			AB=5;
		if(randNum>570&&randNum<=678)
			AB=6;
		if(randNum>678&&randNum<=786)
			AB=7;
		if(randNum>786&&randNum<=894)
			AB=8;
		if(randNum>894&&randNum<=1000)
			AB=9;
		break;
	case 10:
		if(randNum>0&&randNum<=152)
			AB=1;
		if(randNum>152&&randNum<=304)
			AB=2;
		if(randNum>304&&randNum<=455)
			AB=3;
		if(randNum>450&&randNum<=510)
			AB=4;
		if(randNum>510&&randNum<=570)
			AB=5;
		if(randNum>570&&randNum<=678)
			AB=6;
		if(randNum>678&&randNum<=786)
			AB=7;
		if(randNum>786&&randNum<=894)
			AB=8;
		if(randNum>894&&randNum<=1000)
			AB=9;
		break;
	case 11:
		if(randNum>0&&randNum<=150)
			AB=1;
		if(randNum>150&&randNum<=300)
			AB=2;
		if(randNum>300&&randNum<=450)
			AB=3;
		if(randNum>450&&randNum<=510)
			AB=4;
		if(randNum>510&&randNum<=570)
			AB=5;
		if(randNum>570&&randNum<=678)
			AB=6;
		if(randNum>678&&randNum<=786)
			AB=7;
		if(randNum>786&&randNum<=894)
			AB=8;
		if(randNum>894&&randNum<=1000)
			AB=9;
		break;
	case 12:
		if(randNum>0&&randNum<=150)
			AB=1;
		if(randNum>150&&randNum<=300)
			AB=2;
		if(randNum>300&&randNum<=450)
			AB=3;
		if(randNum>450&&randNum<=510)
			AB=4;
		if(randNum>510&&randNum<=570)
			AB=5;
		if(randNum>570&&randNum<=678)
			AB=6;
		if(randNum>678&&randNum<=786)
			AB=7;
		if(randNum>786&&randNum<=894)
			AB=8;
		if(randNum>894&&randNum<=1000)
			AB=9;
		break;
	case 13:
		if(randNum>0&&randNum<=150)
			AB=1;
		if(randNum>150&&randNum<=300)
			AB=2;
		if(randNum>300&&randNum<=450)
			AB=3;
		if(randNum>450&&randNum<=510)
			AB=4;
		if(randNum>510&&randNum<=570)
			AB=5;
		if(randNum>570&&randNum<=678)
			AB=6;
		if(randNum>678&&randNum<=786)
			AB=7;
		if(randNum>786&&randNum<=894)
			AB=8;
		if(randNum>894&&randNum<=1000)
			AB=9;
	case 14:
		if(randNum>0&&randNum<=150)
			AB=1;
		if(randNum>150&&randNum<=300)
			AB=2;
		if(randNum>300&&randNum<=450)
			AB=3;
		if(randNum>450&&randNum<=510)
			AB=4;
		if(randNum>510&&randNum<=570)
			AB=5;
		if(randNum>570&&randNum<=678)
			AB=6;
		if(randNum>678&&randNum<=786)
			AB=7;
		if(randNum>786&&randNum<=894)
			AB=8;
		if(randNum>894&&randNum<=1000)
			AB=9;
		break;
	case 15:
		if(randNum>0&&randNum<=150)
			AB=1;
		if(randNum>150&&randNum<=300)
			AB=2;
		if(randNum>300&&randNum<=450)
			AB=3;
		if(randNum>450&&randNum<=510)
			AB=4;
		if(randNum>510&&randNum<=570)
			AB=5;
		if(randNum>570&&randNum<=678)
			AB=6;
		if(randNum>678&&randNum<=786)
			AB=7;
		if(randNum>786&&randNum<=894)
			AB=8;
		if(randNum>894&&randNum<=1000)
			AB=9;
		break;
	case 16:
		if(randNum>0&&randNum<=150)
			AB=1;
		if(randNum>150&&randNum<=300)
			AB=2;
		if(randNum>300&&randNum<=450)
			AB=3;
		if(randNum>450&&randNum<=510)
			AB=4;
		if(randNum>510&&randNum<=570)
			AB=5;
		if(randNum>570&&randNum<=678)
			AB=6;
		if(randNum>678&&randNum<=786)
			AB=7;
		if(randNum>786&&randNum<=894)
			AB=8;
		if(randNum>894&&randNum<=1000)
			AB=9;
		break;
	case 17:
		if(randNum>0&&randNum<=150)
			AB=1;
		if(randNum>150&&randNum<=300)
			AB=2;
		if(randNum>300&&randNum<=450)
			AB=3;
		if(randNum>450&&randNum<=510)
			AB=4;
		if(randNum>510&&randNum<=570)
			AB=5;
		if(randNum>570&&randNum<=678)
			AB=6;
		if(randNum>678&&randNum<=786)
			AB=7;
		if(randNum>786&&randNum<=894)
			AB=8;
		if(randNum>894&&randNum<=1000)
			AB=9;
		break;
	case 18:
		if(randNum>0&&randNum<=150)
			AB=1;
		if(randNum>150&&randNum<=300)
			AB=2;
		if(randNum>300&&randNum<=450)
			AB=3;
		if(randNum>450&&randNum<=510)
			AB=4;
		if(randNum>510&&randNum<=570)
			AB=5;
		if(randNum>570&&randNum<=678)
			AB=6;
		if(randNum>678&&randNum<=786)
			AB=7;
		if(randNum>786&&randNum<=894)
			AB=8;
		if(randNum>894&&randNum<=1000)
			AB=9;
		break;
	case 19:
		if(randNum>0&&randNum<=150)
			AB=1;
		if(randNum>150&&randNum<=300)
			AB=2;
		if(randNum>300&&randNum<=450)
			AB=3;
		if(randNum>450&&randNum<=510)
			AB=4;
		if(randNum>510&&randNum<=570)
			AB=5;
		if(randNum>570&&randNum<=678)
			AB=6;
		if(randNum>678&&randNum<=786)
			AB=7;
		if(randNum>786&&randNum<=894)
			AB=8;
		if(randNum>894&&randNum<=1000)
			AB=9;
		break;
	case 20:
		if(randNum>0&&randNum<=150)
			AB=1;
		if(randNum>150&&randNum<=300)
			AB=2;
		if(randNum>300&&randNum<=450)
			AB=3;
		if(randNum>450&&randNum<=510)
			AB=4;
		if(randNum>510&&randNum<=570)
			AB=5;
		if(randNum>570&&randNum<=678)
			AB=6;
		if(randNum>678&&randNum<=786)
			AB=7;
		if(randNum>786&&randNum<=894)
			AB=8;
		if(randNum>894&&randNum<=1000)
			AB=9;
		break;
	case 21:
		if(randNum>0&&randNum<=150)
			AB=1;
		if(randNum>150&&randNum<=300)
			AB=2;
		if(randNum>300&&randNum<=450)
			AB=3;
		if(randNum>450&&randNum<=510)
			AB=4;
		if(randNum>510&&randNum<=570)
			AB=5;
		if(randNum>570&&randNum<=678)
			AB=6;
		if(randNum>678&&randNum<=786)
			AB=7;
		if(randNum>786&&randNum<=894)
			AB=8;
		if(randNum>894&&randNum<=1000)
			AB=9;
		break;
	case 22:
		if(randNum>0&&randNum<=150)
			AB=1;
		if(randNum>150&&randNum<=300)
			AB=2;
		if(randNum>300&&randNum<=450)
			AB=3;
		if(randNum>450&&randNum<=510)
			AB=4;
		if(randNum>510&&randNum<=570)
			AB=5;
		if(randNum>570&&randNum<=678)
			AB=6;
		if(randNum>678&&randNum<=786)
			AB=7;
		if(randNum>786&&randNum<=894)
			AB=8;
		if(randNum>894&&randNum<=1000)
			AB=9;
		break;
	case 23:
		if(randNum>0&&randNum<=150)
			AB=1;
		if(randNum>150&&randNum<=300)
			AB=2;
		if(randNum>300&&randNum<=450)
			AB=3;
		if(randNum>450&&randNum<=510)
			AB=4;
		if(randNum>510&&randNum<=570)
			AB=5;
		if(randNum>570&&randNum<=678)
			AB=6;
		if(randNum>678&&randNum<=786)
			AB=7;
		if(randNum>786&&randNum<=894)
			AB=8;
		if(randNum>894&&randNum<=1000)
			AB=9;
		break;
	case 24:
	if(randNum>0&&randNum<=150)
			AB=1;
		if(randNum>150&&randNum<=300)
			AB=2;
		if(randNum>300&&randNum<=450)
			AB=3;
		if(randNum>450&&randNum<=510)
			AB=4;
		if(randNum>510&&randNum<=570)
			AB=5;
		if(randNum>570&&randNum<=678)
			AB=6;
		if(randNum>678&&randNum<=786)
			AB=7;
		if(randNum>786&&randNum<=894)
			AB=8;
		if(randNum>894&&randNum<=1000)
			AB=9;
		break;
	case 25:
		if(randNum>0&&randNum<=150)
			AB=1;
		if(randNum>150&&randNum<=300)
			AB=2;
		if(randNum>300&&randNum<=450)
			AB=3;
		if(randNum>450&&randNum<=510)
			AB=4;
		if(randNum>510&&randNum<=570)
			AB=5;
		if(randNum>570&&randNum<=678)
			AB=6;
		if(randNum>678&&randNum<=786)
			AB=7;
		if(randNum>786&&randNum<=894)
			AB=8;
		if(randNum>894&&randNum<=1000)
			AB=9;
		break;
	case 26:
		if(randNum>0&&randNum<=150)
			AB=1;
		if(randNum>150&&randNum<=300)
			AB=2;
		if(randNum>300&&randNum<=450)
			AB=3;
		if(randNum>450&&randNum<=510)
			AB=4;
		if(randNum>510&&randNum<=570)
			AB=5;
		if(randNum>570&&randNum<=678)
			AB=6;
		if(randNum>678&&randNum<=786)
			AB=7;
		if(randNum>786&&randNum<=894)
			AB=8;
		if(randNum>894&&randNum<=1000)
			AB=9;
		break;
	case 27:
		if(randNum>0&&randNum<=150)
			AB=1;
		if(randNum>150&&randNum<=300)
			AB=2;
		if(randNum>300&&randNum<=450)
			AB=3;
		if(randNum>450&&randNum<=510)
			AB=4;
		if(randNum>510&&randNum<=570)
			AB=5;
		if(randNum>570&&randNum<=678)
			AB=6;
		if(randNum>678&&randNum<=786)
			AB=7;
		if(randNum>786&&randNum<=894)
			AB=8;
		if(randNum>894&&randNum<=1000)
			AB=9;
		break;
	case 28:
		if(randNum>0&&randNum<=150)
			AB=1;
		if(randNum>150&&randNum<=300)
			AB=2;
		if(randNum>300&&randNum<=450)
			AB=3;
		if(randNum>450&&randNum<=510)
			AB=4;
		if(randNum>510&&randNum<=570)
			AB=5;
		if(randNum>570&&randNum<=678)
			AB=6;
		if(randNum>678&&randNum<=786)
			AB=7;
		if(randNum>786&&randNum<=894)
			AB=8;
		if(randNum>894&&randNum<=1000)
			AB=9;
		break;
	case 29:
		if(randNum>0&&randNum<=150)
			AB=1;
		if(randNum>150&&randNum<=300)
			AB=2;
		if(randNum>300&&randNum<=450)
			AB=3;
		if(randNum>450&&randNum<=510)
			AB=4;
		if(randNum>510&&randNum<=570)
			AB=5;
		if(randNum>570&&randNum<=678)
			AB=6;
		if(randNum>678&&randNum<=786)
			AB=7;
		if(randNum>786&&randNum<=894)
			AB=8;
		if(randNum>894&&randNum<=1000)
			AB=9;
		break;
	case 30:
		if(randNum>0&&randNum<=150)
			AB=1;
		if(randNum>150&&randNum<=300)
			AB=2;
		if(randNum>300&&randNum<=450)
			AB=3;
		if(randNum>450&&randNum<=510)
			AB=4;
		if(randNum>510&&randNum<=570)
			AB=5;
		if(randNum>570&&randNum<=678)
			AB=6;
		if(randNum>678&&randNum<=786)
			AB=7;
		if(randNum>786&&randNum<=894)
			AB=8;
		if(randNum>894&&randNum<=1000)
			AB=9;
		break;
	case 31:
		if(randNum>0&&randNum<=30)
			AB=1;
		if(randNum>30&&randNum<=140)
			AB=2;
		if(randNum>140&&randNum<=145)
			AB=3;
		if(randNum>145&&randNum<=146)
			AB=4;
		if(randNum>146&&randNum<=147)
			AB=5;
		if(randNum>147&&randNum<=157)
			AB=6;
		if(randNum>157&&randNum<=187)
			AB=7;
		if(randNum>187&&randNum<=217)
			AB=8;
		if(randNum>217&&randNum<=1000)
			AB=9;
		break;
	case 32:
		if(randNum>217&&randNum<=1000)
			AB=1;
		if(randNum>187&&randNum<=217)
			AB=2;
		if(randNum>157&&randNum<=187)
			AB=3;
		if(randNum>147&&randNum<=157)
			AB=4;
		if(randNum>146&&randNum<=147)
			AB=5;
		if(randNum>145&&randNum<=146)
			AB=6;
		if(randNum>140&&randNum<=145)
			AB=7;
		if(randNum>30&&randNum<=140)
			AB=8;
		if(randNum>0&&randNum<=30)
			AB=9;
		break;
	case 33:
		if(randNum>0&&randNum<=30)
			AB=1;
		if(randNum>30&&randNum<=140)
			AB=2;
		if(randNum>140&&randNum<=145)
			AB=3;
		if(randNum>145&&randNum<=146)
			AB=4;
		if(randNum>146&&randNum<=147)
			AB=5;
		if(randNum>147&&randNum<=157)
			AB=6;
		if(randNum>157&&randNum<=187)
			AB=7;
		if(randNum>187&&randNum<=217)
			AB=8;
		if(randNum>217&&randNum<=1000)
			AB=9;
		break;
	case 34:
		if(randNum>0&&randNum<=30)
			AB=1;
		if(randNum>30&&randNum<=140)
			AB=2;
		if(randNum>140&&randNum<=145)
			AB=3;
		if(randNum>145&&randNum<=146)
			AB=4;
		if(randNum>146&&randNum<=147)
			AB=5;
		if(randNum>147&&randNum<=157)
			AB=6;
		if(randNum>157&&randNum<=187)
			AB=7;
		if(randNum>187&&randNum<=217)
			AB=8;
		if(randNum>217&&randNum<=1000)
			AB=9;
		break;
	}
	return AB;
}

void score(int inning)
{
	int out;
	int AB;
	int runners[4]={0};
	out=0;
	cout<<"Away: ";
	do
	{
		AB=atbat(two.rank);
		if(AB==1)
		{
			cout<<"FO ";
			out++;
		}
		if(AB==2)
		{
			cout<<"GO ";
			out++;
		}
		if(AB==3)
		{	
			cout<<"SO ";
			out++;
		}
		if(AB==4)
		{
			cout<<"Walk ";
			if(runners[0]==1&&runners[1]==1&&runners[2]==1)
			{
				runners[3]++;
			}
			if(runners[0]==1&&runners[1]==1&&runners[2]==0)
			{
				runners[2]=1;
			}
			if(runners[0]==1&&runners[1]==0)
			{
				runners[1]=1;
			}
			if(runners[0]==0)
			{
				runners[0]=1;
			}
		}
		if(AB==5)
		{
			cout<<"E ";
			two.errors++;
			if(runners[0]==1&&runners[1]==1&&runners[2]==1)
			{
				runners[3]++;
			}
			if(runners[0]==1&&runners[1]==1&&runners[2]==0)
			{
				runners[2]=1;
			}
			if(runners[0]==1&&runners[1]==0)
			{
				runners[1]=1;
			}
			if(runners[0]==0)
			{
				runners[0]=1;
			}
		}
		if(AB==6)
		{
			cout<<"1B ";
			one.hits++;
			if(runners[0]==1&&runners[1]==1&&runners[2]==0)
			{
				runners[2]=1;
			}
			if(runners[0]==1&&runners[1]==1&&runners[2]==1)
			{
				runners[3]++;
			}
			if(runners[0]==1&&runners[1]==0&&runners[2]==1)
			{
				runners[1]=1;
				runners[2]=0;
				runners[3]++;
			}
			if(runners[0]==0&&runners[1]==0&&runners[2]==1)
			{
				runners[0]=1;
				runners[2]=0;
				runners[3]++;
			}
			if(runners[0]==0&&runners[1]==1&&runners[2]==1)
			{
				runners[0]=1;
				runners[1]=0;
				runners[3]++;
			}
			if(runners[0]==0&&runners[1]==1&&runners[2]==0)
			{
				runners[0]=1;
				runners[1]=0;
				runners[2]=1;
			}
			if(runners[0]==1&&runners[1]==0&&runners[2]==0)
			{
				runners[1]=1;
			}
			if(runners[0]==0&&runners[1]==0&&runners[2]==0)
			{
				runners[0]=1;
			}
		}
		if(AB==7)
		{
			cout<<"2B ";
			one.hits++;
			if(runners[0]==0&&runners[1]==1&&runners[2]==0)
			{
				runners[3]++;
			}
			if(runners[0]==0&&runners[1]==1&&runners[2]==1)
			{
				runners[2]=0;
				runners[3]=runners[3]+2;
			}
			if(runners[0]==1&&runners[1]==1&&runners[2]==1)
			{
				runners[0]=0;
				runners[3]=runners[3]+2;
			}
			if(runners[0]==0&&runners[1]==0&&runners[2]==0)
			{
				runners[1]=1;
			}
			if(runners[0]==1&&runners[1]==0&&runners[2]==0)
			{
				runners[1]=1;
				runners[2]=1;
				runners[0]=0;
			}
			if(runners[0]==1&&runners[1]==1&&runners[2]==0)
			{
				runners[2]=1;
				runners[0]=0;
				runners[3]++;
			}
			
			if(runners[0]==1&&runners[1]==0&&runners[2]==1)
			{
				runners[0]=0;
				runners[3]++;
			}
			
			
			if(runners[0]==0&&runners[1]==0&&runners[2]==1)
			{
				runners[1]=1;
				runners[2]=0;
			}
		}
		if(AB==8)
		{
			cout<<"3B ";
			one.hits++;
			if(runners[0]==0&&runners[1]==0&&runners[2]==1)
			{
				runners[3]++;
			}
			if(runners[0]==0&&runners[1]==0&&runners[2]==0)
			{
				runners[2]=1;
			}
			if(runners[0]==1&&runners[1]==0&&runners[2]==0)
			{
				runners[2]=1;
				runners[0]=0;
				runners[3]++;
			}
			if(runners[0]==1&&runners[1]==1&&runners[2]==0)
			{
				runners[0]=0;
				runners[2]=1;
				runners[1]=0;
				runners[3]=runners[3]+2;
			}
			if(runners[0]==1&&runners[1]==1&&runners[2]==1)
			{
				runners[0]=0;
				runners[1]=0;
				runners[3]=runners[3]+3;
			}
			if(runners[0]==1&&runners[1]==0&&runners[2]==1)
			{
				runners[0]=0;
				runners[3]=runners[3]+2;
			}
			if(runners[0]==0&&runners[1]==1&&runners[2]==0)
			{
				runners[1]=0;
				runners[2]=1;
				runners[3]++;
			}
			if(runners[0]==0&&runners[1]==1&&runners[2]==1)
			{
				runners[1]=0;
				runners[3]=runners[3]+2;
			}
			
		}
		if(AB==9)
		{
			one.hits++;
			if(runners[0]==0&&runners[1]==0&&runners[2]==0)
			{
				cout<<"HR ";
				runners[3]++;
			}
			if(runners[0]==1&&runners[1]==0&&runners[2]==0)
			{
				cout<<"HR ";
				runners[0]=0;
				runners[3]++;
			}
			if(runners[0]==1&&runners[1]==1&&runners[2]==0)
			{
				cout<<"HR ";
				runners[0]=0;
				runners[1]=0;
				runners[3]=runners[3]+3;
			}
			if(runners[0]==1&&runners[1]==1&&runners[2]==1)
			{
				cout<<"GS ";
				runners[0]=0;
				runners[1]=0;
				runners[2]=0;
				runners[3]=runners[3]+4;
			}
			if(runners[0]==0&&runners[1]==1&&runners[2]==0)
			{
				cout<<"HR ";
				runners[1]=0;
				runners[3]=runners[3]+2;
			}
			if(runners[0]==0&&runners[1]==0&&runners[2]==1)
			{
				cout<<"HR ";
				runners[2]=0;
				runners[3]=runners[3]+2;
			}
			if(runners[0]==1&&runners[1]==0&&runners[2]==1)
			{
				cout<<"HR ";
				runners[0]=0;
				runners[2]=0;
				runners[3]=runners[3]+3;
			}
			if(runners[0]==0&&runners[1]==1&&runners[2]==1)
			{
				cout<<"HR ";
				runners[1]=0;
				runners[2]=0;
				runners[3]=runners[3]+3;
			}
		}
	}while(out<=2);
	cout<<endl;
	switch(inning)
	{
		case 0:
			one.one=runners[3];
			one.runs=one.one;
			break;
		case 1:
			one.two=runners[3];
		    	one.runs=one.runs+one.two;
			break;
		case 2:
			one.three=runners[3];
		   	one.runs=one.runs+one.three;
			break;
		case 3:
			one.four=runners[3];
		    	one.runs=one.runs+one.four;
			break;
		case 4:
			one.five=runners[3];
		    	one.runs=one.runs+one.five;
			break;
		case 5:
			one.six=runners[3];
			one.runs=one.runs+one.six;
			break;
		case 6:
			one.seven=runners[3];
			one.runs=one.runs+one.seven;
			break;
		case 7:
			one.eight=runners[3];
			one.runs=one.runs+one.eight;
			break;
		case 8:
			one.nine=runners[3];
			one.runs=one.runs+one.nine;
			break;
		case 9:
			one.ten=runners[3];
			one.runs=one.runs+one.ten;
			break;
	}
	out=0;
	runners[0]=0;
	runners[1]=0;
	runners[2]=0;
	runners[3]=0;
	cout<<"Home: ";
	do
	{
		AB=atbat(one.rank);
		if(AB==1)
		{
			cout<<"FO ";
			out++;
		}
		if(AB==2)
		{
			cout<<"GO ";
			out++;
		}
		if(AB==3)
		{
			cout<<"SO ";
			out++;
		}
		if(AB==4)
		{
			cout<<"Walk ";
			if(runners[0]==1&&runners[1]==1&&runners[2]==1)
			{
				runners[3]++;
			}
			if(runners[0]==1&&runners[1]==1&&runners[2]==0)
			{
				runners[2]=1;
			}
			if(runners[0]==1&&runners[1]==0)
			{
				runners[1]=1;
			}
			if(runners[0]==0)
			{
				runners[0]=1;
			}
		}
		if(AB==5)
		{
			cout<<"E ";
			one.errors++;
			if(runners[0]==1&&runners[1]==1&&runners[2]==1)
			{
				runners[3]++;
			}
			if(runners[0]==1&&runners[1]==1&&runners[2]==0)
			{
				runners[2]=1;
			}
			if(runners[0]==1&&runners[1]==0)
			{
				runners[1]=1;
			}
			if(runners[0]==0)
			{
				runners[0]=1;
			}
		}
		if(AB==6)
		{
			cout<<"1B ";
			two.hits++;
			if(runners[0]==1&&runners[1]==1&&runners[2]==0)
			{
				runners[2]=1;
			}
			if(runners[0]==1&&runners[1]==1&&runners[2]==1)
			{
				runners[3]++;
			}
			if(runners[0]==1&&runners[1]==0&&runners[2]==1)
			{
				runners[1]=1;
				runners[2]=0;
				runners[3]++;
			}
			if(runners[0]==0&&runners[1]==0&&runners[2]==1)
			{
				runners[0]=1;
				runners[2]=0;
				runners[3]++;
			}
			if(runners[0]==0&&runners[1]==1&&runners[2]==1)
			{
				runners[0]=1;
				runners[1]=0;
				runners[3]++;
			}
			if(runners[0]==0&&runners[1]==1&&runners[2]==0)
			{
				runners[0]=1;
				runners[1]=0;
				runners[2]=1;
			}
			if(runners[0]==1&&runners[1]==0&&runners[2]==0)
			{
				runners[1]=1;
			}
			if(runners[0]==0&&runners[1]==0&&runners[2]==0)
			{
				runners[0]=1;
			}
		}
		if(AB==7)
		{
			cout<<"2B ";
			two.hits++;
			if(runners[0]==0&&runners[1]==1&&runners[2]==0)
			{
				runners[3]++;
			}
			if(runners[0]==0&&runners[1]==1&&runners[2]==1)
			{
				runners[2]=0;
				runners[3]=runners[3]+2;
			}
			if(runners[0]==1&&runners[1]==1&&runners[2]==1)
			{
				runners[0]=0;
				runners[3]=runners[3]+2;
			}
			if(runners[0]==0&&runners[1]==0&&runners[2]==0)
			{
				runners[1]=1;
			}
			if(runners[0]==1&&runners[1]==0&&runners[2]==0)
			{
				runners[1]=1;
				runners[2]=1;
				runners[0]=0;
			}
			if(runners[0]==1&&runners[1]==1&&runners[2]==0)
			{
				runners[2]=1;
				runners[0]=0;
				runners[3]++;
			}
			
			if(runners[0]==1&&runners[1]==0&&runners[2]==1)
			{
				runners[0]=0;
				runners[3]++;
			}
			
			
			if(runners[0]==0&&runners[1]==0&&runners[2]==1)
			{
				runners[1]=1;
				runners[2]=0;
			}
		}
		if(AB==8)
		{
			cout<<"3B ";
			two.hits++;
			if(runners[0]==0&&runners[1]==0&&runners[2]==1)
			{
				runners[3]++;
			}
			if(runners[0]==0&&runners[1]==0&&runners[2]==0)
			{
				runners[2]=1;
			}
			if(runners[0]==1&&runners[1]==0&&runners[2]==0)
			{
				runners[2]=1;
				runners[0]=0;
				runners[3]++;
			}
			if(runners[0]==1&&runners[1]==1&&runners[2]==0)
			{
				runners[0]=0;
				runners[2]=1;
				runners[1]=0;
				runners[3]=runners[3]+2;
			}
			if(runners[0]==1&&runners[1]==1&&runners[2]==1)
			{
				runners[0]=0;
				runners[1]=0;
				runners[3]=runners[3]+3;
			}
			if(runners[0]==1&&runners[1]==0&&runners[2]==1)
			{
				runners[0]=0;
				runners[3]=runners[3]+2;
			}
			if(runners[0]==0&&runners[1]==1&&runners[2]==0)
			{
				runners[1]=0;
				runners[2]=1;
				runners[3]++;
			}
			if(runners[0]==0&&runners[1]==1&&runners[2]==1)
			{
				runners[1]=0;
				runners[3]=runners[3]+2;
			}
			
		}
		if(AB==9)
		{
			two.hits++;
			if(runners[0]==0&&runners[1]==0&&runners[2]==0)
			{
				cout<<"HR ";
				runners[3]++;
			}
			if(runners[0]==1&&runners[1]==0&&runners[2]==0)
			{
				cout<<"HR ";
				runners[0]=0;
				runners[3]++;
			}
			if(runners[0]==1&&runners[1]==1&&runners[2]==0)
			{
				cout<<"HR ";
				runners[0]=0;
				runners[1]=0;
				runners[3]=runners[3]+3;
			}
			if(runners[0]==1&&runners[1]==1&&runners[2]==1)
			{
				cout<<"GS ";
				runners[0]=0;
				runners[1]=0;
				runners[2]=0;
				runners[3]=runners[3]+4;
			}
			if(runners[0]==0&&runners[1]==1&&runners[2]==0)
			{
				cout<<"HR ";
				runners[1]=0;
				runners[3]=runners[3]+2;
			}
			if(runners[0]==0&&runners[1]==0&&runners[2]==1)
			{
				cout<<"HR ";
				runners[2]=0;
				runners[3]=runners[3]+2;
			}
			if(runners[0]==1&&runners[1]==0&&runners[2]==1)
			{
				cout<<"HR ";
				runners[0]=0;
				runners[2]=0;
				runners[3]=runners[3]+3;
			}
			if(runners[0]==0&&runners[1]==1&&runners[2]==1)
			{
				cout<<"HR ";
				runners[1]=0;
				runners[2]=0;
				runners[3]=runners[3]+3;
			}
		}
	}while(out<=2);
	cout<<endl;
	switch(inning)
	{
		case 0:
			two.one=runners[3];
			two.runs=two.one;
			break;
		case 1:
			two.two=runners[3];
		    two.runs=two.runs+two.two;
			break;
		case 2:
			two.three=runners[3];
		    two.runs=two.runs+two.three;
			break;
		case 3:
			two.four=runners[3];
		    two.runs=two.runs+two.four;
			break;
		case 4:
			two.five=runners[3];
		    two.runs=two.runs+two.five;
			break;
		case 5:
			two.six=runners[3];
			two.runs=two.runs+two.six;
			break;
		case 6:
			two.seven=runners[3];
			two.runs=two.runs+two.seven;
			break;
		case 7:
			two.eight=runners[3];
			two.runs=two.runs+two.eight;
			break;
		case 8:
			two.nine=runners[3];
			two.runs=two.runs+two.nine;
			break;
		case 9:
			two.ten=runners[3];
			two.runs=two.runs+two.ten;
			break;
	}
	runners[0]=0;
	runners[1]=0;
	runners[2]=0;
	runners[3]=0;
}	
	




int main()
{
	srand(time(NULL));
	int which;
   int count;
   int pause;
	int inning=0;
	int wrank=0;
	int again;
	int done=0;
	int out=0;
    int runners[4] = {0, 0, 0, 0};

	count=0;
	cout<<"Would you like to pick the home(1) or away(2) team first?"<<endl;
	cin>>which;
	do
	{
		switch(which)
		{
			case 1:
				one.rank=rank();
				count++;
				again=1;
				break;
			case 2:
				two.rank=rank();
				count++;
				again=2;
				break;
			default:
				one.rank=31;
				two.rank=32;
				count=2;
				break;
		}
		if(again==1)
		{
			which=2;
			if(done<1)
				cout<<"Now pick the away team."<<endl;
			done++;
		}
		if(again==2)
		{
			
			which=1;
			if(done<1)
				cout<<"Now pick the home team."<<endl;
			done++;
		}
	}while(count<2);
	system("clear");
	display(inning);
	cout<<"Play Ball!" <<endl;
	system("read");
	system("clear");
	
	score(inning);
	inning++;
	display(inning);
	cout<<"Play the next inning. "<<endl;
	system("read");
	system("clear");
	
	score(inning);
	inning++;
	display(inning);
	cout<<"Play the next inning. "<<endl;
	system("read");
	system("clear");
	
	score(inning);
	inning++;
	display(inning);
	cout<<"Play the next inning. "<<endl;
	system("read");
	system("clear");
	
	score(inning);
	inning++;
	display(inning);
	cout<<"Play the next inning. "<<endl;
	system("read");
	system("clear");
	
	score(inning);
	inning++;
	display(inning);
	cout<<"Play the next inning. "<<endl;
	system("read");
	system("clear");
	
	score(inning);
	inning++;
	display(inning);
	cout<<"Play the next inning. "<<endl;
	system("read");
	system(" cls");
	
	score(inning);
	inning++;
	display(inning);
	cout<<"Play the next inning. "<<endl;
	system("read");
	system("clear");
	
	score(inning);
	inning++;
	display(inning);
	cout<<"Play the next inning."<<endl;
	system("read");
	system("clear");
	
	score(inning);
	inning++;
	display(inning);
	
	if(one.runs<two.runs)
	{
		wrank=one.rank;
		winner(wrank);
	}
	if(two.runs<one.runs)
	{
		wrank=two.rank;
		winner(wrank);
	}
	if(one.runs==two.runs)
	{
		cout<<"Play the next inning. ";
		system("read");
		system("clear");
		score(inning);
		inning++;
		display(inning);
		if(one.runs<two.runs)
		{
			wrank=one.rank;
			winner(wrank);
		}
		if(two.runs<one.runs)
		{
			wrank=two.rank;
			winner(wrank);
		}
	}
	return 0;
}	
