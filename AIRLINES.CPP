#include<fstream>
#include<iostream>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>>

using namespace std;

class airline
{
 private:char pname[20][20],phone[10][10],date[8],id[20][20],age[20][2],food[10][10];
	 int A,choice,n,code,loop,fare;
	 char source[10],dest[10],b[20][2],c,ch,clss,cno[12],otp[6],h[30];
	 float cvv;
	 int compute();
 public:void reserve();
	void display();
	void travel();
	void menu();
	void book();
	void payment();
	void card();
	void netbanking();
};
void airline::menu() //function to display menu
{
 delay(800);
 cout<<"\n\n.................................AIRLINES..................................";
 delay(800);
 cout<<"\n\n\nFOR RESERVATION CLICK HERE";
 cout<<"\n\n\n\t1.RESERVATION\t";
 cout<<"\n\n\n\t2.EXIT\t";
 cin>>A;
 if(A==1)
 {
  
  for(int j=0;j<3;j++)
  {
   cout<<"\n\n\n\n\t\t\t........LOADING........";
   delay(500);
  }
  
  cout<<"\n\tIn which airline you want to travel";
  cout<<"\n\n\t1.INDIGO\t";
  cout<<"\n\n\t2.AIR INDIA\t";
  cout<<"\n\n\t3.JET AIRWAYS\t";
  cin>>choice;
  if(choice==1)
  {
   
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t...........LOADING...........";
   delay(800);
  
   cout<<"............................WELCOME TO INDIGO................................";
   delay(800);
   travel();
  }
  if(choice==2)
  {
  
   cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t........LOADING........";
   delay(800);
   
   cout<<"..........................WELCOME TO AIR INDIA..................................";
   delay(800);
   travel();
  }
  if(choice==3)
  {
  
   cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t........LOADING........";
   delay(800);
   
   cout<<"...........................WELCOME TO JET AIRWAYS.................................";
   delay(800);
   travel();
  }
 }
 if(A==2)
 {cout<<"\n";
   
   cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t........LOADING........";
   delay(800);
   
   }
  cout<<"\n\n Do you want to continue(y/Y,n/N)";
  cin>>c;
  if(c=='y'||c=='Y')
  {
   menu();
  }
}
void airline::travel() //function to display flights available
{
 int flag=0;
 ifstream f1,f2,f3,f4,f5,f6;
 cout<<"\n\n\nEnter from where you want to travel\t";
 gets(source);
 if(strcmpi(source,"MUMBAI")==0)
 {
  
  for(int j=0;j<3;j++)
  {
   cout<<"\n\n\n\n\t\t\t........LOADING........";
   delay(500);
  }
 
  f1.open("PLANE1.TXT");
  char ch;
  while(!f1.eof())
  {
   f1.get(ch);
   cout<<ch;
  }
  cout<<"\n\nEnter your destination\t";
  gets(dest);
  cout<<"\nYou have selected to travel from"<<" "<<source<<" "<<"to"<<" "<<dest;
  if(strcmpi(dest,"delhi")==0){delay(1000);cout<<"\n\nYour distance is 2139 km"; fare=3500;}
  if(strcmpi(dest,"jaipur")==0){delay(1000);cout<<"\n\nYour distance is 2513 km";fare=1900;}
  if(strcmpi(dest,"lucknow")==0){delay(1000);cout<<"\n\nYour distance is 1972 km"; fare=2800;}
  if(strcmpi(dest,"chennai")==0){delay(1000);cout<<"\n\nYour distance is 4590 km";fare=5090;}
  if(strcmpi(dest,"kolkata")==0){delay(1000);cout<<"\n\nYour distance is 7186 km"; fare=6900;}
  book();
  flag++;
  f1.close();
 }
 if(strcmpi(source,"DELHI")==0)
 {
  flag++;
  
  for(int j=0;j<3;j++)
  {
   cout<<"\n\n\n\n\t\t\t........LOADING........";
   delay(500);
  }

  f2.open("PLANE2.TXT");
  char ch;
  while(!f2.eof())
  {
   f2.get(ch);
   cout<<ch;
  }
  cout<<"\n\nEnter your destination\t";
  gets(dest);
  cout<<"\nYou have selected to travel from"<<" "<<source<<" "<<"to"<<" "<<dest;
  if(strcmpi(dest,"mumbai")==0){delay(1000);cout<<"\n\nYour distance is 2139 km";fare=2300;}
  if(strcmpi(dest,"jaipur")==0){delay(1000);cout<<"\n\nYour distance is 2513 km";fare=3000;}
  if(strcmpi(dest,"lucknow")==0){delay(1000);cout<<"\n\nYour distance is 1972 km";fare=2000;}
  if(strcmpi(dest,"chennai")==0){delay(1000);cout<<"\n\nYour distance is 4590 km";fare=5800;}
  if(strcmpi(dest,"kolkata")==0){delay(1000);cout<<"\n\nYour distance is 7186 km";fare=6000;}
  book();
  f2.close();
 }
 if(strcmpi(source,"CHENNAI")==0)
 {
  flag++;
  
  cout<<"\n\n\n\n\t\t\t........LOADING........";
  delay(2000);
  cout<<"\n\n\n\n\t\t\t........LOADING........";
  delay(2000);
  clrscr();
  f3.open("PLANE3.TXT");
  char ch;
  while(!f3.eof())
  {
   f3.get(ch);
   cout<<ch;
  }
  cout<<"\n\nEnter your tour destination\t";
  gets(dest);
  cout<<"\nYou have selected to travel from"<<" "<<source<<" "<<"to"<<" "<<dest;
  if(strcmpi(dest,"delhi")==0){delay(1000);cout<<"\n\nYour distance is 2139 km";fare=1900;}
  if(strcmpi(dest,"jaipur")==0){delay(1000);cout<<"\n\nYour distance is 2513 km";fare=2300;}
  if(strcmpi(dest,"lucknow")==0){delay(1000);cout<<"\n\nYour distance is 1972 km";fare=3200;}
  if(strcmpi(dest,"mumbai")==0){delay(1000);cout<<"\n\nYour distance is 4590 km";fare=4090;}
  if(strcmpi(dest,"kolkata")==0){delay(1000);cout<<"\n\nYour distance is 7186 km";fare=6000;}
  book();
  f3.close();
 }
 if(strcmpi(source,"JAIPUR")==0)
 {
  flag++;
 
  for(int j=0;j<3;j++)
  {
   cout<<"\n\n\n\n\t\t\t........LOADING........";
   delay(500);
  }
  
  f4.open("PLANE4.TXT");
  char ch;
  while(!f4.eof())
  {
   f4.get(ch);
   cout<<ch;
  }
  cout<<"\n\nEnter your destination\t";
  gets(dest);
  cout<<"\nYou have selected to travel from"<<" "<<source<<" "<<"to"<<" "<<dest;
  if(strcmpi(dest,"delhi")==0){delay(1000);cout<<"\n\nYour distance is 2139 km";fare=2000;}
  if(strcmpi(dest,"mumbai")==0){delay(1000);cout<<"\n\nYour distance is 2513 km";fare=2500;}
  if(strcmpi(dest,"lucknow")==0){delay(1000);cout<<"\n\nYour distance is 1972 km";fare=1900;}
  if(strcmpi(dest,"chennai")==0){delay(1000);cout<<"\n\nYour distance is 4590 km";fare=4900;}
  if(strcmpi(dest,"kolkata")==0){delay(1000);cout<<"\n\nYour distance is 7186 km";fare=6000;}
  book();
  f4.close();
 }
 if(strcmpi(source,"LUCKNOW")==0)
 {
  flag++;
  clrscr();
  for(int j=0;j<3;j++)
  {
   cout<<"\n\n\n\n\t\t\t........LOADING........";
   delay(500);
  }
  
  f5.open("PLANE5.TXT");
  char ch;
  while(!f5.eof())
  {
   f5.get(ch);
   cout<<ch;
  }
  cout<<"\n\nEnter your destination\t";
  gets(dest);
  cout<<"\nYou have selected to travel from"<<" "<<source<<" "<<"to"<<" "<<dest;
  if(strcmpi(dest,"delhi")==0){delay(1000);cout<<"\n\nYour distance is 2139 km";fare=3900;}
  if(strcmpi(dest,"jaipur")==0){delay(1000);cout<<"\n\nYour distance is 2513 km";fare=2300;}
  if(strcmpi(dest,"mumbai")==0){delay(1000);cout<<"\n\nYour distance is 1972 km";fare=1900;}
  if(strcmpi(dest,"chennai")==0){delay(1000);cout<<"\n\nYour distance is 4590 km";fare=5090;}
  if(strcmpi(dest,"kolkata")==0){delay(1000);cout<<"\n\nYour distance is 7186 km";fare=6800;}
  book();
  f5.close();
 }
 if(strcmpi(source,"KOLKATA")==0)
 {
  flag++;
  clrscr();
  for(int j=0;j<3;j++)
  {
   cout<<"\n\n\n\n\t\t\t........LOADING........";
   delay(500);
  }
 
  f6.open("PLANE6.TXT");
  char ch;
  while(!f6.eof())
  {
   f6.get(ch);
   cout<<ch;
  }
  cout<<"\n\nEnter your destination\t";
  gets(dest);
  cout<<"\nYou have selected to travel from"<<" "<<source<<" "<<"to"<<" "<<dest;
  if(strcmpi(dest,"delhi")==0){delay(1000);cout<<"\n\nYour distance is 2139 km";fare=3900;}
  if(strcmpi(dest,"jaipur")==0){delay(1000);cout<<"\n\nYour distance is 2513 km";fare=3200;}
  if(strcmpi(dest,"lucknow")==0){delay(1000);cout<<"\n\nYour distance is 1972 km";fare=1900;}
  if(strcmpi(dest,"chennai")==0){delay(1000);cout<<"\n\nYour distance is 4590 km";fare=5800;}
  if(strcmpi(dest,"mumbai")==0){delay(1000);cout<<"\n\nYour distance is 7186 km";fare=6900;}
  book();
  f6.close();
 }
 if(flag==0)
 {
  delay(800);
  cout<<"\n Sorry! No flights are available from this place";
  cout<<"\n\n Do you want to continue(y/Y,n/N)";
  cin>>c;
  if(c=='y'||c=='Y')
  {
   menu();
  }
 }
}
int airline::compute()  //function to calculate fare
{
return(n*fare);
 }
void airline::book() //function to book seats
{
 ifstream s1,s2;
 delay(800);
 cout<<"\nEnter tour ticket type";
 cout<<"\n\nF for first class";
 cout<<"\n\nE for economy class\n";
 cin>>clss;
 if((clss=='f')||(clss=='F'))
 {
  cout<<"\nHow many seats do you want to book??\n";
  cin>>n;
  cout<<"\n\nHere are the seats available:\n";
 
  for(int j=0;j<3;j++)
  {
   cout<<"\n\n\n\n\t\t\t........LOADING........";
   delay(800);
  }

  cout<<"\nYour Total Fare is"<<compute();
  cout<<"\n";
  s1.open("SEATS1.TXT");
  while(s1.eof()==0)
  {
   s1.get(ch);
   cout<<ch;
  }
  s1.close();
 }
 if((clss=='e')||(clss=='E'))
 {
  cout<<"\nHow many seats do you want to book??";
  cin>>n;

  cout<<"\nHere are the seats available:\n";
  
  for(int j=0;j<3;j++)
  {
   cout<<"\n\n\n\n\t\t\t........LOADING........";
   delay(800);
  }
   
   cout<<"\nYour Total Fare is"<<compute();
   cout<<"\n";
  s2.open("SEATS2.TXT");
  cout<<"\n";
  while(s2.eof()==0)
  {
   s2.get(ch);
   cout<<ch;
  }
  s2.close();
 }
 reserve();
 payment();
 display();
}

void airline::reserve() //function to enter passenger's data
{
 char x[20][2];
 ofstream f;
 ifstream s1,s2;
 f.open("DETAILS.DAT",ios::binary);
 for(int loop=0;loop<n;loop++)
 {
  delay(800);
  cout<<"\nEnter your desired seat no"<<loop+1<<":\t";
  gets(b[loop]);
  if((clss=='F')||(clss=='f'))
  {
   s1.open("SEATS1.TXT");
   if((strcmpi(b[loop],"1A")==0)||(strcmpi(b[loop],"2B")==0)||(strcmpi(b[loop],"4D")==0)||(strcmpi(b[loop],"9C")==0))
   {
    cout<<"\nThis seat is already booked.Please! Select another seat number";
    cout<<"\nEnter another seat number";
    gets(x[loop]);
   }
  }
  else if((clss=='E')||(clss=='e'))
  {
   s2.open("SEATS2.TXT");
   if((strcmpi(x[loop],"1A")==0)||(strcmpi(x[loop],"2B")==0)||(strcmpi(x[loop],"4D")==0)||(strcmpi(x[loop],"6C")==0)||(strcmpi(x[loop],"6A")==0))
   {
    cout<<"\nThis seat is already booked.Please! Select another seat number";
    cout<<"\nEnter another seat number\t";
    gets(x[loop]);
   }
  }
  cout<<"\nEnter passenger name\t";
  gets(pname[loop]);
  cout<<"\nEnter your age\t";
  gets(age[loop]);
  cout<<"\nEnter your meal prefrence (Veg/Non veg):";
  gets(food[loop]);
  f.write((char*)this,sizeof(airline));
 }
 cout<<"\nEnter your telephone no.\t";
 gets(phone[loop]);
 cout<<"\nEnter your email id\t";
 gets(id[loop]);
 cout<<"\nEnter date of travel:";
 gets(date);
 f.close();
}
void airline::display()  //function to display ticket
{
 
 for(int j=0;j<3;j++)
  {
   cout<<"\n\n\n\n\t\t\t........LOADING........";
   delay(500);
  }
 
 cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
 cout<<"\t\t\t\tTICKET";
 cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
 for(int loop=0;loop<n;loop++)
 {
  cout<<"\nSeat no:"<<loop+1<<"\t"<<b[loop];
  cout<<"\nPassenger Name\t"<<pname[loop];
  cout<<"\nAge:\t"<<age[loop];
  cout<<"\nMeal:";
  if(strcmpi(food[loop],"Veg")==0) cout<<"Veg";
  else cout<<"Non veg";
  cout<<"\t";
 }
 cout<<"\nTelephone no:\t"<<phone[loop];
 cout<<"\nEmail Id\t"<<id[loop];
 cout<<"\nDate of Travelling:\t"<<date;
 cout<<"\nTotal amount:\t"<<compute();
 cout<<"\nCongratulations!! Your booking is confirmed";
 cout<<"\n\t\t\t\tTHANK YOU";
 cout<<"\n\t\t\t\t!!HAPPY JOURNEY!!";
 cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
}
void airline::card()  //function to pay by credit card
{

cout<<"\n\t\tSelect prefered bank:";
cout<<"\n\t\tUBI bank 1\n\t\tSBI bank 2\n\t\tHDFC bank3\n\t\tYES bank4";
cin>>code;
clrscr();
cout<<"\n\t\tEnter card number:";
gets(cno);
cout<<"\n\t\tEnter name of card holder";
gets(h);
cout<<"\n\t\tEnter CVV number";
cin>>cvv;
cout<<"\n\t\tEnter the OTP sent to your mobile no.(valid only for 2 min)";
gets(otp);

}
void airline::netbanking() //function to pay by Net banking
{

int bcode;
cout<<"\n\t\tselect prefered bank:";
cout<<"\n\t\tUBI bank 1\n\t\tSBI bank 2\n\t\tHDFC bank3\n\t\tYES bank4";
cin>>bcode;

char uname[20],password[20],otp[6];
cout<<"\n\t\tEnter Username:";
gets(uname);
cout<<"\n\t\tEnter password";
gets(password);
cout<<"\n\t\tEnter the OTP sent to your mobile no.(valid for 2 min)";
gets(otp);

}
void airline::payment()
{
 int k;
 
 cout<<"\nEnter mode of payment";
 cout<<"\n\t1.Credit card payment\n\t";
 cout<<"\n\t2.Net banking payment\n\t";
 cout<<"\n\n Enter 1 for credit card payment or 2 for net banking payment";
 cin>>k;
 if(k==1)
 {
  card();
 }
 if(k==2)
 {
  netbanking();
 }
}
int main()
{
 
 airline a;
 a.menu();
 getch();
}







