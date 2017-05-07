
/*                 _______________PROJECT_______________


				DOS Ultimate




  Author : Yadev Jayachandran 

  NOTE: default password=pass
_____________________________________________________________________________
-----------------------------------------------------------------------------   */


// HEADER FILES.....

#include<iostream.h>
#include<graphics.h>
#include<fstream.h>
#include<process.h>
#include<iomanip.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<math.h>
#include<dos.h>



#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77


										/*
________
____________________________________________________________________
    ..........................  FUNCTIONS  ............................         */
    void gfx();
    void boot();
    void login();
    void menu();
    void area();
    void mark();
    void converter();
    void ai();
    void help();
    void shutdown();
    void null();
    void anim1();

										/*
________
   ____________________________________________________________________
    ..........................  CLASS  ............................            */

    class password
     {
      private:
       int pwd[10];
       int key;
       int f;


      public:

       password()
       {
	f=4;
       }
       ~password()
       {
       }

       void chpwd();

       void keylog(int &a);
       void login(int l[]);
       int ret();
       };

	int password::ret()
	 {
	  int k=f;
	  return(k);
	 }

	void password::login(int l[])

	{
	pwd[0]='p';pwd[1]='a';pwd[2]='s';pwd[3]='s';
	   for(int a=0;a<10;a++)
	    {
	     if(isdigit(pwd[a])==1||isalpha(pwd[a])==1)
	      {
	       f=a;
	      }
	      else
	      {
	       break;
	      }
	   }
	 int x=0,y=0;
	 x=getmaxx();
	 y=getmaxy();

	 int u;

	 for(int i=0;i<15;i++)
	 {

	for(int j=0;j<f;j++)
	  {
	  if(l[j]==pwd[j])
	   {
	    u=1;
	   }
	   else
	   {
	    u=0;
	    break;
	   }
	  }
	   if(u==1)

	  {
	   settextstyle(2, HORIZ_DIR, 5);
	   setcolor(12);
	   outtextxy((x/2)-55,(y/2)+55,"               ");
	   outtextxy((x/2)-70,(y/2)+78,"  Logging in... ");
	    settextstyle(3, HORIZ_DIR, 1);
	   for(int n=0;n<5;n++)
	    { setcolor(n+1);
	      textcolor(GREEN);
	      delay(200);
	      outtextxy((x/2)-35+15*n,(y/2)+110," o ");
	      delay(300);
	    }
	   delay(500);
	   anim1();
	   key=1;

	   break;


	  }
	  else
	   {
	   settextstyle(3,0,3);
	    setcolor(RED);
	   outtextxy((x/2)-55,(y/2)+55,"               ");
	   outtextxy((x/2)-55,(y/2)+55,"     wrong!!   ");
	   delay(1000);

	   key=0;
	   if(i==15)
	    {
	     exit;
	    }

	   }

	  }
	 }


	 void password::keylog(int &a)
	  {
	   if(key==1)
	    {
	     a=1;
	    }
	   else
	    {
	     a=0;
	    }
	  }




										/*
    ......................FUNCTION DEFENITIONS.........................         */

      void gfx()
       {
	int gdriver = DETECT,gmode;
	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");

       };

       void box(int x,int y,int X,int Y)
	{

	 line(x,y,x,Y);
	 line(x,y,X,y);
	 line(x,Y,X,Y);
	 line(X,y,X,Y);
	}


	 void boot()
	{
	 clrscr();
	 gfx();
	 int gdriver = DETECT,gmode;
	 int x=0,y=0;
	 x=getmaxx();
	 y=getmaxy();

		setcolor(8);
		settextstyle(0, HORIZ_DIR, 1);
	   outtextxy((x/2)-40,y-30,"DOS Ultimate");
	   setcolor(WHITE);
	  for(int i=0;i<4;i++)
	  {

		setcolor(8);
		settextstyle(0, HORIZ_DIR, 1);
	   outtextxy((x/2)-40,y-30,"DOS Ultimate");
	   setcolor(WHITE);

	  for(int j=0;j<2;j++)
	   circle(x/2,y/2,35+j);
			setcolor(8);
		settextstyle(0, HORIZ_DIR, 1);
	   outtextxy((x/2)-40,y-30,"DOS Ultimate");
	   setcolor(WHITE);
	   for(j=0;j<2;j++)
	   circle(x/2,y/2,35+j);
	   delay(500);
	   if(i%2==0)
	   {
	    line(x/2,(y+30)/2,x/2,(y-30)/2);
	    delay(350);
	    setgraphmode(gmode);
	    initgraph(&gdriver,&gmode,"C:\\TC\\BGI");

	    for(int j=0;j<2;j++)
	     circle(x/2,y/2,35+j);
			setcolor(8);
		settextstyle(0, HORIZ_DIR, 1);
	   outtextxy((x/2)-40,y-30,"DOS Ultimate");
	   setcolor(WHITE);

	   delay(500);

	    line((x+30)/2,y/2,(x-30)/2,y/2);
	    delay(350);
	    setgraphmode(gmode);
	    initgraph(&gdriver,&gmode,"C:\\TC\\BGI");

	   }
	   else
	    {
			setcolor(8);
		settextstyle(0, HORIZ_DIR, 1);
	   outtextxy((x/2)-40,y-30,"DOS Ultimate");
	   setcolor(WHITE);
	     line((x+40)/2,(y-40)/2,(x-40)/2,(y+40)/2);
	     delay(500);
	     line((x-40)/2,(y+40)/2,(x+40)/2,(y-40)/2);
	     setgraphmode(gmode);

	    }
	  }
			setcolor(8);
		settextstyle(0, HORIZ_DIR, 1);
	   outtextxy((x/2)-40,y-30,"DOS Ultimate");
	   setcolor(WHITE);

	     gfx();

	      for(int j=0;j<2;j++)
	     circle(x/2,y/2,35+j);
			setcolor(8);
		settextstyle(0, HORIZ_DIR, 1);
	   outtextxy((x/2)-40,y-30,"DOS Ultimate");
	   setcolor(WHITE);
	     delay(1000);
	     line(x/2,(y+30)/2,x/2,(y-30)/2);
	     delay(1000);
	     line((x+30)/2,y/2,(x-30)/2,y/2);
	     line((x+40)/2,(y-40)/2,(x-40)/2,(y+40)/2);
	     delay(500);
	     setcolor(GREEN);
	     line((x-40)/2,(y+40)/2,(x+40)/2,(y-40)/2);
	     line((x-40)/2,(y+39)/2,(x+40)/2,(y-41)/2);
	     line((x-41)/2,(y+40)/2,(x+40)/2,(y-39)/2);
	     setcolor(WHITE);

	     for(i=0;i<2;i++)
	      {

	      if(i==1)
	       setcolor(GREEN);


		for(int j=0;j<4;j++)
		 {


		  int m,n;
		  m=(x/2)-30;
		  n=(y/2)+60;
		  circle(m+20*j,n,5);
		   delay(750);

		  }
	       }
	     };


	void bootlog()
	{
	 gfx();
	 int x=0,y=0;
	  x=getmaxx();
	  y=getmaxy();
	 setbkcolor(WHITE);
	 setcolor(2);

	  for(int j=0;j<2;j++)

	 circle(x/2,y/2,35+j);
	 line(x/2,(y+30)/2,x/2,(y-30)/2);

	     line((x+30)/2,y/2,(x-30)/2,y/2);
	     line((x+40)/2,(y-40)/2,(x-40)/2,(y+40)/2);
	     delay(500);
	     line((x-40)/2,(y+40)/2,(x+40)/2,(y-40)/2);


	      for(j=0;j<8;j++)
	       {
		delay(50);
	 circle(x/2,y/2,35-j);
	       }
	     closegraph();
	     clrscr();

	     };


   void anim1();
    void logons()
    {

      gfx();
	 int x=0,y=0;
	  x=getmaxx();
	  y=getmaxy();
	 setbkcolor(WHITE);
	 setcolor(8);


	 for(int m=0;m<=x/32;m++)
	  {


	     setcolor(RED);
	     delay(1);
	     for(int j=0;j<8;j++)
	     circle(16*m,y/2,40+j);

	      setcolor(GREEN);
	      delay(2);
	     for(j=0;j<8;j++)
	     circle(x-16*m,y/2,40+j);


	 }

	  cleardevice();

		for(int i=0;i<10;i++)
	{
	 setcolor(RED);
	  setbkcolor(WHITE);
	  delay(10);
	   cleardevice();
	settextstyle(4, HORIZ_DIR, 5);
	outtextxy((x/2)-125+20*i,y/2-20,"WELCOME");
	setcolor(8);
	outtextxy((x/2)-124+20*i,y/2-21,"WELCOME");


       }

	  setcolor(8);
	  circle(x/2,y/2,43);
	  circle(x/2,y/2,39);
	  setcolor(12);
	  for(int j=0;j<2;j++)
	 circle(x/2,y/2,40+j);

	  setcolor(8);

	  for(i=0;i<7;i++)
	   {
	    delay(300);
	    putpixel(x/2,y/2,3);
	    putpixel((x/2)+5*i,y/2,i);
	    putpixel((x/2)-5*i,y/2,i);
	    putpixel(x/2,(y/2)+5*i,i);
	    putpixel(x/2,(y/2)-5*i,i);
	   }
	   circle((x/2)-30,y-30,8);
		settextstyle(0, HORIZ_DIR, 1);
	   outtextxy((x/2)-10,y-30,"DOS Ultimate");
	   line((x/2)-43,y-32,(x/2)-12,y-32);
	   line((x/2)-35,y-30,(x/2)-16,y-30);

	   delay(750);
	line((x/2)-77,(y/2)+55,(x/2)+77,(y/2)+55);
	line((x/2)-77,(y/2)+70,(x/2)+77,(y/2)+70);
	line((x/2)-77,(y/2)+55,(x/2)-77,(y/2)+70);
	line((x/2)+77,(y/2)+55,(x/2)+77,(y/2)+70);

	}


    void anim1()
     {

	int x=0,y=0;
	  x=getmaxx();
	  y=getmaxy();
	 setbkcolor(WHITE);
     for(int j=0;j<5;j++)
      {

	for(int i=0;i<5;i++)
	{
	 setcolor(WHITE);
	  setbkcolor(12);
	 delay(70);
	  cleardevice();
	settextstyle(i, HORIZ_DIR, 6);
	outtextxy((x/2)-140+5*i,y/2,"WELCOME");

       }


	for(i=4;i>=0;i--)
	{
	 setcolor(WHITE);
	  setbkcolor(BLACK);
	  delay(70);
	   cleardevice();
	settextstyle(i, HORIZ_DIR, 6);
	outtextxy((x/2)-140-5*i,y/2,"WELCOME");

       }

		for(i=0;i<4;i++)
	{
	 setcolor(8);
	  setbkcolor(WHITE);
	  delay(70);
	   cleardevice();
	settextstyle(i, HORIZ_DIR, 6);
	outtextxy((x/2)-140+5*i,y/2,"WELCOME");

       }
     }
    }


     int logpass()
      {
       textcolor(2);
       int x=0,y=0;
	  x=getmaxx();
	  y=getmaxy();
       int l[10],a;
       password p1;
       int o=p1.ret();
       for (int i=0;i<o;i++)
	{setcolor(i+1);
	 l[i]= getche();
	 textcolor(i+3);
	 settextstyle(5,1,2);


	 outtextxy((x/2)-75+12*i,(y/2)+57,"*");
	}


       p1.login(l);
       clrscr();
       closegraph();

       //switch
       p1.keylog(a);
       return a;
       }

       void bootsound()
	{
	int so;

	 for(int i=0;i<5;i++)
	  {
	  int so;
	  so=50*(i*3);
	   sound(so);
	   delay(100);
	  }
	  nosound();
	   for(i=0;i<5;i++)
	  {
	  int so;
	  so=30*(i*2);
	   sound(so);
	   delay(100);
	  }
	  nosound();
	}

	void deskgfx()
	 {
	  int gdriver = DETECT,gmode;
	  initgraph(&gdriver,&gmode,"C:\\TC\\BGI");

	  int x=0,y=0;
	  x=getmaxx();
	  y=getmaxy();

	  setbkcolor(WHITE);
	  textcolor(RED);

	  int c=x/2;
	  int v=y/2;

	  setcolor(8);
	  line(c-10,v-62,c+10,v-62);
	  line(c-10,v-62,c,v-42);
	  line(c+10,v-62,c,v-42);
	  setfillstyle(2,8);
	  floodfill(c,v-50,8);

	 setcolor(12);
	 box(c-80,v-40,c+80,v+40);
	 setfillstyle(1,12);
	 floodfill(c-40,v-20,12);
	 settextstyle(0,0,7);
	 setcolor(WHITE);
	 outtextxy(c-25,v-20,"A");
	  settextstyle(2,0,0);
	 setcolor(WHITE);
	 outtextxy(c+50,v+30,"area");


	  setcolor(10);
	 box(c-80+170,v-40,c+80+170,v+40);
	 setfillstyle(1,10);
	 floodfill(c+170-40,v,10);
	  settextstyle(0,0,7);
	 setcolor(WHITE);
	 outtextxy(c-25+170,v-20,"M");
	  settextstyle(2,0,0);
	 setcolor(WHITE);
	 outtextxy(c+170,v+30,"Mark Calculator");

	  setcolor(CYAN);
	 box(c-80+340,v-40,c+80+340,v+40);
	 setfillstyle(1,CYAN);
	 floodfill(c+340-40,v,CYAN);
	  settextstyle(0,0,7);
	 setcolor(WHITE);
	 outtextxy(c-25+340,v-20,"C");
	  settextstyle(2,0,0);
	 setcolor(WHITE);
	 outtextxy(c+25+340,v+30,"Converter");

	  setcolor(RED);
	 box(c-80+510,v-40,c+80+510,v+40);
	 setfillstyle(1,RED);
	 floodfill(c+510-40,v,RED);
	  settextstyle(0,0,7);
	 setcolor(WHITE);
	 outtextxy(c-25+510,v-20,"i");
	  settextstyle(2,0,0);
	 setcolor(WHITE);
	 outtextxy(c+50+510,v+30,"Ai");

	  setcolor(YELLOW);
	 box(c-80+680,v-40,c+80+680,v+40);
	 setfillstyle(1,YELLOW);
	 floodfill(c+680-40,v,YELLOW);
	  settextstyle(0,0,7);
	 setcolor(WHITE);
	 outtextxy(c-25+680,v-20,"H");
	  settextstyle(2,0,0);
	 setcolor(WHITE);
	 outtextxy(c+50+680,v+30,"Help");


	  setcolor(5);
	 box(c+850-80,v-40,c+80+850,v+40);
	 setfillstyle(1,5);
	 floodfill(c+850-40,v,5);
	  settextstyle(0,0,7);
	 setcolor(WHITE);
	 outtextxy(c-25+850,v-20,"S!");
	  settextstyle(2,0,0);
	 setcolor(WHITE);
	 outtextxy(c+24+850,v+30,"Shut Down");

	 }

	  void registry(int a);
   void select()
  {

	  int x=0,y=0;
	  x=getmaxx();
	  y=getmaxy();
	     int c=x/2;
	  int v=y/2;
	 int r=0;


       eeee:
       cout<<"welcome\n";
       for(int i=0;i<20;i++)
	{
	int p=getch();
	int l;


	if(p==KEY_RIGHT)
	 {
	   r=r+1;
	   if(r==6)
	    {
	     r=-2;
	     l=-170/8;

	    }
	    setcolor(RED);
	   cout<<p<<"  "<<r<<endl;

	 for(int u=0;u<85/4;u++)
	  {

	   delay(1);
	   l=l+1;
	   cleardevice();

		  setcolor(8);
	  line((x/2)-10,(y/2)-62,(x/2)+10,(y/2)-62);
	  line((x/2)-10,(y/2)-62,x/2,(y/2)-42);
	  line((x/2)+10,(y/2)-62,x/2,(y/2)-42);
	  setfillstyle(2,8);
	  floodfill(x/2,(y/2)-50,8);

	 setcolor(12);
	 box(c-80-8*l,v-40,c+80-8*l,v+40);
	 setfillstyle(1,12);
	 floodfill(c-40-8*l,v-20,12);
	 settextstyle(0,0,7);
	 setcolor(WHITE);
	 outtextxy(c-25-8*l,v-20,"A");
	  settextstyle(2,0,0);
	 setcolor(WHITE);
	 outtextxy(c+50-8*l,v+30,"area");

	  setcolor(10);
	 box(c-80+170-8*l,v-40,c+80+170-8*l,v+40);
	 setfillstyle(1,10);
	 floodfill(c+170-40-8*l,v,10);
	  settextstyle(0,0,7);
	 setcolor(WHITE);
	 outtextxy(c-25+170-8*l,v-20,"M");
	  settextstyle(2,0,0);
	 setcolor(WHITE);
	 outtextxy(c+20+170-8*l,v+30,"Mark Calc..");

	  setcolor(CYAN);
	 box(c-80+340-8*l,v-40,c+80+340-8*l,v+40);
	 setfillstyle(1,CYAN);
	 floodfill(c+340-40-8*l,v,CYAN);
	  settextstyle(0,0,7);
	 setcolor(WHITE);
	 outtextxy(c-25+340-8*l,v-20,"C");
	  settextstyle(2,0,0);
	 setcolor(WHITE);
	 outtextxy(c+25+340-8*l,v+30,"Converter");

	  setcolor(RED);
	 box(c-80+510-8*l,v-40,c+80+510-8*l,v+40);
	 setfillstyle(1,RED);
	 floodfill(c+510-40-8*l,v,RED);
	  settextstyle(0,0,7);
	 setcolor(WHITE);
	 outtextxy(c-25+510-8*l,v-20,"i");
	  settextstyle(2,0,0);
	 setcolor(WHITE);
	 outtextxy(c+50+510-8*l,v+30,"Ai");

	  setcolor(YELLOW);
	 box(c-80+680-8*l,v-40,c+80+680-8*l,v+40);
	 setfillstyle(1,YELLOW);
	 floodfill(c+680-40-8*l,v,YELLOW);
	  settextstyle(0,0,7);
	 setcolor(WHITE);
	 outtextxy(c-25+680-8*l,v-20,"H");
	  settextstyle(2,0,0);
	 setcolor(WHITE);
	 outtextxy(c+50+680-8*l,v+30,"Help");

	  setcolor(5);
	 box(c+850-80-8*l,v-40,c+80+850-8*l,v+40);
	 setfillstyle(1,5);
	 floodfill(c+850-40-8*l,v,5);
	  settextstyle(0,0,7);
	 setcolor(WHITE);
	 outtextxy(c-25+850-8*l,v-20,"S!");
	  settextstyle(2,0,0);
	 setcolor(WHITE);
	 outtextxy(c+25+850-8*l,v+30,"Shut Down");

	   }
	 }

	  else if(p=='s')
	  {
	   registry(r);
	   goto eeee;
	   }
	 }

       }

	void shutdown();

       void registry(int a)
	{
	 if(a==0)
	  {
	   area();
	  }
	  else if(a==1)
	  {
	   mark();
	  }
	  else if(a==2)
	  {
	   converter();
	  } else if(a==3)
	  {
	   ai();
	  }
	  else if(a==4)
	  {
	   help();
	  }


	  else if(a==5)
	   {
	   cout<<"shutting down"  <<endl;
	   delay(1000);
	   shutdown();
	    exit(1);
	   }
	}


	void shutdown()
	 {
	  cleardevice();
	  setbkcolor(12);
	  settextstyle(1,0,4);
	  int x=getmaxx()/2;
	  int y=getmaxy()/2;

	  outtextxy(x-150,y,"Shutting Down");
	  delay(300);

	  for(int i=0;i<5;i++)
	   {

	    settextstyle(2,0,2);
	    outtextxy(x+7*i,y+70,"o");
	    delay(300);
	   }

	  }


      void area()
	{
	 cleardevice();
	 closegraph();
	 clrscr();

	 int x=getmaxx();
	 int y=getmaxy();

	 textcolor(GREEN);
	 for(int k=0;k<5;k++)
	 {
	 gotoxy((x/2)-2,1);

	 cout<<"AREA Calculator"<<endl;

	 gotoxy(x/2,(y/2)-3);
	 cout<<"Make your selection:                 (from 1 to 5)"<<endl;

	 gotoxy(x/2,(y/2));
	 cout<<"Make your selection:1. Rectangle \n 2. Square \n 3. Circle \n 4. Triangle \n 5. Exit\n\n\n :  ";

	 int a;
	 cin>>a;

	      if(a==1)

		    {  clrscr();
		     cout<<"Give me the Diamentions, I'll Give you its Area :\n";

		     cout<<"First give me its length in meter\n";
		     int l=0;
		     cin>>l;
		     cout<<"good.\now tell me its breadth\n";
		     int b=0;
		     cin>>b;
		     cout<<"Thanks.\nnow let me calculate its AREA...in a count of 3 2 1";
		     delay(3000);
		     cout<<"Got it!"<<endl;
		     int ar=0;
		     ar=l*b;
		     cout<<"That rectangle's area is "<<ar<<" square metre\n";
		     if(ar<100)
		      cout<<"Thats just a small area."<<endl;
		      else
		      cout<<"Thats area is HUGE!! Cool "<<endl;
		      getch();
		     cout<<"good Bye ";
		     delay(1000);
		     clrscr();
		  }
	   if(a==2){  cout<<"Tell me a side, I'll tell that square's area\n";
		     cout<<"so,what are you waiting for??\ntell me it's side..\n";
		     int q=0;
		     cin>>q;
		     cout<<"thanks\nnow wait....here comes your area...\n";
		     int aa=q*q;
		     if(q*q<100)
		      cout<<"thats a small square... Its area is just "<<aa<<" square meter\n";
		     else
		      cout<<"Thats what I call a big square...It's area is "<<aa<<" square meter\nI was shocked by seeing its area.\n";
		      getch();
		     cout<<"Bye";
		     delay(1000);
		     clrscr();
		     }
	   if(a==3){  cout<<"Triangles are beautiful,..so if you tell me its height,\ni'll find its area\n";
		     cout<<"So, tell me its height\n";
		     int h=0;
		     cin>>h;
		     if(h>10)
		      cout<<"Thats a tall triangle...cooool...\n";
		     else
		      cout<<"that looks easy...\n";
		     cout<<"now give me its base length...\n";
		     int bb;
		     cin>>bb;
		     float ab;
		     ab=0.5*h*bb;
		     cout<<"thanks man\n";
		     cout<<"its area is "<<ab<<" square metre\n";
		     cout<<"see you later\n";
		     getch();
		     clrscr();
		   }
	   if(a==4){  cout<<"Circles are like a miracle...I love finding its area\n";
		     cout<<"so if you give its radius, i'll find its area\n";
		     int r;
		     cin>>r;
		     cout<<"Bro...I got its area!!\n";
		     float arr;
		     arr=3.14*r*r;
		     if(arr>100)
		      cout<<"Its a BIG one!!";
		     else
		      cout<<"It's just a small one\n";
		     cout<<"Its area is "<<arr<<" metre square\n";
		     cout<<"bye...I'll be here to help you any time\n";
		     getch();
		  }
	   if(a==5){  cout<<"Are you sure you want to exit and leave me here alone :( \npress 1 to exit :[";
		     int o;
		     cin>>o;
		     if(o==1)


		     break;
		     else

		      continue;
		  }
			int gdriver = DETECT,gmode;
	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
	  }

      }

	void mk(int a,int b,int c,int d,int f)
	 {
	  int pp;
	  pp=a+b+c+d+f;
	  if(pp/5<60)
	   {
	    cout<<"i guss he should concentrete some more on his studies....\n";
	    cout<<"He scored just "<<pp/5<<"% marks\nthats too poor\n";
	   }
	  else if(pp/5<80)
	   {
	    cout<<"he is not bad...If he try, he could score more\n";
	    cout<<"he scored good marks of "<<pp/5<<" % ..";
	   }
	  else
	   {
	    cout<<"he is marvioous!! He got a nice brain...he is using it\n";
	    cout<<"He scored "<<pp/5<<" % marks ,which is excelent.\n";
	   }
	   getch();
		int gdriver = DETECT,gmode;
	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
	 }



	 void mk(int a,int b,int c,int d,int f,int e)
	 {
	  int pp=0;
	  pp=a+b+c+d+f+e;
	  if(pp/6<60)
	   {
	    cout<<"i guss he should concentrete some more on his studies....\n";
	    cout<<"He scored just "<<pp/6<<"% marks\nthats too poor\n";
	   }
	  else if(pp/6<80)
	   {
	    cout<<"he is not bad...If he try, he could score more\n";
	    cout<<"he scored good marks of "<<pp/6<<" % ..";
	   }
	  else
	   {
	    cout<<"he is marvioous!! He got a nice brain...he is using it\n";
	    cout<<"He scored "<<pp/6<<" % marks ,which is excelent.\n";
	   }
	   getch();
		int gdriver = DETECT,gmode;
	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
	 }


       void mark()
	{
	 cleardevice();
	 closegraph();
	 clrscr();

	 textcolor(RED);
	 cout<<"I'm here to calculate the marks of that student...\n\n";
	 cout<<"First of all, tell me his name\n";
	 long char n='yy';
	 cin>>n;
	 cout<<"nice name!\n";
	 cout<<"In which class does he study?\n";
	 int cc=0;
	 cin>>cc;
	 if(cc>10)
	   {
	    cout<<"so he got 5 subjects ..right?\n";
	    cout<<"Now enter his marks out of hundred in english\n";
	    int eng=0;
	    cin>>eng;
	    cout<<"maths\n";
	    int mhs=0;
	    cin>>mhs;
	    cout<<"physics\n";
	    int phy=0;
	    cin>>phy;
	    cout<<"now, how much did he score in chemistry?\n";
	    int che=0;
	    cin>>che;
	    cout<<"now at last,his marks in computer or biology...\n";
	    int cb=0;
	    cin>>cb;
	    cout<<"now let me calculate his average marks...lets see..\n";
	    mk(mhs,cb,che,phy,eng);
	   }

	   else if(cc<=10)
	   {
	    cout<<"so he got 6 subjects ..right?\n";
	    cout<<"Now enter his marks out of hundred in english\n";
	    int eng=0;
	    cin>>eng;
	    cout<<"malayalam";
	    int ml=0;
	    cin>>ml;
	    cout<<"maths\n";
	    int mhs=0;
	    cin>>mhs;
	    cout<<"science\n";
	    int sc=0;
	    cin>>sc;
	    cout<<"now, how much did he score in Social?\n";
	    int so=0;
	    cin>>so;
	    cout<<"now at last,his marks in GK...\n";
	    int gk=0;
	    cin>>gk;
	    cout<<"now let me calculate his average marks...lets see..\n";
	    mk(mhs,eng,ml,gk,so,sc);
	   }

	 }


		void length()
	 {
	  int d=0;
	  clrscr();
	  cout<<"1. m to feet\n2. feet to m\n3. inch to feet\n4. feet to inch\n";
	  int a=0;
	  cin>>a;
	  if(a==1)
	   {
	    cout<<"dist in m\n";
	    cin>>d;
	    cout<<d<<" m= "<<3.33*d<<" Feet\n";
	   }

	  else if(a==2)
	   {
	    cout<<"dist in feet\n";
	    cin>>d;
	    cout<<d<<" feet= "<<d/3.33<<" m\n";
	   }
	  else if(a==3)
	   {
	    cout<<"dist in inch\n";
	    cin>>d;
	    cout<<d<<" inch= "<<d/12<<" Feet\n";
	   }

	  else if(a==4)
	   {
	    cout<<"dist in feet\n";
	    cin>>d;
	    cout<<d<<" feet= "<<12*d<<" inch\n";
	   }
	   else
	    cout<<"invalid entry!!\n";

      }


      void tim()
       {
	int s=0,t=0;
	clrscr();

	cout<<"TIME converter:\n 1. h to m\n 2. h to s\n 3. m to h \n 4. m to s \n 5. s to h \n 6. s to m\n 7. exit\n";
	cin>>t;
	if(t==1)
	 {
	  cout<<"Enter time in H\n";
	  cin>>s;
	  cout<<s<<" H = "<<s*60<<" min\n";
	 }

	else if(t==2)
	 {
	  cout<<"Enter time in H\n";
	  cin>>s;
	  cout<<s<<" H = "<<s*60*60<<" sec\n";
	 }


	else if(t==3)
	 {
	  cout<<"Enter time in Min\n";
	  cin>>s;
	  cout<<s<<" Min = "<<s/60<<" H\n";
	 }


	else if(t==4)
	 {
	  cout<<"Enter time in Min\n";
	  cin>>s;
	  cout<<s<<" Min = "<<s*60<<" sec\n";
	 }


	else if(t==5)
	 {
	  cout<<"Enter time in sec\n";
	  cin>>s;
	  cout<<s<<" sec = "<<s/(60*60)<<" H\n";
	 }


	else if(t==6)
	 {
	  cout<<"Enter time in Sec\n";
	  cin>>s;
	  cout<<s<<" Sec = "<<s/60<<" min\n";
	 }
	 else
	 cout<<"invalid entery";
       }



	 void converter()
	  {
	   cleardevice();
	   closegraph();
	   clrscr();
	   textcolor(CYAN);
	   int x=getmaxx();
	   int y=getmaxy();

	   for(int i=0;i<5;i++)
	   {
	   gotoxy(x/2,2);
	   cout<<"converter"<<endl;

	   gotoxy(x/2,(y/2)-3);
	   cout<<"1. Distance\n\n2. Time \n\n3. exit";
	   int u=0;
	   cin>>u;
	   if(u==1)
	    {
	     length();
	    }
	   if(u==2)
	    {
	     tim();
	    }
	   else
	    break;
	   }
		int gdriver = DETECT,gmode;
	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
	 }

	 void ai()
	  {
	   cleardevice();
	   closegraph();
	   clrscr();
	  long char p,f,o;
          char n[100];
	  int a=0;

	   cout<<"Hi...I'm Nikki.\n";
	   cout<<"whats your name?\n";
	   gets(n);
	   cout<<n<<" .Nice name of yours.\n";
	   cout<<"where do you live "<<n<<endl;
	   cin>>p;
	   cout<<"how far is "<<p<<" from here, "<<n<<" ?"<<endl;
	   cin>>a;
	   cout<<"thats a bit far."<<endl;
	   cout<<"who is your best friend,"<<n<<" ?"<<endl;
	   cin>>f;
	   cout<<n<<", had "<<f<<" ever visited your house at "<<p<<" ?"<<endl;
	   cin>>o;
	   cout<<"cool"<<endl;
	   cout<<"see you later.Bye."<<endl;
	   getch();
	   clrscr();
		int gdriver = DETECT,gmode;
	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");

       }

       void null()
       {
		   closegraph();
		   clrscr();
		   cout<<"Null"<<endl;
			int gdriver = DETECT,gmode;
	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
       }


       void help()
       {
       closegraph();
       clrscr();
       textbackground(WHITE);
       textcolor(12);

       cout<<".........................HELP.........................\n\n\n\n";
       cout<<"Use RIGHT ARROW to browse between apps.\n";
       cout<<"Use 'S' for selecting an app.\n\n";
       cout<<"              ........DISCLAIMER........\n\n\n";
       cout<<"This is the prototype of GUI based Operating System \n";
       cout<<"running on DOS base.   NOT FOR COMMERCIAL USE!!\n\n";
       cout<<"This OS Shell was developed as part of class 12 C++ project\n\n";
       cout<<"Developed By :\n\n";
       cout<<"     Yadev Jayachandran\n\n";
       
       getch();
	int gdriver = DETECT,gmode;
	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");


       }


       void main()
	{
	int s;
	 clrscr();
	 boot();
	 bootlog();
	 logons();
	 delay(1000);
	 s=logpass();
	 if(s==0)
	  {
	  exit(1);
	  }
	  cout<<"logged in";
	  bootsound();

	  for(int i=0;i<5;i++)
	  {
	   deskgfx();
	   select();
	  }
	 getch();
	}


















