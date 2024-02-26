 #include<iostream>
#include<graphics.h>
#include"conio.h" //Header file used for accessing getch() function 
using namespace std;
class project
{
	public:
		void welcome();// TO DISPLAY HELLO MESSAGE
		void display_arrangement();// THETER SITTING ARRANGEMENT
};
class Bresenham_circle //BRESENHAM CIRCLE ALGORITHM USED FOR DRAWING O IN HELLO
{
	public:
	int x,y,xi,yi,del,sig1,sig2,r,limit;
	void Circle(int,int,int);	
	void mh();
	void md();
	void mv();
};
void Bresenham_circle::Circle(int x,int y,int r)
{
	limit=0;
    xi=0;
  	yi=r;
  	del=2*(1-r);
	while (yi>=limit)
 	{
    	putpixel(x+xi,y+yi,YELLOW);
   		putpixel(x+xi,y-yi,YELLOW);
  		putpixel(x-xi,y+yi,YELLOW);
    	putpixel(x-xi,y-yi,YELLOW);
    	delay(40);
    
   		if(del<0)
    	{
       		sig1=((2*del)+(2*yi)-1);
       		if(sig1<=0)
       		{
         		mh();
       		}
       		else
       		{
         		md();
    	   	}
     	}
   		else if(del>0)
       	{
        	sig2=((2*del)-(2*xi)-1);
        
       		if(sig2<=0)
        	{
         		md();
        	}
        	else
        	{
         		mv();
        	}
       	}
       	else
       	{
        	md();
      	}		
	   	
	}
}       
void Bresenham_circle::mh()
{
    xi=xi+1;
    del=del+(2*xi)+1;
} 
void Bresenham_circle::mv()
{
    yi=yi-1;
    del=del-(2*yi)+1;
}    
void Bresenham_circle::md()
{
    xi=xi+1;
    yi=yi-1;
    del=del+(2*xi)-(2*yi)+2;
}


void project::welcome()// HELLO MESSAGE FUNCTION
{	
	initwindow(640,430);
	// TEXT IN WINDOW
	outtextxy(10,20,"Loading......");
	// FIRST LOADING LINE
	for(int i=0;i<640;i++)
	{
		putpixel(i,40,YELLOW);
		delay(1);
	}
	// BODY OF MAN
	setcolor(GREEN);
	line(250,150,250,250);
	//LEGS OF MAN
	setcolor(LIGHTGRAY);
	line(250,250,200,300);
	line(250,250,300,300);
	//HANDS OF MAN
	setcolor(GREEN);
	line(175,175,250,200);
	line(325,175,250,200);
	//HEAD OF MAN
	setcolor(WHITE);
	circle(250,110,40);
	//board in right hand (boundary)
	setcolor(CYAN);
	line(325,100,325,175);
	line(325,100,490,100);
	line(325,150,490,150);
	line(490,100,490,150);
	
	//HELLO MESSAGE IN BOX
	setcolor(YELLOW);
	//H
	for(int i=113;i<=137;i++)
	{
		putpixel(365,i,YELLOW);
		delay(20);
	}
	
	for(int i=365;i<=375;i++)
	{
		putpixel(i,125,YELLOW);
		delay(20);
	}
		for(int i=113;i<=137;i++)
	{
		putpixel(375,i,YELLOW);
		delay(20);
	}
	//E
	for(int i=113;i<=137;i++)
	{
		putpixel(385,i,YELLOW);
		delay(20);
	}
	
	for(int i=385;i<=395;i++)
	{
		putpixel(i,113,YELLOW);
		delay(20);
	}
	
	for(int i=385;i<=395;i++)
	{
		putpixel(i,125,YELLOW);
		delay(20);
	}
	
	for(int i=385;i<=395;i++)
	{
		putpixel(i,137,YELLOW);
		delay(20);
	}
	
	//L

	for(int i=113;i<=137;i++)
	{
		putpixel(405,i,YELLOW);
		delay(20);
	}
	
	for(int i=405;i<=415;i++)
	{
		putpixel(i,137,YELLOW);
		delay(20);
	}
	//L
	
	for(int i=113;i<=137;i++)
	{
		putpixel(425,i,YELLOW);
		delay(20);
	}
	
	for(int i=425;i<=435;i++)
	{
		putpixel(i,137,YELLOW);
		delay(20);
	}
	//O
	Bresenham_circle obj;
	obj.Circle(457,125,12);
	
	//end line
	setcolor(WHITE);
	//TEXT FOR LOADING NEXT WINDOW
	outtextxy(10,355,"Loading Next Window......");
	for(int i=0;i<640;i++)
	{
		putpixel(i,380,YELLOW);
		delay(1);
	}
	closegraph();
	
}
void project::display_arrangement()// ACTUAL THETER ARRANGEMENT
{
	initwindow(1000,600);
	//border
	line(50,50,950,50);
	line(950,50,950,550);
	line(50,550,950,550);
	line(50,50,50,550);
	//enterence
	line(150,50,150,90);
	line(350,90,150,90);
	line(350,90,350,50);
	//exit
	line(150,550,150,510);
	line(350,510,150,510);
	line(350,510,350,550);
	//Printing Reclinear seat
	setcolor(YELLOW);
	// A Row
	int y1=130,yinc=0;
	int i=1;
	int x1=100;	
	while(i<=22)
	{
		rectangle(x1,y1,x1+25,y1+25);
		i++;
		x1+=35;
	}
	// B Row
	i=1,x1=100,y1=165;
	while(i<=22)
	{
		rectangle(x1,y1,x1+25,y1+25);
		i++;
		x1+=35;
	}
	setcolor(LIGHTBLUE);
	// displaying Prime seats 
	// C Row
	y1=240;
 	i=1;
	x1=170;
	while(i<=18)
	{
		if (x1!=240)// x1=240 is pixel for 3rd column so this displays seat other than 3rd column
		{	
			if(x1!=695)// x1=695 is pixel for 16th column so this displays seat other than 3rd and 16th column
			{
			rectangle(x1,y1,x1+25,y1+25);
			}
		}
		i++;
		x1+=35;
	}
	// D Row
	i=1,x1=170,y1=275;
	while(i<=18)
	{
		if (x1!=240)// x1=240 is pixel for 3rd column so this displays seat other than 3rd column
		{	
			if(x1!=695)// x1=695 is pixel for 16th column so this displays seat other than 3rd and 16th column
			{
				rectangle(x1,y1,x1+25,y1+25);
			}
		}
		i++;
		x1+=35;
	}
	i=1,x1=170,y1=310;
	// E Row
	while(i<=18)
	{
		if (x1!=240)// x1=240 is pixel for 3rd column so this displays seat other than 3rd column
		{	
			if(x1!=695)// x1=695 is pixel for 16th column so this displays seat other than 3rd and 16th column
			{
				rectangle(x1,y1,x1+25,y1+25);
			}
		}
		i++;
		x1+=35;
	}
	// F Row
	i=1,x1=170,y1=345;
	while(i<=18)
	{
		if (x1!=240)// x1=240 is pixel for 3rd column so this displays seat other than 3rd column
		{	
			if(x1!=695)// x1=695 is pixel for 16th column so this displays seat other than 3rd and 16th column
			{
				rectangle(x1,y1,x1+25,y1+25);
			}
		}
		i++;
		x1+=35;
	}
	//G 
	i=1,x1=170,y1=380;
	while(i<=18)
	{
		if (x1!=240)// x1=240 is pixel for 3rd column so this displays seat other than 3rd column
		{	
			if(x1!=695)// x1=695 is pixel for 16th column so this displays seat other than 3rd and 16th column
			{
				rectangle(x1,y1,x1+25,y1+25);
			}
		}
		i++;
		x1+=35;
	}
	
	//TEXT IN SETTING ARANGEMENT WINDOW
	setcolor(LIGHTGREEN);
	settextstyle(8,0,3);
	outtextxy(210,60,"ENTER");
	outtextxy(210,520,"EXIT");
	//ROW NAMING
	setcolor(GREEN);
	settextstyle(8,0,2);
	outtextxy(70,132,"A");
	outtextxy(70,167,"B");
	outtextxy(140,242,"C");
	outtextxy(140,277,"D");
	outtextxy(140,312,"E");
	outtextxy(140,347,"F");
	outtextxy(140,382,"G");
	//COLUMN NUMBRING RECLINER SEAT
	settextstyle(8,0,1);
	setcolor(12);
	outtextxy(105,110,"1");
	outtextxy(140,110,"2");
	outtextxy(175,110,"3");
	outtextxy(210,110,"4");
	outtextxy(245,110,"5");
	outtextxy(280,110,"6");
	outtextxy(315,110,"7");
	outtextxy(350,110,"8");
	outtextxy(385,110,"9");
	outtextxy(415,110,"10");
	outtextxy(455,110,"11");
	outtextxy(490,110,"12");
	outtextxy(525,110,"13");
	outtextxy(560,110,"14");
	outtextxy(595,110,"15");
	outtextxy(630,110,"16");
	outtextxy(665,110,"17");
	outtextxy(700,110,"18");
	outtextxy(735,110,"19");
	outtextxy(770,110,"20");
	outtextxy(805,110,"21");
	outtextxy(840,110,"22");
	//COLUMN NUMBRING PRIME SEAT
	outtextxy(177,410,"1");
	outtextxy(212,410,"2");
	outtextxy(282,410,"3");
	outtextxy(317,410,"4");
	outtextxy(352,410,"5");
	outtextxy(387,410,"6");
	outtextxy(422,410,"7");
	outtextxy(457,410,"8");
	outtextxy(492,410,"9");
	outtextxy(527,410,"10");
	outtextxy(562,410,"11");
	outtextxy(597,410,"12");
	outtextxy(632,410,"13");
	outtextxy(667,410,"14");
	outtextxy(737,410,"15");
	outtextxy(772,410,"16");
	getch();
}
int main()
{	//displaying welcome message
	project obj;
	obj.welcome();
	
	// main programs starts
	string ch,ch1,ch2,row;
	int column,cnt2=0,cnt3=0,o=0,rb=0,pb=0,rc=0,pc=0; // cnt2 varialbes ensures that theter arrangement is shown only once
	int a[22],b[22],c[16],d[16],e[16],f[16],g[16];
	int x,y,z,w,q,h,p;
	// VARIALBES FOR CHECKING AVAILABILITY OF SEATS IN 'A' ROW
	for( x=1;x<=22;x++)
	{	a[x]=0;	} // 0 means available for booking

	// VARIALBES FOR CHECKING AVAILABILITY OF SEATS IN 'B' ROW
	for( y=1;y<=22;y++)
	{	b[y]=0;	} // 0 means available for booking
	
	// VARIALBES FOR CHECKING AVAILABILITY OF SEATS IN 'C' ROW
	for( z=1;z<=16;z++)
	{	c[z]=0;	} // 0 means available for booking
	
	// VARIALBES FOR CHECKING AVAILABILITY OF SEATS IN 'D' ROW
	for( w=1;w<=16;w++)
	{	d[w]=0;	} // 0 means available for booking
	
	// VARIALBES FOR CHECKING AVAILABILITY OF SEATS IN 'E' ROW
	for( q=1;q<=16;q++)
	{	e[q]=0;	} // 0 means available for booking
	
	// VARIALBES FOR CHECKING AVAILABILITY OF SEATS IN 'F' ROW
	for( h=1;h<=16;h++)
	{	f[h]=0;	} // 0 means available for booking
	
	// VARIALBES FOR CHECKING AVAILABILITY OF SEATS IN 'G' ROW
	for( p=1;p<=16;p++)
	{	g[p]=0;	} // 0 means available for booking
	
	cout<<"\t\tWELCOME TO BOOK YOUR SHOW";
	
	a:
		
		cout<<"\n\tMenu";
		cout<<"\n1.Book Tickets\n2.Cancel Book Tickets\n3.Exit\n";
		cout<<"\nEnter your choice : ";
		cin>>ch;
		if (cnt2==0)// ensures that sitting arrangement is displayed only once
		{
			obj.display_arrangement();cnt2++;
		}
		int cnt1=48;
		if (ch.length()>1)// logic to check whether entered string is character or not
		{
			cout<<"\nYou Entered Non-Integer Value OR Value Out-Of-Scope \nKindly Enter Correct Value\n\n ";goto a;
		}
		else
		{		
			switch((int)ch[0])	// to convert index at 0th position to ASCII value
			{	// ASCII vaue of 1,2 and 3 are 49,50,51 respectively
				case 49:	
						b:
						cout<<"\n\t\tPress\n\t1.Book Tickets\n\t2.Go Back\n";
						cout<<"\nRecliner seat cost 200 INR and Prime seat cost 150 INR\n";
						cout<<"\nEnter your choice : ";
						
						cin>>ch1;
						if (ch.length()>1)
						{
							cout<<"\nYou Entered Non-Integer Value OR Value Out-Of-Scope\nKindly Enter correct Value\n\n ";goto b;
						}
						else
						{
							switch((int)ch1[0])	
							{
								case 49:
										c:
										cout<<"\nEnter number of Tickets ( UPTO 9 ) :";
										cin>>ch2;
										if (ch2.length()>1)// logic to check whether entered string is character or not
										{
											cout<<"\nYou Entered Non-Integer Value OR Value Out-Of-Scope\n Kindly Enter correct Value\n\n";goto c;
										}
										else
										{
											if((int)ch2[0]>=49 &&( int)ch2[0]<=57) // checks whether ch2 is in between 1 to 9
											{
												//no of seats
												for(int i=49;i<=(int)ch2[0];i++) // starting from 49 as 49 is ascii code for 1 
												{	d:
													cout<<"\nEnter Row :";
													cin>>row;
													if (row.length()>1)
													{
														cout<<"\nInvalid Row\nEnter Proper label for Row\n\n ";goto d;
													}
													else
													{
														if(((int)row[0]>=65 &&(int)row[0]<=71) || ((int)row[0]>=97 &&(int)row[0]<=103))
														{
															// actual color filling using floodfill() function
																for(int j=49;i<=(int)ch2[0];j++)
																{	e:
																	cout<<"\nEnter Column in INTEGER : ";
																	cin>>column;
																	if(column<=22 && column>=1)
																	{
																		
																		//cnt1 checks total number of seats booked
																		// fills colour in 'A' row according to choosen seat
																		
																		if(((int)row[0]==65) ||((int)row[0]==97))
																		{	setfillstyle(LTSLASH_FILL,LIGHTGREEN);
																			
																			if(column==1 && a[1]==0){floodfill(115,140,YELLOW);a[1]=1;cnt3++;rb++;}
																			else if(column==2 && a[2]==0 ){floodfill(150,140,YELLOW);a[2]=1;cnt3++;rb++;}
																			else if(column==3 && a[3]==0){floodfill(185,140,YELLOW);a[3]=1;cnt3++;rb++;}
																			else if(column==4 && a[4]==0){floodfill(220,140,YELLOW);a[4]=1;cnt3++;rb++;}
																			else if(column==5 && a[5]==0){floodfill(255,140,YELLOW);a[5]=1;cnt3++;rb++;}
																			else if(column==6 && a[6]==0){floodfill(290,140,YELLOW);a[6]=1;cnt3++;rb++;}
																			else if(column==7 && a[7]==0){floodfill(325,140,YELLOW);a[7]=1;cnt3++;rb++;}
																			else if(column==8 && a[8]==0){floodfill(360,140,YELLOW);a[8]=1;cnt3++;rb++;}
																			else if(column==9 && a[9]==0){floodfill(395,140,YELLOW);a[9]=1;cnt3++;rb++;}
																			else if(column==10 && a[10]==0){floodfill(430,140,YELLOW);a[10]=1;cnt3++;rb++;}
																			else if(column==11 && a[11]==0){floodfill(465,140,YELLOW);a[11]=1;cnt3++;rb++;}
																			else if(column==12 && a[12]==0){floodfill(500,140,YELLOW);a[12]=1;cnt3++;rb++;}
																			else if(column==13 && a[13]==0){floodfill(535,140,YELLOW);a[13]=1;cnt3++;rb++;}
																			else if(column==14 && a[14]==0){floodfill(570,140,YELLOW);a[14]=1;cnt3++;rb++;}
																			else if(column==15 && a[15]==0){floodfill(605,140,YELLOW);a[15]=1;cnt3++;rb++;}
																			else if(column==16 && a[16]==0){floodfill(640,140,YELLOW);a[16]=1;cnt3++;rb++;}
																			else if(column==17 && a[17]==0){floodfill(675,140,YELLOW);a[17]=1;cnt3++;rb++;}
																			else if(column==18 && a[18]==0){floodfill(710,140,YELLOW);a[18]=1;cnt3++;rb++;}
																			else if(column==19 && a[19]==0){floodfill(745,140,YELLOW);a[19]=1;cnt3++;rb++;}
																			else if(column==20 && a[20]==0){floodfill(780,140,YELLOW);a[20]=1;cnt3++;rb++;}
																			else if(column==21 && a[21]==0){floodfill(815,140,YELLOW);a[21]=1;cnt3++;rb++;}
																			else if(column==22 && a[22]==0){floodfill(850,140,YELLOW);a[22]=1;cnt3++;rb++;}
																			else
																			{
																				cout<<"\nThis Ticket is already Booked\nSelcet Another\n";goto d;
																			}
																		}
																		// fills colour in 'B' row according to choosen seat
																		if(((int)row[0]==66) ||((int)row[0]==98))
																		{	setfillstyle(LTSLASH_FILL,LIGHTGREEN);
																			if(column==1 && b[1]==0){floodfill(115,140,YELLOW);b[1]=1;cnt3++;rb++;}
																			else if(column==2 && b[2]==0 ){floodfill(150,140+35,YELLOW);b[2]=1;cnt3++;rb++;}
																			else if(column==3 && b[3]==0){floodfill(185,140+35,YELLOW);b[3]=1;cnt3++;rb++;}
																			else if(column==4 && b[4]==0){floodfill(220,140+35,YELLOW);b[4]=1;cnt3++;rb++;}
																			else if(column==5 && b[5]==0){floodfill(255,140+35,YELLOW);b[5]=1;cnt3++;rb++;}
																			else if(column==6 && b[6]==0){floodfill(290,140+35,YELLOW);b[6]=1;cnt3++;rb++;}
																			else if(column==7 && b[7]==0){floodfill(325,140+35,YELLOW);b[7]=1;cnt3++;rb++;}
																			else if(column==8 && b[8]==0){floodfill(360,140+35,YELLOW);b[8]=1;cnt3++;rb++;}
																			else if(column==9 && b[9]==0){floodfill(395,140+35,YELLOW);b[9]=1;cnt3++;rb++;}
																			else if(column==10 && b[10]==0){floodfill(430,140+35,YELLOW);b[10]=1;cnt3++;rb++;}
																			else if(column==11 && b[11]==0){floodfill(465,140+35,YELLOW);b[11]=1;cnt3++;rb++;}
																			else if(column==12 && b[12]==0){floodfill(500,140+35,YELLOW);b[12]=1;cnt3++;rb++;}
																			else if(column==13 && b[13]==0){floodfill(535,140+35,YELLOW);b[13]=1;cnt3++;rb++;}
																			else if(column==14 && b[14]==0){floodfill(570,140+35,YELLOW);b[14]=1;cnt3++;rb++;}
																			else if(column==15 && b[15]==0){floodfill(605,140+35,YELLOW);b[15]=1;cnt3++;rb++;}
																			else if(column==16 && b[16]==0){floodfill(640,140+35,YELLOW);b[16]=1;cnt3++;rb++;}
																			else if(column==17 && b[17]==0){floodfill(675,140+35,YELLOW);b[17]=1;cnt3++;rb++;}
																			else if(column==18 && b[18]==0){floodfill(710,140+35,YELLOW);b[18]=1;cnt3++;rb++;}
																			else if(column==19 && b[19]==0){floodfill(745,140+35,YELLOW);b[19]=1;cnt3++;rb++;}
																			else if(column==20 && b[20]==0){floodfill(780,140+35,YELLOW);b[20]=1;cnt3++;rb++;}
																			else if(column==21 && b[21]==0){floodfill(815,140+35,YELLOW);b[21]=1;cnt3++;rb++;}
																			else if(column==22 && b[22]==0){floodfill(850,140+35,YELLOW);b[22]=1;cnt3++;rb++;}
																			else
																			{
																				cout<<"\nThis Ticket is already Booked\nSelcet Another\n";goto d;
																			}
																		}
																		// fills colour in 'C' row according to choosen seat
																		if(((int)row[0]==67) ||((int)row[0]==99))
																		{	setfillstyle(LTSLASH_FILL,LIGHTGREEN);
																			if(column==1 && c[1]==0){floodfill(180,255,LIGHTBLUE);c[1]=1;cnt3++;pb++;}
																			else if(column==2 && c[2]==0 ){floodfill(215,255,LIGHTBLUE);c[2]=1;cnt3++;pb++;}
																			else if(column==3 && c[3]==0){floodfill(250+35,255,LIGHTBLUE);c[3]=1;cnt3++;pb++;}
																			else if(column==4 && c[4]==0){floodfill(285+35,255,LIGHTBLUE);c[4]=1;cnt3++;pb++;}
																			else if(column==5 && c[5]==0){floodfill(320+35,255,LIGHTBLUE);c[5]=1;cnt3++;pb++;}
																			else if(column==6 && c[6]==0){floodfill(355+35,255,LIGHTBLUE);c[6]=1;cnt3++;pb++;}
																			else if(column==7 && c[7]==0){floodfill(390+35,255,LIGHTBLUE);c[7]=1;cnt3++;pb++;}
																			else if(column==8 && c[8]==0){floodfill(425+35,255,LIGHTBLUE);c[8]=1;cnt3++;pb++;}
																			else if(column==9 && c[9]==0){floodfill(460+35,255,LIGHTBLUE);c[9]=1;cnt3++;pb++;}
																			else if(column==10 && c[10]==0){floodfill(495+35,255,LIGHTBLUE);c[10]=1;cnt3++;pb++;}
																			else if(column==11 && c[11]==0){floodfill(530+35,255,LIGHTBLUE);c[11]=1;cnt3++;pb++;}
																			else if(column==12 && c[12]==0){floodfill(565+35,255,LIGHTBLUE);c[12]=1;cnt3++;pb++;}
																			else if(column==13 && c[13]==0){floodfill(600+35,255,LIGHTBLUE);c[13]=1;cnt3++;pb++;}
																			else if(column==14 && c[14]==0){floodfill(635+35,255,LIGHTBLUE);c[14]=1;cnt3++;pb++;}
																			else if(column==15 && c[15]==0){floodfill(670+70,255,LIGHTBLUE);c[15]=1;cnt3++;pb++;}
																			else if(column==16 && c[16]==0){floodfill(740+35,255,LIGHTBLUE);c[16]=1;cnt3++;pb++;}
																			else
																			{	if(column>=1 && column<=16)
																				{
																					cout<<"\nThis Ticket is already Booked\nSelcet Another\n";goto d;
																				}
																				else
																				{
																					cout<<"\nEnter correct column\n";goto d;
																				}	
																			}
																		}
																		// fills colour in 'D' row according to choosen seat
																		if(((int)row[0]==68) ||((int)row[0]==100))
																		{	setfillstyle(LTSLASH_FILL,LIGHTGREEN);
																			if(column==1 && d[1]==0){floodfill(180,255+35,LIGHTBLUE);d[1]=1;cnt3++;pb++;}
																			else if(column==2 && d[2]==0 ){floodfill(215,255+35,LIGHTBLUE);d[2]=1;cnt3++;pb++;}
																			else if(column==3 && d[3]==0){floodfill(250+35,255+35,LIGHTBLUE);d[3]=1;cnt3++;pb++;}
																			else if(column==4 && d[4]==0){floodfill(285+35,255+35,LIGHTBLUE);d[4]=1;cnt3++;pb++;}
																			else if(column==5 && d[5]==0){floodfill(320+35,255+35,LIGHTBLUE);d[5]=1;cnt3++;pb++;}
																			else if(column==6 && d[6]==0){floodfill(355+35,255+35,LIGHTBLUE);d[6]=1;cnt3++;pb++;}
																			else if(column==7 && d[7]==0){floodfill(390+35,255+35,LIGHTBLUE);d[7]=1;cnt3++;pb++;}
																			else if(column==8 && d[8]==0){floodfill(425+35,255+35,LIGHTBLUE);d[8]=1;cnt3++;pb++;}
																			else if(column==9 && d[9]==0){floodfill(460+35,255+35,LIGHTBLUE);d[9]=1;cnt3++;pb++;}
																			else if(column==10 && d[10]==0){floodfill(495+35,255+35,LIGHTBLUE);d[10]=1;cnt3++;pb++;}
																			else if(column==11 && d[11]==0){floodfill(530+35,255+35,LIGHTBLUE);d[11]=1;cnt3++;pb++;}
																			else if(column==12 && d[12]==0){floodfill(565+35,255+35,LIGHTBLUE);d[12]=1;cnt3++;pb++;}
																			else if(column==13 && d[13]==0){floodfill(600+35,255+35,LIGHTBLUE);d[13]=1;cnt3++;pb++;}
																			else if(column==14 && d[14]==0){floodfill(635+35,255+35,LIGHTBLUE);d[14]=1;cnt3++;pb++;}
																			else if(column==15 && d[15]==0){floodfill(670+70,255+35,LIGHTBLUE);d[15]=1;cnt3++;pb++;}
																			else if(column==16 && d[16]==0){floodfill(740+35,255+35,LIGHTBLUE);d[16]=1;cnt3++;pb++;}
																			else
																			{	
																				if(column>=1 && column<=16)
																				{
																					cout<<"\nThis Ticket is already Booked\nSelcet Another\n";goto d;
																				}
																				else
																				{
																					cout<<"\nEnter correct column\n";goto d;
																				}	
																			}
																		}
																		// fills colour in 'E' row according to choosen seat
																		if(((int)row[0]==69) ||((int)row[0]==101))
																		{	setfillstyle(LTSLASH_FILL,LIGHTGREEN);
																			if(column==1 && e[1]==0){floodfill(180,255+35+35,LIGHTBLUE);e[1]=1;cnt3++;pb++;}
																			else if(column==2 && e[2]==0 ){floodfill(215,255+35+35,LIGHTBLUE);e[2]=1;cnt3++;pb++;}
																			else if(column==3 && e[3]==0){floodfill(250+35,255+35+35,LIGHTBLUE);e[3]=1;cnt3++;pb++;}
																			else if(column==4 && e[4]==0){floodfill(285+35,255+35+35,LIGHTBLUE);e[4]=1;cnt3++;pb++;}
																			else if(column==5 && e[5]==0){floodfill(320+35,255+35+35,LIGHTBLUE);e[5]=1;cnt3++;pb++;}
																			else if(column==6 && e[6]==0){floodfill(355+35,255+35+35,LIGHTBLUE);e[6]=1;cnt3++;pb++;}
																			else if(column==7 && e[7]==0){floodfill(390+35,255+35+35,LIGHTBLUE);e[7]=1;cnt3++;pb++;}
																			else if(column==8 && e[8]==0){floodfill(425+35,255+35+35,LIGHTBLUE);e[8]=1;cnt3++;pb++;}
																			else if(column==9 && e[9]==0){floodfill(460+35,255+35+35,LIGHTBLUE);e[9]=1;cnt3++;pb++;}
																			else if(column==10 && e[10]==0){floodfill(495+35,255+35+35,LIGHTBLUE);e[10]=1;cnt3++;pb++;}
																			else if(column==11 && e[11]==0){floodfill(530+35,255+35+35,LIGHTBLUE);e[11]=1;cnt3++;pb++;}
																			else if(column==12 && e[12]==0){floodfill(565+35,255+35+35,LIGHTBLUE);e[12]=1;cnt3++;pb++;}
																			else if(column==13 && e[13]==0){floodfill(600+35,255+35+35,LIGHTBLUE);e[13]=1;cnt3++;pb++;}
																			else if(column==14 && e[14]==0){floodfill(635+35,255+35+35,LIGHTBLUE);e[14]=1;cnt3++;pb++;}
																			else if(column==15 && e[15]==0){floodfill(670+70,255+35+35,LIGHTBLUE);e[15]=1;cnt3++;pb++;}
																			else if(column==16 && e[16]==0){floodfill(740+35,255+35+35,LIGHTBLUE);e[15]=1;cnt3++;pb++;}
																			else
																			{	
																				if(column>=1 && column<=16)
																				{
																					cout<<"\nThis Ticket is already Booked\nSelcet Another\n";goto d;
																				}
																				else
																				{
																					cout<<"\nEnter correct column\n";goto d;
																				}	
																			}
																		}
																		// fills colour in 'F' row according to choosen seat
																		if(((int)row[0]==70) ||((int)row[0]==102))
																		{	setfillstyle(LTSLASH_FILL,LIGHTGREEN);
																			if(column==1 && f[1]==0){floodfill(180,255+35+35+35,LIGHTBLUE);f[1]=1;cnt3++;pb++;}
																			else if(column==2 && f[2]==0 ){floodfill(215,255+35+35+35,LIGHTBLUE);f[2]=1;cnt3++;pb++;}
																			else if(column==3 && f[3]==0){floodfill(250+35,255+35+35+35,LIGHTBLUE);f[3]=1;cnt3++;pb++;}
																			else if(column==4 && f[4]==0){floodfill(285+35,255+35+35+35,LIGHTBLUE);f[4]=1;cnt3++;pb++;}
																			else if(column==5 && f[5]==0){floodfill(320+35,255+35+35+35,LIGHTBLUE);f[5]=1;cnt3++;pb++;}
																			else if(column==6 && f[6]==0){floodfill(355+35,255+35+35+35,LIGHTBLUE);f[6]=1;cnt3++;pb++;}
																			else if(column==7 && f[7]==0){floodfill(390+35,255+35+35+35,LIGHTBLUE);f[7]=1;cnt3++;pb++;}
																			else if(column==8 && f[8]==0){floodfill(425+35,255+35+35+35,LIGHTBLUE);f[8]=1;cnt3++;pb++;}
																			else if(column==9 && f[9]==0){floodfill(460+35,255+35+35+35,LIGHTBLUE);f[9]=1;cnt3++;pb++;}
																			else if(column==10 && f[10]==0){floodfill(495+35,255+35+35+35,LIGHTBLUE);f[10]=1;cnt3++;pb++;}
																			else if(column==11 && f[11]==0){floodfill(530+35,255+35+35+35,LIGHTBLUE);f[11]=1;cnt3++;pb++;}
																			else if(column==12 && f[12]==0){floodfill(565+35,255+35+35+35,LIGHTBLUE);f[12]=1;cnt3++;pb++;}
																			else if(column==13 && f[13]==0){floodfill(600+35,255+35+35+35,LIGHTBLUE);f[13]=1;cnt3++;pb++;}
																			else if(column==14 && f[14]==0){floodfill(635+35,255+35+35+35,LIGHTBLUE);f[14]=1;cnt3++;pb++;}
																			else if(column==15 && f[15]==0){floodfill(670+70,255+35+35+35,LIGHTBLUE);f[15]=1;cnt3++;pb++;}
																			else if(column==16 && f[16]==0){floodfill(740+35,255+35+35+35,LIGHTBLUE);f[16]=1;cnt3++;pb++;}
																			else
																			{	
																				if(column>=1 && column<=16)
																				{
																					cout<<"\nThis Ticket is already Booked\nSelcet Another\n";goto d;
																				}
																				else
																				{
																					cout<<"\nEnter correct column\n";goto d;
																				}	
																			}
																			
																		}
																		// fills colour in 'G' row according to choosen seat
																		if(((int)row[0]==71) ||((int)row[0]==103))
																		{	setfillstyle(LTSLASH_FILL,LIGHTGREEN);
																			if(column==1 && g[1]==0){floodfill(180,255+35+35+35+35,LIGHTBLUE);g[1]=1;cnt3++;pb++;}
																			else if(column==2 && g[2]==0 ){floodfill(215,255+35+35+35+35,LIGHTBLUE);g[2]=1;cnt3++;pb++;}
																			else if(column==3 && g[3]==0){floodfill(250+35,255+35+35+35+35,LIGHTBLUE);g[3]=1;cnt3++;pb++;}
																			else if(column==4 && g[4]==0){floodfill(285+35,255+35+35+35+35,LIGHTBLUE);g[4]=1;cnt3++;pb++;}
																			else if(column==5 && g[5]==0){floodfill(320+35,255+35+35+35+35,LIGHTBLUE);g[5]=1;cnt3++;pb++;}
																			else if(column==6 && g[6]==0){floodfill(355+35,255+35+35+35+35,LIGHTBLUE);g[6]=1;cnt3++;pb++;}
																			else if(column==7 && g[7]==0){floodfill(390+35,255+35+35+35+35,LIGHTBLUE);g[7]=1;cnt3++;pb++;}
																			else if(column==8 && g[8]==0){floodfill(425+35,255+35+35+35+35,LIGHTBLUE);g[8]=1;cnt3++;pb++;}
																			else if(column==9 && g[9]==0){floodfill(460+35,255+35+35+35+35,LIGHTBLUE);g[9]=1;cnt3++;pb++;}
																			else if(column==10 && g[10]==0){floodfill(495+35,255+35+35+35+35,LIGHTBLUE);g[10]=1;cnt3++;pb++;}
																			else if(column==11 && g[11]==0){floodfill(530+35,255+35+35+35+35,LIGHTBLUE);g[11]=1;cnt3++;pb++;}
																			else if(column==12 && g[12]==0){floodfill(565+35,255+35+35+35+35,LIGHTBLUE);g[12]=1;cnt3++;pb++;}
																			else if(column==13 && g[13]==0){floodfill(600+35,255+35+35+35+35,LIGHTBLUE);g[13]=1;cnt3++;pb++;}
																			else if(column==14 && g[14]==0){floodfill(635+35,255+35+35+35+35,LIGHTBLUE);g[14]=1;cnt3++;pb++;}
																			else if(column==15 && g[15]==0){floodfill(670+70,255+35+35+35+35,LIGHTBLUE);g[15]=1;cnt3++;pb++;}
																			else if(column==16 && g[16]==0){floodfill(740+35,255+35+35+35+35,LIGHTBLUE);g[16]=1;cnt3++;pb++;}
																			else
																			{	
																				if(column>=1 && column<=16)
																				{
																					cout<<"\nThis Ticket is already Booked\nSelcet Another\n";goto d;
																				}
																				else
																				{
																					cout<<"\nEnter correct column\n";goto d;
																				}	
																			}
																			
																		}
																		goto f;
																	}
																	else
																	{
																		cout<<"\nEnter correct column\n";goto d;
																	}
																}
														}
														else
														{
															 cout<<"\nInvalid Row\nEnter correct Row\n ";goto d;
														}
													}
													f:
														cout<<"\n\nTicket Booked Successfully!!!!!!!";cnt1++;
														cout<<"\n--------------------------------------------------------";
														cout<<"\n\nTotal Booked Tickets are :"<<cnt3<<"\n";
														
														if (cnt1==(int)ch2[0])
														{	
															cout<<"\nRecliner seats booked are : "<<rb;															
															cout<<"\nPrime seats booked are : "<<pb;
															cout<<"\n\nCost of Recliner seats is : "<<rb*200<<" INR";
															cout<<"\nCost of Prime seats is : "<<pb*150<<" INR";
															cout<<"\n\nTotal Bill amount is :"<<rb*200+pb*150;
															cout<<"\n--------------------------------------------------------";
															cout<<"\nENJOY YOUR SHOW.......\n";
															if(rc==0 && pc==0)
															{
																rb=0;pb=0;
															}
															goto a;
														}
												}
											}
											else
											{
												cout<<"\nEnter proper number of seats\n";goto c;
											}
										}									
										break;
								
								
								case 50:goto a;break;
								default:cout<<"\nEntered Value is Out-Of-Scope \nKindly Re-Enter Appropriate Value\n\n";goto b;
							}
						}
						break;

				case 50: 
						if(cnt3>0)
						{
							h:
						cout<<"\n\t\tPress\n\t1.Cancel Booked Tickets\n\t2.Go Back\n";
						cout<<"\nEnter your choice : ";
						
						cin>>ch1;
						if (ch.length()>1)
						{
							cout<<"\nYou Entered Non-Integer Value OR Value Out-Of-Scope\nKindly Enter correct Value\n\n ";goto h;
						}
						else
						{
							switch((int)ch1[0])	
							{
								case 49:
										i:
										cout<<"\nEnter number of Tickets to be Cancel  ( UPTO 9 ) :";
										cin>>ch2;
										//cout<<"\n"<<(int)ch2[0];
										if (ch2.length()>1)
										{
											cout<<"\nYou Entered Non-Integer Value OR Value Out-Of-Scope\nKindly Enter correct Value\n\n ";goto i;
										}
										else
										{
											if(((int)ch2[0]>=49 &&( int)ch2[0]<=57) )
											{	
												if((int)ch2[0]<=cnt3+48)
												{
														
												//no of seats
												for(int i=49;i<=(int)ch2[0];i++)
												{	j:
													cout<<"\nEnter Row :";
													cin>>row;
													if (row.length()>1)
													{
														cout<<"\nInvalid Row\nEnter correct Row\n\n ";goto j;
													}
													else
													{
														if(((int)row[0]>=65 &&(int)row[0]<=71) || ((int)row[0]>=97 &&(int)row[0]<=103))
														{
															// actual color filling using floodfill() function
																for(int j=49;i<=(int)ch2[0];j++)
																{	k:
																	cout<<"\nEnter Column in INTEGER : ";
																	cin>>column;
																	if(column<=22 && column>=1)
																	{
																		
																		//cnt1 checks total number of seats booked
																		// fills colour in 'A' row according to choosen seat
																		
																		if(((int)row[0]==65) ||((int)row[0]==97))
																		{	setfillstyle(SOLID_FILL,BLACK);
																			
																			if(column==1 && a[1]==1  ){floodfill(115,140,YELLOW);a[1]=0;cnt1++;rc++;}
																			else if(column==2 && a[2]==1 ){floodfill(150,140,YELLOW);a[2]=0;cnt1++;rc++;}
																			else if(column==3 && a[3]==1){floodfill(185,140,YELLOW);a[3]=0;cnt1++;rc++;}
																			else if(column==4 && a[4]==1){floodfill(220,140,YELLOW);a[4]=0;cnt1++;rc++;}
																			else if(column==5 && a[5]==1){floodfill(255,140,YELLOW);a[5]=0;cnt1++;rc++;}
																			else if(column==6 && a[6]==1){floodfill(290,140,YELLOW);a[6]=0;cnt1++;rc++;}
																			else if(column==7 && a[7]==1){floodfill(325,140,YELLOW);a[7]=0;cnt1++;rc++;}
																			else if(column==8 && a[8]==1){floodfill(360,140,YELLOW);a[8]=0;cnt1++;rc++;}
																			else if(column==9 && a[9]==1){floodfill(395,140,YELLOW);a[9]=0;cnt1++;rc++;}
																			else if(column==10 && a[10]==1){floodfill(430,140,YELLOW);a[10]=0;cnt1++;rc++;}
																			else if(column==11 && a[11]==1){floodfill(465,140,YELLOW);a[11]=0;cnt1++;rc++;}
																			else if(column==12 && a[12]==1){floodfill(500,140,YELLOW);a[12]=0;cnt1++;rc++;}
																			else if(column==13 && a[13]==1){floodfill(535,140,YELLOW);a[13]=0;cnt1++;rc++;}
																			else if(column==14 && a[14]==1){floodfill(570,140,YELLOW);a[14]=0;cnt1++;rc++;}
																			else if(column==15 && a[15]==1){floodfill(605,140,YELLOW);a[15]=0;cnt1++;rc++;}
																			else if(column==16 && a[16]==1){floodfill(640,140,YELLOW);a[16]=0;cnt1++;rc++;}
																			else if(column==17 && a[17]==1){floodfill(675,140,YELLOW);a[17]=0;cnt1++;rc++;}
																			else if(column==18 && a[18]==1){floodfill(710,140,YELLOW);a[18]=0;cnt1++;rc++;}
																			else if(column==19 && a[19]==1){floodfill(745,140,YELLOW);a[19]=0;cnt1++;rc++;}
																			else if(column==20 && a[20]==1){floodfill(780,140,YELLOW);a[20]=0;cnt1++;rc++;}
																			else if(column==21 && a[21]==1){floodfill(815,140,YELLOW);a[21]=0;cnt1++;rc++;}
																			else if(column==22 && a[22]==1){floodfill(850,140,YELLOW);a[22]=0;cnt1++;rc++;}
																			else
																			{
																				cout<<"\nThis Ticket is Not Booked\nSelcet Another\n";goto j;
																			}
																		}
																		// fills colour in 'B' row according to choosen seat
																		if(((int)row[0]==66) ||((int)row[0]==98))
																		{	setfillstyle(SOLID_FILL,BLACK);
																			if(column==1 && b[1]==1){floodfill(115,140,YELLOW);b[1]=0;cnt1++;rc++;}
																			else if(column==2 && b[2]==1 ){floodfill(150,140+35,YELLOW);b[2]=0;cnt1++;rc++;}
																			else if(column==3 && b[3]==1){floodfill(185,140+35,YELLOW);b[3]=0;cnt1++;rc++;}
																			else if(column==4 && b[4]==1){floodfill(220,140+35,YELLOW);b[4]=0;cnt1++;rc++;}
																			else if(column==5 && b[5]==1){floodfill(255,140+35,YELLOW);b[5]=0;cnt1++;rc++;}
																			else if(column==6 && b[6]==1){floodfill(290,140+35,YELLOW);b[6]=0;cnt1++;rc++;}
																			else if(column==7 && b[7]==1){floodfill(325,140+35,YELLOW);b[7]=0;cnt1++;rc++;}
																			else if(column==8 && b[8]==1){floodfill(360,140+35,YELLOW);b[8]=0;cnt1++;rc++;}
																			else if(column==9 && b[9]==1){floodfill(395,140+35,YELLOW);b[9]=0;cnt1++;rc++;}
																			else if(column==10 && b[10]==1){floodfill(430,140+35,YELLOW);b[10]=0;cnt1++;rc++;}
																			else if(column==11 && b[11]==1){floodfill(465,140+35,YELLOW);b[11]=0;cnt1++;rc++;}
																			else if(column==12 && b[12]==1){floodfill(500,140+35,YELLOW);b[12]=0;cnt1++;rc++;}
																			else if(column==13 && b[13]==1){floodfill(535,140+35,YELLOW);b[13]=0;cnt1++;rc++;}
																			else if(column==14 && b[14]==1){floodfill(570,140+35,YELLOW);b[14]=0;cnt1++;rc++;}
																			else if(column==15 && b[15]==1){floodfill(605,140+35,YELLOW);b[15]=0;cnt1++;rc++;}
																			else if(column==16 && b[16]==1){floodfill(640,140+35,YELLOW);b[16]=0;cnt1++;rc++;}
																			else if(column==17 && b[17]==1){floodfill(675,140+35,YELLOW);b[17]=0;cnt1++;rc++;}
																			else if(column==18 && b[18]==1){floodfill(710,140+35,YELLOW);b[18]=0;cnt1++;rc++;}
																			else if(column==19 && b[19]==1){floodfill(745,140+35,YELLOW);b[19]=0;cnt1++;rc++;}
																			else if(column==20 && b[20]==1){floodfill(780,140+35,YELLOW);b[20]=0;cnt1++;rc++;}
																			else if(column==21 && b[21]==1){floodfill(815,140+35,YELLOW);b[21]=0;cnt1++;;rc++;}
																			else if(column==22 && b[22]==1){floodfill(850,140+35,YELLOW);b[22]=0;cnt1++;rc++;}
																			else
																			{
																				cout<<"\nThis Ticket is Not Booked\nSelcet Another\n";goto j;
																			}
																		}
																		// fills colour in 'C' row according to choosen seat
																		if(((int)row[0]==67) ||((int)row[0]==99))
																		{	setfillstyle(SOLID_FILL,BLACK);
																			if(column==1 && c[1]==1){floodfill(180,255,LIGHTBLUE);c[1]=0;cnt1++;pc++;}
																			else if(column==2 && c[2]==1 ){floodfill(215,255,LIGHTBLUE);c[2]=0;cnt1++;pc++;}
																			else if(column==3 && c[3]==1){floodfill(250+35,255,LIGHTBLUE);c[3]=0;cnt1++;pc++;}
																			else if(column==4 && c[4]==1){floodfill(285+35,255,LIGHTBLUE);c[4]=0;cnt1++;pc++;}
																			else if(column==5 && c[5]==1){floodfill(320+35,255,LIGHTBLUE);c[5]=0;cnt1++;pc++;}
																			else if(column==6 && c[6]==1){floodfill(355+35,255,LIGHTBLUE);c[6]=0;cnt1++;pc++;}
																			else if(column==7 && c[7]==1){floodfill(390+35,255,LIGHTBLUE);c[7]=0;cnt1++;pc++;}
																			else if(column==8 && c[8]==1){floodfill(425+35,255,LIGHTBLUE);c[8]=0;cnt1++;pc++;}
																			else if(column==9 && c[9]==1){floodfill(460+35,255,LIGHTBLUE);c[9]=0;cnt1++;pc++;}
																			else if(column==10 && c[10]==1){floodfill(495+35,255,LIGHTBLUE);c[10]=0;cnt1++;pc++;}
																			else if(column==11 && c[11]==1){floodfill(530+35,255,LIGHTBLUE);c[11]=0;cnt1++;pc++;}
																			else if(column==12 && c[12]==1){floodfill(565+35,255,LIGHTBLUE);c[12]=0;cnt1++;pc++;}
																			else if(column==13 && c[13]==1){floodfill(600+35,255,LIGHTBLUE);c[13]=0;cnt1++;pc++;}
																			else if(column==14 && c[14]==1){floodfill(635+35,255,LIGHTBLUE);c[14]=0;cnt1++;pc++;}
																			else if(column==15 && c[15]==1){floodfill(670+70,255,LIGHTBLUE);c[15]=0;cnt1++;pc++;}
																			else if(column==16 && c[16]==1){floodfill(740+35,255,LIGHTBLUE);c[16]=0;cnt1++;pc++;}
																			else
																			{	if(column>=1 && column<=16)
																				{
																					cout<<"\nThis Ticket is Not Booked\nSelcet Another\n";goto j;
																				}
																				else
																				{
																					cout<<"\nEnter correct column\n";goto j;
																				}	
																			}
																		}
																		// fills colour in 'D' row according to choosen seat
																		if(((int)row[0]==68) ||((int)row[0]==100))
																		{	setfillstyle(SOLID_FILL,BLACK);
																			if(column==1 && d[1]==1){floodfill(180,255+35,LIGHTBLUE);d[1]=0;cnt1++;pc++;}
																			else if(column==2 && d[2]==1 ){floodfill(215,255+35,LIGHTBLUE);d[2]=0;cnt1++;pc++;}
																			else if(column==3 && d[3]==1){floodfill(250+35,255+35,LIGHTBLUE);d[3]=0;cnt1++;pc++;}
																			else if(column==4 && d[4]==1){floodfill(285+35,255+35,LIGHTBLUE);d[4]=0;cnt1++;pc++;}
																			else if(column==5 && d[5]==1){floodfill(320+35,255+35,LIGHTBLUE);d[5]=0;cnt1++;pc++;}
																			else if(column==6 && d[6]==1){floodfill(355+35,255+35,LIGHTBLUE);d[6]=0;cnt1++;pc++;}
																			else if(column==7 && d[7]==1){floodfill(390+35,255+35,LIGHTBLUE);d[7]=0;cnt1++;pc++;}
																			else if(column==8 && d[8]==1){floodfill(425+35,255+35,LIGHTBLUE);d[8]=0;cnt1++;pc++;}
																			else if(column==9 && d[9]==1){floodfill(460+35,255+35,LIGHTBLUE);d[9]=0;cnt1++;pc++;}
																			else if(column==10 && d[10]==1){floodfill(495+35,255+35,LIGHTBLUE);d[10]=0;cnt1++;pc++;}
																			else if(column==11 && d[11]==1){floodfill(530+35,255+35,LIGHTBLUE);d[11]=0;cnt1++;pc++;}
																			else if(column==12 && d[12]==1){floodfill(565+35,255+35,LIGHTBLUE);d[12]=0;cnt1++;pc++;}
																			else if(column==13 && d[13]==1){floodfill(600+35,255+35,LIGHTBLUE);d[13]=0;cnt1++;pc++;}
																			else if(column==14 && d[14]==1){floodfill(635+35,255+35,LIGHTBLUE);d[14]=0;cnt1++;pc++;}
																			else if(column==15 && d[15]==1){floodfill(670+70,255+35,LIGHTBLUE);d[15]=0;cnt1++;pc++;}
																			else if(column==16 && d[16]==1){floodfill(740+35,255+35,LIGHTBLUE);d[16]=0;cnt1++;pc++;}
																			else
																			{	
																				if(column>=1 && column<=16)
																				{
																					cout<<"\nThis Ticket is Not Booked\nSelcet Another\n";goto j;
																				}
																				else
																				{
																					cout<<"\nEnter correct column\n";goto j;
																				}	
																			}
																		}
																		// fills colour in 'E' row according to choosen seat
																		if(((int)row[0]==69) ||((int)row[0]==101))
																		{	setfillstyle(SOLID_FILL,BLACK);
																			if(column==1 && e[1]==1){floodfill(180,255+35+35,LIGHTBLUE);e[1]=0;cnt1++;pc++;}
																			else if(column==2 && e[2]==1 ){floodfill(215,255+35+35,LIGHTBLUE);e[2]=0;cnt1++;pc++;}
																			else if(column==3 && e[3]==1){floodfill(250+35,255+35+35,LIGHTBLUE);e[3]=0;cnt1++;pc++;}
																			else if(column==4 && e[4]==1){floodfill(285+35,255+35+35,LIGHTBLUE);e[4]=0;cnt1++;pc++;}
																			else if(column==5 && e[5]==1){floodfill(320+35,255+35+35,LIGHTBLUE);e[5]=0;cnt1++;pc++;}
																			else if(column==6 && e[6]==1){floodfill(355+35,255+35+35,LIGHTBLUE);e[6]=0;cnt1++;pc++;}
																			else if(column==7 && e[7]==1){floodfill(390+35,255+35+35,LIGHTBLUE);e[7]=0;cnt1++;pc++;}
																			else if(column==8 && e[8]==1){floodfill(425+35,255+35+35,LIGHTBLUE);e[8]=0;cnt1++;pc++;}
																			else if(column==9 && e[9]==1){floodfill(460+35,255+35+35,LIGHTBLUE);e[9]=0;cnt1++;pc++;}
																			else if(column==10 && e[10]==1){floodfill(495+35,255+35+35,LIGHTBLUE);e[10]=0;cnt1++;pc++;}
																			else if(column==11 && e[11]==1){floodfill(530+35,255+35+35,LIGHTBLUE);e[11]=0;cnt1++;pc++;}
																			else if(column==12 && e[12]==1){floodfill(565+35,255+35+35,LIGHTBLUE);e[12]=0;cnt1++;pc++;}
																			else if(column==13 && e[13]==1){floodfill(600+35,255+35+35,LIGHTBLUE);e[13]=0;cnt1++;pc++;}
																			else if(column==14 && e[14]==1){floodfill(635+35,255+35+35,LIGHTBLUE);e[14]=0;cnt1++;pc++;}
																			else if(column==15 && e[15]==1){floodfill(670+70,255+35+35,LIGHTBLUE);e[15]=0;cnt1++;pc++;}
																			else if(column==16 && e[16]==1){floodfill(740+35,255+35+35,LIGHTBLUE);e[16]=0;cnt1++;pc++;}
																			else
																			{	
																				if(column>=1 && column<=16)
																				{
																					cout<<"\nThis Ticket is Not Booked\nSelcet Another\n";goto j;
																				}
																				else
																				{
																					cout<<"\nEnter correct column\n";goto j;
																				}	
																			}
																		}
																		// fills colour in 'F' row according to choosen seat
																		if(((int)row[0]==70) ||((int)row[0]==102))
																		{	setfillstyle(SOLID_FILL,BLACK);
																			if(column==1 && f[1]==1){floodfill(180,255+35+35+35,LIGHTBLUE);f[1]=0;cnt1++;pc++;}
																			else if(column==2 && f[2]==1 ){floodfill(215,255+35+35+35,LIGHTBLUE);f[2]=0;cnt1++;pc++;}
																			else if(column==3 && f[3]==1){floodfill(250+35,255+35+35+35,LIGHTBLUE);f[3]=0;cnt1++;pc++;}
																			else if(column==4 && f[4]==1){floodfill(285+35,255+35+35+35,LIGHTBLUE);f[4]=0;cnt1++;pc++;}
																			else if(column==5 && f[5]==1){floodfill(320+35,255+35+35+35,LIGHTBLUE);f[5]=0;cnt1++;pc++;}
																			else if(column==6 && f[6]==1){floodfill(355+35,255+35+35+35,LIGHTBLUE);f[6]=0;cnt1++;pc++;}
																			else if(column==7 && f[7]==1){floodfill(390+35,255+35+35+35,LIGHTBLUE);f[7]=0;cnt1++;pc++;}
																			else if(column==8 && f[8]==1){floodfill(425+35,255+35+35+35,LIGHTBLUE);f[8]=0;cnt1++;pc++;}
																			else if(column==9 && f[9]==1){floodfill(460+35,255+35+35+35,LIGHTBLUE);f[9]=0;cnt1++;pc++;}
																			else if(column==10 && f[10]==1){floodfill(495+35,255+35+35+35,LIGHTBLUE);f[10]=0;cnt1++;pc++;}
																			else if(column==11 && f[11]==1){floodfill(530+35,255+35+35+35,LIGHTBLUE);f[11]=0;cnt1++;pc++;}
																			else if(column==12 && f[12]==1){floodfill(565+35,255+35+35+35,LIGHTBLUE);f[12]=0;cnt1++;pc++;}
																			else if(column==13 && f[13]==1){floodfill(600+35,255+35+35+35,LIGHTBLUE);f[13]=0;cnt1++;pc++;}
																			else if(column==14 && f[14]==1){floodfill(635+35,255+35+35+35,LIGHTBLUE);f[14]=0;cnt1++;pc++;}
																			else if(column==15 && f[15]==1){floodfill(670+70,255+35+35+35,LIGHTBLUE);f[15]=0;cnt1++;pc++;}
																			else if(column==16 && f[16]==1){floodfill(740+35,255+35+35+35,LIGHTBLUE);f[16]=0;cnt1++;pc++;}
																			else
																			{	
																				if(column>=1 && column<=16)
																				{
																					cout<<"\nThis Ticket is Not Booked\nSelcet Another\n";goto j;
																				}
																				else
																				{
																					cout<<"\nEnter correct column\n";goto j;
																				}	
																			}
																			
																		}
																		// fills colour in 'G' row according to choosen seat
																		if(((int)row[0]==71) ||((int)row[0]==103))
																		{	setfillstyle(SOLID_FILL,BLACK);
																			if(column==1 && g[1]==1){floodfill(180,255+35+35+35+35,LIGHTBLUE);g[1]=0;cnt1++;pc++;}
																			else if(column==2 && g[2]==1 ){floodfill(215,255+35+35+35+35,LIGHTBLUE);g[2]=0;cnt1++;pc++;}
																			else if(column==3 && g[3]==1){floodfill(250+35,255+35+35+35+35,LIGHTBLUE);g[3]=0;cnt1++;pc++;}
																			else if(column==4 && g[4]==1){floodfill(285+35,255+35+35+35+35,LIGHTBLUE);g[4]=0;cnt1++;pc++;}
																			else if(column==5 && g[5]==1){floodfill(320+35,255+35+35+35+35,LIGHTBLUE);g[5]=0;cnt1++;pc++;}
																			else if(column==6 && g[6]==1){floodfill(355+35,255+35+35+35+35,LIGHTBLUE);g[6]=0;cnt1++;pc++;}
																			else if(column==7 && g[7]==1){floodfill(390+35,255+35+35+35+35,LIGHTBLUE);g[7]=0;cnt1++;pc++;}
																			else if(column==8 && g[8]==1){floodfill(425+35,255+35+35+35+35,LIGHTBLUE);g[8]=0;cnt1++;pc++;}
																			else if(column==9 && g[9]==1){floodfill(460+35,255+35+35+35+35,LIGHTBLUE);g[9]=0;cnt1++;pc++;}
																			else if(column==10 && g[10]==1){floodfill(495+35,255+35+35+35+35,LIGHTBLUE);g[10]=0;cnt1++;pc++;}
																			else if(column==11 && g[11]==1){floodfill(530+35,255+35+35+35+35,LIGHTBLUE);g[11]=0;cnt1++;pc++;}
																			else if(column==12 && g[12]==1){floodfill(565+35,255+35+35+35+35,LIGHTBLUE);g[12]=0;cnt1++;pc++;}
																			else if(column==13 && g[13]==1){floodfill(600+35,255+35+35+35+35,LIGHTBLUE);g[13]=0;cnt1++;pc++;}
																			else if(column==14 && g[14]==1){floodfill(635+35,255+35+35+35+35,LIGHTBLUE);g[14]=0;cnt1++;pc++;}
																			else if(column==15 && g[15]==1){floodfill(670+70,255+35+35+35+35,LIGHTBLUE);g[15]=0;cnt1++;pc++;}
																			else if(column==16 && g[16]==1){floodfill(740+35,255+35+35+35+35,LIGHTBLUE);g[16]=0;cnt1++;pc++;}
																			else
																			{	
																				if(column>=1 && column<=16)
																				{
																					cout<<"\nThis Ticket is Not Booked\nSelcet Another\n";goto j;
																				}
																				else
																				{
																					cout<<"\nEnter correct column\n";goto j;
																				}	
																			}
																			
																		}
																		
																		goto m;
																	}
																	else
																	{
																		cout<<"\nEnter correct column\n";goto j;
																	}
																}
														}
														else
														{
															 cout<<"\nInvalid Row\nEnter correct Row\n\n ";goto j;
														}
													}
													m:
														cout<<"\n\nTicket Cancelled Successfully";
														cout<<"\n---------------------------------------------";
														o++;
														
														
														cnt3=cnt3-o;
														o=0;
														cout<<"\n\nTicket Avialable For Cancellation are :"<<cnt3;
														cout<<"\n---------------------------------------------";
														
														
														
														if (cnt1==(int)ch2[0])
														{	
															
															cout<<"\n\nRecliner seats cancelled are : "<<rc;
															cout<<"\nPrime seats cancelled are : "<<pc;
															cout<<"\n\nRefund amount of Recliner seats is : "<<rc*200<<" INR";
															cout<<"\nRefund amount of Prime seats is : "<<pc*150<<" INR";
															cout<<"\n\nTotal refund amount is :"<<rc*200+pc*150;
															cout<<"\n----------------------------------------------";
															rc=0;pc=0;
															goto a;
														}
												}
												}
												else
												{
													cout<<"\nEnter proper number of seats\n";
													cout<<"\nTotal book ticked are : "<<cnt3<<" , So you can Cancel Maximum "<<cnt3<<" Tickets";
													goto i;
												}
											}
											else
											{
												cout<<"\nEnter proper number of seats\n";goto i;
											}
										}									
										break;
								
								
								case 50:goto a;break;
								default:cout<<"\nEntered Value is Out-Of-Scope \nKindly Re-Enter Appropriate Value\n\n";goto h;
							}
						}
						
								
						}
						else
						{
							cout<<"None of the Tickets are Booked\n";goto a;
						}
						break;
				case 51: cout<<"\nExiting........\nThank You For Using This Code";break;
				default: cout<<"\nEntered Value is Out-Of-Scope \nKindly Re-Enter Appropriate Value\n\n";goto a;
			}		
		}
}
/* ################################ ALL OPERATIONS USED IN PROGRAM ###############################################################

1.	OPENING MESSAGE -:
	 
	A]	In the opening of program , a hello message will be displayed . 
	
	B]	Function void welcome() is designed for this task . 
		
    C]	In the opening message putpixel() function is used to display loading , actual 'HELLO' message and loading next Window.
      	Each letter in 'Hello' will be displayed using delay of 20 ms and for displaying 'o' in 'HELLO' Bresenham algorithm is used 
      	instead of using direct circle() function 
   
2. THE THETER  AND SITTING ARRANGEMENT-:

	A]	The theter has 2 type of seats one is Recliner seat shown in gold and other is Prime seat shown in blue
	
	B]	there are total 2 rows of Recliner seat labelled 'A' and 'B' ,each row consist of 22 seats
	
	C]	there are total 5 rows of Prime seat labelled 'C' ,'D','E','F' and 'G' respectively ,each row consist of 16 seats in which
	    first 2 and last 2 are for couples
	
	D]  Each seat is represented using square box of 25 X 25 pixels and in between 2 boxes there is gap of 10 pixels. 
			
			For 'A' row starting pixels are (100,130)
			For 'B' row starting pixels are (100,155)
			For 'C' row starting pixels are (170,240)
			For 'D' row starting pixels are (170,275) 
			For 'E' row starting pixels are (170,310) 
			For 'F' row starting pixels are (170,345) 
			
	F] for loop is used for displaying seats 
			
			for Recliner seat :
			
			for(k=0;k<2;k++)
			{
				for(int i=0;i<22;i++);
				{
					for(int j=0;j<22;j++)			//  k is used for displaying 2 rows of Recliner seat
					for(int j=0;j<22;j++)			//  i is used for displaying 22 seats in a row 
					for(int j=0;j<22;j++)			//	j is used to display 1 seat in a row there are 4 loop of j indicating 4 sides of square
					for(int j=0;j<22;j++)
				}
			} 
			
			for Prime seats :
			
			for(k=0;k<5;k++)
			{
				for(int i=0;i<16;i++);
				{
					for(int j=0;j<22;j++)
					{									//  k is used for displaying 5 rows of Recliner seat
						if (x1!=240)					//  i is used for displaying 16 seats in a row
						{
							if(x1!=695)					//	j is used to display 1 seat in a row there are 4 loop of j indicating 4 sides of square
							{					
								print seats 			// We have to print a gap between 2nd & 3rd seat and between 14th and 16th seat 
							}							// x1=240 is pixel loaction of the gap between 2nd & 3rd seat which is not displayed
						}								// x1=695 is pixel loaction of the gap between 14th & 15th seat which is not displayed
					}							
					for(int j=0;j<22;j++)				// this if statement is present inside every for loop associated with j			 
					for(int j=0;j<22;j++)			
					for(int j=0;j<22;j++)
				}
			}
			
	G]	Labelling of each seat is done 
	
3.	MAIN PROGRAM -:
	
	A]	Display Welcome message
	B]	Display Menu
			
			1.Book Tickets
			2.Cancel Booked Tickets
			3.Exit
	
	C]	When ever user enters 1 or 2 , A window is displayed showing sitting arrangement 
		this arrangement is to be shown only once therefore variable cnt2=0 is taken into count and as function is called cnt2 is incremented so that 
		it can be called only once throughout program 
		
		if (cnt2==0)// ensures that sitting arrangement is displayed only once
		{
			obj.display_arrangement();cnt2++;	//when cnt2==0 , function is called and cnt2 is incremented so that this condition will never be true again 
		}	
		
	D] this program is 97% user friendly so it can accept string , characters , special symbols and display message accordingly Comments inside program speifies it 
	
	E]	Varialbes used -:
			
			1.	string ch -: Accepts choice whether to book , cancel or exit 
			2.  string ch1 -: Accepts choice to book ticket or go back || Accepts choice to cancel booked ticket or go back 
			3. 	string ch2 -: Accepts total number of seats to be booked || Accepts total number of seats to be cancelled
			4.  string row -: Accepts row
			5.	string column -: Accepts column
			6. 	int cnt1=48 -: gets incremented as ticket is booked and mainly used to check if total ticked booked are = ch2 if yes then stop loop otherwise continue 
			7.	int cnt3=0 -: To count actual ticket booked it increments just as cnt1 
			8. 	int o=0 -: to check total number of tickets cancelled 
					
					value of cnt3 is reassigned after each cancellation 
			9. 	int rb=0 -: Variable to check total Recliner seat booked
			10.	int pb=0 -: Variable to check total Prime seat booked
			11.	int rc=0 -: Variable to check total Recliner seat cancelled
			12.	int pc=0 -: Variable to check total prime seat cancelled
			
				THERE ARE TOTAL 2 ARRAYS a[22] AND b[22] USED FOR CHECKING AVAILABILITY OF RECLINER SEATS AND 5 ARRAYES c[16],d[16],e[16],f[16],g[16] USED FOR CHECKING AVAILABILITY OF PRIME SEATS
				EACH INDEX HAVE ASSIGNED VALUE 0 WHICH INDICATES THAT SEAT IS NOT BOOKED AND IF SEAT IS BOOKED THEN ITS VALUE CHANGES TO 1 
				
	F]	Techineques used are Switch case , if, else if ,else statements ,goto statements 
*/					
			
		
		
