#include<stdio.h>
#include<math.h>
#include<conio.h>


void benjin()
{
     int N,m;
     double i,F,P;
     printf("复利终值:");
     scanf("%lf",&F);
     printf("年利率:");
     scanf("%lf",&i);
     printf("存入年限:");
     scanf("%d",&N);
     printf("年复利次数:");
     scanf("%d",&m);
     P=F/pow((1+i/m),N*m);
     printf("年复利终值为%.4lf需要本金为:%.4lf\n",F,P);
}
void fuli()
{
     int N,m;
     double i,F,P;
     printf("存入本金:");
     scanf("%lf",&P);
     printf("年利率:");
     scanf("%lf",&i);
     printf("存入年限:");
     scanf("%d",&N);
     printf("年复利次数:");
     scanf("%d",&m);
     F=P*pow((1+i/m),N*m);
     printf("复利终值:%.4lf\n",F);
}
void danli()
{
     int N;
     double i,H,P,L;
     printf("存入本金:");
     scanf("%lf",&P);
     printf("年利率:");
     scanf("%lf",&i);
     printf("存入年限:");
     scanf("%d",&N);
     L=P*N*i;
     H=L+P;
     printf("本息和为:%.4lf\n",H);
}
void years()
{
     int N,m;
     double i,F,P;
     printf("复利终值:");
     scanf("%lf",&F);
     printf("存入本金:");
     scanf("%lf",&P);
     printf("年利率:");
     scanf("%lf",&i);
     printf("年复利次数:");
     scanf("%d",&m);
     N=(int)(log(F/P)/log(1+i/m)/m);
     printf("从%.4lf到%.4lf需要%d年\n",P,F,N);
}
void nianlilv()
{
     int N,m;
     double i,F,P;
     printf("复利终值:");
     scanf("%lf",&F);
     printf("存入本金:");
     scanf("%lf",&P);
     printf("存入年限:");
     scanf("%d",&N);
     printf("年复利次数:");
     scanf("%d",&m);
     i=m*(pow(F/P,1.0/(N*m))-1);
     printf("从%.4lf到%.4lf需要%.4lf\n",P,F,i);
}
void nianjinzhongzhi()/
{
     int N,n;
     double i,F,P;
     printf("存入本金:");
     scanf("%lf",&P);
     printf("存入年限:");
     scanf("%d",&N);
     printf("年利率:");
     scanf("%lf",&i);
     printf("\t\t1:按年投资\n\t\t2:按月投资\n");
A:printf("选择功能<1|2>:");
     scanf("%d",&n);
     if(n==1)
     {
         F=P*(pow(1+i,N)-1)/i;
         
     }
     else if(n==2)
     {
         F=N*12*(P*(i/12)+P);
     }
     else
     {
         printf("输入有误,重新输入\n");
         goto A;
     }
     printf("%d年后的总产值:%.4lf\n",N,F);

}
void menu()//菜单
{ 
       printf("\t\t|           1:计算本金              |\n");
       printf("\t\t|           2:计算年复利终值        |\n");
       printf("\t\t|           3:单利计算              |\n");
       printf("\t\t|           4:计算年份              |\n");
       printf("\t\t|           5:计算年利率            |\n");
       printf("\t\t|           6:年金终值              |\n");
       printf("\t\t|           0:结束                  |\n"); 
       printf("输入选择的功能(0~6):\n");

}
void main()
{
     int n;
     while(1)
     {
         menu();
         scanf("%d",&n);
         if(n==0)
             break;
         switch(n)
         {
            case 1:
                benjin();break;
            case 2:
                fuli();break;
            case 3:
                 danli();break;
            case 4:
                 years();break;
            case 5:
                 nianlilv();break;
            case 6:
                 nianjinzhongzhi();break;
            case 0:n=0;break;    

         }
          getch();
     }
}