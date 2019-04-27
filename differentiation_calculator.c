#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
func();
int main()
{
int gd=DETECT,gm;
int a,b,e,option;
char c[10],d[10];
initgraph(&gd,&gm,"C:\\TC\\BGI");
cleardevice();
printf("\n 1. ax^n\n 2. asin(bx)\n 3. acos(bx)\n 4. atan(bx)\n 5. acosec(bx)\n 6. asec(bx)\n 7. acot(bx)");
printf("\n 8. log(ax)\n 9. e^(ax)\n10. a^x\n\n");
printf("Choose function to differentiate\n");
scanf("%d",&option);
cleardevice();
switch(option)
{
case 1:
printf("f(x)=ax^n\n");
printf("f'(x)=nax^(n-1)");
printf("\n\nEnter the values of a & n\n");
scanf("%d%d",&a,&b);
if(b==1&&a>0)
{
line(50,50,50,200);              //graph of f(x) for linear function
line(20,180,200,180);
setcolor(YELLOW);
line(50,180,180,80);
line(50,179,180,79);
printf("\nf(x)=%dx\n",a);
printf("\n f'(x)=%d\n",a);
sprintf(c,"y=%dx",a);
setcolor(WHITE);
outtextxy(120,80,c);
outtextxy(80,190,"Graph of f(x)");
outtextxy(370,190,"Graph of f'(x)");
line(350,50,350,200);             //graph of f'(x) for linear function
line(320,180,500,180);
setcolor(RED);
line(352,120,500,120);
line(352,121,500,121);
sprintf(c,"y'=%d",a);
setcolor(WHITE);
outtextxy(400,110,c);
setcolor(3);
rectangle(0,360,70,390);
setcolor(WHITE);
}
if(b==1&&a<0)
{
line(110,50,110,200);       //graph of f(x) for linear function (-ve)
line(20,180,200,180);
setcolor(YELLOW);
line(110,180,10,75);
line(110,179,10,74);
printf("\nf(x)=%dx\n",a);
printf("\n f'(x)=%d\n",a);
sprintf(c,"y=%dx",a);
setcolor(WHITE);
outtextxy(40,80,c);
outtextxy(120,190,"Graph of f(x)");
outtextxy(370,110,"Graph of f'(x)");
line(350,50,350,200);        //graph of f'(x) for linear function (-ve)
line(320,120,500,120);
setcolor(RED);
line(352,170,500,170);
line(352,171,500,171);
sprintf(c,"y'=%d",a);
setcolor(WHITE);
outtextxy(400,160,c);
setcolor(3);
rectangle(0,360,80,390);
}
if(b==2&&a>0)
{
line(350,50,350,200);         //graph of f'(x) for quadratic function
line(320,180,500,180);
setcolor(RED);
line(350,180,450,80);
line(350,179,450,79);
line(350,178,450,78);
printf("\nf(x)=%dx^2\n",a);
printf("\n f'(x)=%dx\n",a*b);
sprintf(c,"y=%dx^2",a);
setcolor(WHITE);
outtextxy(140,80,c);
outtextxy(80,190,"Graph of f(x)");
outtextxy(370,190,"Graph of f'(x)");
line(50,50,50,200);       //graph of f(x) for quadratic function
line(20,180,200,180);
setcolor(YELLOW);
arc(50,98,270,30,80);
arc(50,99,271,31,80);
sprintf(c,"y'=%dx",a*b);
setcolor(WHITE);
outtextxy(430,110,c);
setcolor(3);
rectangle(0,360,90,390);
setcolor(WHITE);
}
if(b==2&&a<0)
{
line(350,50,350,200);         //graph of f'(x) for quadratic function (-ve)
line(320,100,500,100);
setcolor(RED);
line(350,100,450,200);
line(350,101,450,201);
line(350,102,450,202);
printf("\nf(x)=%dx^2\n",a);
printf("\n f'(x)=%dx\n",a*b);
sprintf(c,"y=%dx^2",a);
setcolor(WHITE);
outtextxy(130,150,c);
outtextxy(80,90,"Graph of f(x)");
outtextxy(370,90,"Graph of f'(x)");
line(50,50,50,200);       //graph of f(x) for quadratic function (-ve)
line(20,100,200,100);
setcolor(YELLOW);
arc(50,171,360,90,70);
arc(49,172,359,89,71);
sprintf(c,"y'=%dx",a*b);
setcolor(WHITE);
outtextxy(395,130,c);
setcolor(3);
rectangle(0,360,90,390);
setcolor(WHITE);
}
if(b>=3&&a>0)
{
line(350,50,350,200);         //graph of f'(x) for cubic function
line(320,180,500,180);
setcolor(RED);
arc(350,107,270,30,70);
arc(350,107,271,31,71);
printf("\nf(x)=%dx^%d\n",a,b);
printf("\n f'(x)=%dx^%d\n",a*b,b-1);
sprintf(c,"y=%dx^%d",a,b);
setcolor(WHITE);
outtextxy(160,80,c);
outtextxy(80,190,"Graph of f(x)");
outtextxy(370,190,"Graph of f'(x)");
line(50,50,50,200);       //graph of f(x) for cubic function
line(20,180,200,180);
setcolor(YELLOW);
arc(50,79,270,30,100);
arc(50,80,271,31,100);
sprintf(c,"y'=%dx^%d",a*b,b-1);
setcolor(WHITE);
outtextxy(430,110,c);
setcolor(3);
rectangle(0,360,110,390);
setcolor(WHITE);
}
if(b>=3&&a<0)
{
line(350,50,350,200);         //graph of f'(x) for cubic function (-ve)
line(320,80,500,80);
setcolor(RED);
arc(350,154,360,90,72);
arc(348,154,360,90,72);
arc(349,154,359,90,72);
printf("\nf(x)=%dx^%d\n",a,b);
printf("\n f'(x)=%dx^%d\n",a*b,b-1);
sprintf(c,"y=%dx^%d",a,b);
setcolor(WHITE);
outtextxy(140,120,c);
outtextxy(80,70,"Graph of f(x)");
outtextxy(370,70,"Graph of f'(x)");
line(50,50,50,200);       //graph of f(x) for cubic function (-ve)
line(20,80,200,80);
setcolor(YELLOW);
arc(50,181,360,90,100);
arc(49,182,359,89,101);
sprintf(c,"y'=%dx^%d",a*b,b-1);
setcolor(WHITE);
outtextxy(430,110,c);
setcolor(3);
rectangle(0,360,110,390);
setcolor(WHITE);
}
if(a==0)
{
func();
}
if(a>0&&b==0)
{
outtextxy(70,190,"Graph of f(x)");
outtextxy(370,190,"Graph of f'(x)");
outtextxy(400,165,"y'=0");
line(50,50,50,200);              //graph of f(x) constant
line(20,180,200,180);
setcolor(YELLOW);
line(50,120,200,120);
printf("\nf(x)=%d\n",a);
printf("\n f'(x)=0\n");
sprintf(c,"y=%d",a);
setcolor(WHITE);
outtextxy(100,110,c);
line(350,50,350,200);         //graph of f'(x) constant
line(320,180,500,180);
setcolor(RED);
line(350,180,500,180);
line(350,179,500,179);
setcolor(3);
rectangle(0,360,90,390);
}
if(a<0&&b==0)
{
outtextxy(70,110,"Graph of f(x)");
outtextxy(370,190,"Graph of f'(x)");
outtextxy(400,165,"y'=0");
line(50,50,50,200);              //graph of f(x) constant (-ve)
line(20,120,200,120);
setcolor(YELLOW);
line(50,160,200,160);
printf("\nf(x)=%d\n",a);
printf("\n f'(x)=0\n");
sprintf(c,"y=%d",a);
setcolor(WHITE);
outtextxy(100,145,c);
line(350,50,350,200);         //graph of f'(x) constant (-ve)
line(320,180,500,180);
setcolor(RED);
line(350,180,500,180);
line(350,179,500,179);
setcolor(3);
rectangle(0,360,90,390);
}
break;
case 2:
printf("f(x)=asin(bx)");
printf("\nf'(x)=abcos(bx)");
printf("\n\nEnter the values of a & b\n");
scanf("%d%d",&a,&b);
if(a==0||b==0)
{
func();
}
if((a<0&&b>0)||(a>0&&b<0))
{
outtextxy(100,170,"Graph of f(x)");
outtextxy(370,170,"Graph of f'(x)");
line(50,50,50,180);              //graph of f(x) sine
line(20,130,230,130);
setcolor(YELLOW);
arc(70,130,180,360,20);
arc(70,130,180,360,19);
arc(110,130,0,180,20);
arc(110,130,0,180,19);
arc(150,130,180,360,20);
arc(150,130,180,360,19);
arc(190,130,0,180,20);
arc(190,130,0,180,19);
setcolor(WHITE);
line(350,50,350,180);              //graph of f'(x) sine
line(320,130,500,130);
setcolor(RED);
arc(350,130,270,360,20);
arc(350,130,270,360,19);
arc(390,130,0,180,20);
arc(390,130,0,180,19);
arc(430,130,180,360,20);
arc(430,130,180,360,19);
arc(470,130,90,180,20);
arc(470,130,90,180,19);
setcolor(WHITE);
printf("\nf(x)=%dsin(%dx)\n",a,b);
printf("\n f'(x)=%dcos(%dx)\n",a*b,abs(b));
sprintf(d,"y=%dsin(%dx)",a,b);
outtextxy(80,90,d);
sprintf(c,"y'=%dcos(%dx)",a*b,abs(b));
outtextxy(380,90,c);
setcolor(3);
rectangle(0,360,150,390);
}
else
{
line(50,50,50,180);              //graph of f(x)
line(20,130,230,130);
outtextxy(100,170,"Graph of f(x)");
outtextxy(370,170,"Graph of f'(x)");
setcolor(YELLOW);
arc(70,130,0,180,20);
arc(70,130,0,180,19);
arc(110,130,180,360,20);
arc(110,130,180,360,19);
arc(150,130,0,180,20);
arc(150,130,0,180,19);
arc(190,130,180,360,20);
arc(190,130,180,360,19);
setcolor(WHITE);
line(350,50,350,180);              //graph of f'(x)
line(320,130,500,130);
setcolor(RED);
arc(350,130,0,90,20);
arc(350,130,0,90,19);
arc(390,130,180,360,20);
arc(390,130,180,360,19);
arc(430,130,0,180,20);
arc(430,130,0,180,19);
arc(470,130,180,270,20);
arc(470,130,180,270,19);
setcolor(WHITE);
printf("\nf(x)=%dsin(%dx)\n",a,b);
printf("\n f'(x)=%dcos(%dx)\n",a*b,abs(b));
sprintf(d,"y=%dsin(%dx)",a,b);
outtextxy(80,90,d);
sprintf(c,"y'=%dcos(%dx)",a*b,abs(b));
outtextxy(380,90,c);
setcolor(3);
rectangle(0,360,150,390);
}
break;
case 3:
printf("f(x)=acos(bx)");
printf("\nf'(x)=-absin(bx)");
printf("\n\nEnter the values of a & b\n");
scanf("%d%d",&a,&b);
if(a==0)
{
func();
}
if(a>0&&b==0)
{
line(50,50,50,200);          //graph of f(x)
line(20,180,200,180);
outtextxy(70,190,"Graph of f(x)");
outtextxy(370,190,"Graph of f'(x)");
line(350,50,350,200);         //graph of f'(x)
line(320,180,500,180);
sprintf(c,"y=%d",a);
outtextxy(100,100,c);
outtextxy(400,165,"y=0");
setcolor(RED);
line(350,180,500,180);
line(350,179,500,179);
setcolor(YELLOW);
line(50,120,200,120);
line(50,121,200,121);
printf("\nf(x)=%d",a);
printf("\n\n f'(x)=0");
setcolor(3);
rectangle(0,360,90,390);
}
if(a<0&&b==0)
{
line(50,50,50,200);          //graph of f(x)
line(20,110,200,110);
outtextxy(70,100,"Graph of f(x)");
outtextxy(370,190,"Graph of f'(x)");
line(350,50,350,200);         //graph of f'(x)
line(320,180,500,180);
sprintf(c,"y=%d",a);
outtextxy(100,140,c);
outtextxy(400,165,"y=0");
setcolor(RED);
line(350,180,500,180);
line(350,179,500,179);
setcolor(YELLOW);
line(50,150,200,150);
line(50,151,200,151);
printf("\nf(x)=%d",a);
printf("\n\n f'(x)=0");
setcolor(3);
rectangle(0,360,90,390);
}
if(a>0&&b>0)
{
printf("\nf(x)=%dcos(%dx)",a,b);
printf("\n\n f'(x)=%dsin(%dx)",-a*b,b);
sprintf(c,"y=%dcos(%dx)",a,b);
outtextxy(90,70,c);
outtextxy(80,150,"Graph of f(x)");
outtextxy(380,150,"Graph of f'(x)");
sprintf(c,"y'=%dsin(%dx)",-a*b,b);
outtextxy(390,70,c);
line(50,50,50,200);              //graph of f(x)
line(20,110,200,110);
line(330,50,330,200);
line(300,110,500,110);

setcolor(YELLOW);
arc(50,110,0,90,20);
arc(50,110,0,90,19);
arc(90,110,180,360,20);
arc(90,110,180,360,19);
arc(130,110,0,180,20);
arc(130,110,0,180,19);
arc(170,110,180,270,20);
arc(170,110,180,270,19);
setcolor(RED);
arc(350,110,180,360,20);
arc(350,110,180,360,19);
arc(390,110,0,180,20);
arc(390,110,0,180,19);
arc(430,110,180,360,20);
arc(430,110,180,360,19);
arc(470,110,0,180,20);
arc(470,110,0,180,19);
setcolor(3);
rectangle(0,360,150,390);
}
break;
case 4:
printf("f(x)=atan(bx)");
printf("\nf'(x)=ab(sec(bx))^2");
printf("\n\nEnter the values of a & b\n");
scanf("%d%d",&a,&b);
printf("\nf(x)=%dtan(%dx)",a,b);
printf("\n\n f'(x)=%d(sec(%dx))^2",a*b,b);
setcolor(3);
rectangle(0,360,200,390);
break;
case 5:
printf("f(x)=acosec(bx)");
printf("\nf'(x)=-abcosec(bx)cot(bx)");
printf("\n\nEnter the values of a & b\n");
scanf("%d%d",&a,&b);
printf("\nf(x)=%dcosec(%dx)",a,b);
printf("\n\n f'(x)=%dcosec(%dx)cot(%dx)",-a*b,b,b);
setcolor(3);
rectangle(0,360,250,390);
break;
case 6:
printf("f(x)=asec(bx)");
printf("\nf'(x)=absec(bx)tan(bx)");
printf("\n\nEnter the values of a & b\n");
scanf("%d%d",&a,&b);
printf("\nf(x)=%dsec(%dx)",a,b);
printf("\n\n f'(x)=%dsec(%dx)tan(%dx)",a*b,b,b);
setcolor(3);
rectangle(0,360,250,390);
break;
case 7:
printf("f(x)=acot(bx)");
printf("\nf'(x)=-ab(cosec(bx))^2");
printf("\n\nEnter the values of a & b\n");
scanf("%d%d",&a,&b);
printf("\nf(x)=%dcot(%dx)",a,b);
printf("\n\n f'(x)=%d(cosec(%dx))^2",-a*b,b);
setcolor(3);
rectangle(0,360,250,390);
break;
case 8:
printf("f(x)=alog(bx)");
printf("\nf'(x)=(ab)/x");
printf("\n\nEnter the values of a & b\n");
scanf("%d%d",&a,&b);
printf("\nf(x)=%dlog(%dx)",a,b);
printf("\n\n f'(x)=%d/x",a*b);
setcolor(3);
rectangle(0,360,100,390);
break;
case 9:
printf("f(x)=e^(ax)");
printf("\nf'(x)=ae^(ax)");
printf("\n\nEnter the value of a\n");
scanf("%d",&a);
printf("\nf(x)=e^(%dx)",a);
printf("\n\n f'(x)=%de^(%dx)",a,a);
setcolor(3);
rectangle(0,345,150,375);
break;
case 10:
printf("f(x)=a^x");
printf("\nf'(x)=a^x(loga)");
printf("\n\nEnter the value of a\n");
scanf("%d",&a);
printf("\nf(x)=%d^x",a);
printf("\n\n f'(x)=%d^x(log%d)",a,a);
setcolor(3);
rectangle(0,345,150,375);
break;
}
getch();
return 0;
}



func()
{
outtextxy(70,190,"Graph of f(x)");
outtextxy(370,190,"Graph of f'(x)");
outtextxy(100,165,"y=0");
outtextxy(400,165,"y'=0");
line(50,50,50,200);              //graph of f(x)
line(20,180,200,180);
setcolor(YELLOW);
line(50,180,200,180);
setcolor(WHITE);
line(350,50,350,200);         //graph of f'(x)
line(320,180,500,180);
setcolor(RED);
line(350,180,500,180);
line(350,179,500,179);
printf("\nf(x)=0");
printf("\n\n f'(x)=0");
setcolor(3);
rectangle(0,360,80,390);
getch();
return 0;
}
