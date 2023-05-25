#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"parser.h"        
int fin_pos=0,start,end,c=0;
void parser_main(Lex a[])
{
    int i;    
    for (c=0;a[c].type[0]!='\0';c++);
    printf("\n");
    for(i=0;i<c;i++)
        printf("%s:\t%s\n",a[i].type, a[i].val);
    postfixafy(a);
}
int i=0;
void postfixafy(Lex a[])
{
    double val=0.0;
    for(i=0;i<c;i++)
    {
        if(strcmp(a[i].type,TT_OP) && strcmp(a[i].type,TT_P) && strcmp(a[i].type,TT_COMMA) && strcmp(a[i].type,TT_EQ))
        {
            i=eval(a,i);
            val=calc(&a[start],end-start);
            sprintf((f+fin_pos)->val,"%lf",val);
            fin_pos++;
        } 
        if(!(strcmp(a[i].type,TT_OP) && strcmp(a[i].type,TT_P) && strcmp(a[i].type,TT_COMMA) && strcmp(a[i].type,TT_EQ)))
        {
            add(a,i);
        }
    }
}
int eval(Lex a[],int i)
{
    start=i;
    while (strcmp(a[i].type,TT_OP) && strcmp(a[i].type,TT_P) && strcmp(a[i].type,TT_COMMA) && strcmp(a[i].type,TT_EQ) && i<c)
    {
      end=i;
      i++;
    }
    return i;
}
void add(Lex a[],int i)
{
    strcpy((f+fin_pos)->val,a[i].val);
    fin_pos++;
    printf("heloo");
}
double calc(Lex exp[], int sz){
    int bracket_count=0;
    for(int i=0;i<sz;i++){

    }
}
void BO(){
    ;
}
void DM(){
    ;
}
void AS(){

}
//90/45+30%10-2*5
// ((90 45 /) (30 10 %) +) (2 5 *) -
//            -
//      *            +
//     2 5        /     %
//             90  45 30  10
//2+5-7*9
//(2 5 +) (7 9 *) -