#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
class Time
{
private:
int seconds;
int hh,mm,ss;
public:
void gettime(void);
void intoseconds(void);
void display(void);
};
void Time::gettime(void)
{
cout<<"Enter time: "<<endl;
cout<<"Hours? ";
cin>>hh;
cout<<"Minutes? ";
cin>>mm;
cout<<"Seconds? ";
cin>>ss;
}
void Time::intoseconds(void)
{
seconds=hh*3600+mm*60+ss;
}
void Time::display(void)
{
cout<<"The time is = "<<setw(2)<<setfill('0')<<hh<<":"
		      <<setw(2)<<setfill('0')<<mm<<":"
		      <<setw(2)<<setfill('0')<<ss<<endl;
cout<<"Time in total seconds: "<<seconds;
}
int main()
{
clrscr();
Time T;
T.gettime();
T.intoseconds();
T.display();
getch();
return 0;
}