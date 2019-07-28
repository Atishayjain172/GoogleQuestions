#include <stdio.h>
#include <conio.h>

int wins(char n,char m)
{
if((n=='r' && m=='s')||(n=='s' && m=='p')||(n=='p' && m=='r'))
    {
        return 1;
    }
    else if(n==m)
    {
        return 2;
    }
    else
    {
        return 0;
    }
}
int main()
{
    printf("Rock paper scissor game\n NOTE:in final answer p=paper,r=rock,s=scissor\n");
    int ans,i,j,x,val=0,a[3],max;
    char pla1[8],pla2[8],pla3[8],pla4[8],p[3],choose;
    char g[3]={'p','s','r'};
    for(x=0;x<4;x++)
    {
    printf("\n%d move:\n",x+1);
    printf("\n enter moves for all 3 players:\n");
    scanf("%s %s %s",&pla1,&pla2,&pla3);
    p[0]=pla1[0];
    p[1]=pla2[0];
    p[2]=pla3[0];
    for(i=0;i<=2;i++)
    {
       for(j=0;j<=2;j++)
       {
          if((wins(p[j],g[i]))==0 ||(wins(p[j],g[i]))==2)
        {
          val++;
        }
       }
       a[i]=val;
       val=0;
    }

       printf("\n player1=%s \n player2=%s \n player3=%s \n My move=",pla1,pla2,pla3);
       (a[0]>a[1])? ((a[0]>a[2])? (printf("%c\n",g[0])):(printf("%c\n",g[2]) )) : ((a[1]>a[2])? (printf("%c\n",g[1])) : (printf("%c\n",g[2])));
    }
    return 0;
}
