#include <iostream>
using namespace std;

int main()
{
///initialization

    int i,j,n,s,p=0,q=0,a,b,c,d;

///taking table R

    printf("please enter the number of rows you want to enter for table R\t");
    scanf("%d",&n);

    char r[(n+1)][5];
    for(i=0;i<5;i++)
    {
        r[0][i]='A'+i;
    }
    printf("please enter the table r\n");
    for(i=1;i<=n;i++)
    {
        printf("please enter the %d th row\t",i);
        for(j=0;j<5;j++)
        {
        //    scanf("%d",r[i][j]);
            cin>>r[i][j];
        }
    }

///printing table R

    printf("Entered table R is\n");
    for(i=0;i<n+1;i++)
    {
        printf("\n");
        for(j=0;j<5;j++)
        {
            cout<<" "<<r[i][j]<<" ";
        }
    }


///table R is taken till here 
///taking table S
    
    printf("\nplease enter the number of rows for table S:- ");
    cin>>s;

    char S[s+1][2];
    for(i=0;i<s;i++)
    {
        S[0][i]='D'+i;
    }
    for(i=1;i<=s;i++)
    {
        printf("please enter the %d th row\t",i);
        for(j=0;j<2;j++)
        {
            cin>>S[i][j];
        }
    }
    for(i=1;i<=s;i++)
    {
        printf("\n");
        for(j=0;j<2;j++)
        {
            cout<<" "<<S[i][j]<<" ";
        }
    }

    /////////TOOK TABLE S
    ////∏R-S,S (r ) =table r
    ////∏R-S (r ) = table r till first 3 columns
    ////defineing this table by rs

    char trs[n+1][3];
    int countrs=n;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<3;j++)
        {
            trs[i][j]=r[i][j];
        }
    }
    char temp1,temp2,temp3;

    for(a=1;a<=n;a++)
    {
        temp1=trs[a][0];
        temp2=trs[a][1];
        temp3=trs[a][2];
        for(b=a+1;b<=n;b++)
        {
            if(temp1==trs[b][0]&&temp2==trs[b][1]&&temp3==trs[b][2]&&a!=b)
            {
                trs[b][0]=0;
                trs[b][1]=0;
                trs[b][2]=0;
                countrs--;
            }
        }
    }
//till now updated the same rows to 0 0 0 keeping one copy safe
    for(i=0;i<=n;i++)
    {
        for(a=n;a>=1;a--)
        {
            if(((trs[a][0]!=0||trs[a][1]==0||trs[a][2]==0))&&trs[a-1][0]==0&&trs[a-1][1]==0&&trs[a-1][2]==0)
            {
                trs[a-1][0]=trs[a][0];
                trs[a-1][1]=trs[a][1];
                trs[a-1][2]=trs[a][2];
                trs[a][0]=0;
                trs[a][1]=0;
                trs[a][2]=0;
                
            }
        }
    }
//till now took all 0 0 0 rows to the bottom of the array
char rs[countrs+1][3];
    for(i=0;i<=countrs;i++)
    {
        for(j=0;j<3;j++)
        {
            rs[i][j]=trs[i][j];
        }
    }
//made the table ∏R-S (r ) having counter+1 rows and 3 columns saved as rs
//to print the table please delete the comment operator

    printf("\nThe table ∏R-S (r ) (named as table rs in this program ) is \n");
    for(i=0;i<=countrs;i++)
    {
        cout<<"\n";
        for(j=0;j<3;j++)
        {
            cout<<" "<<rs[i][j]<<" ";
        }
    }


//calculating the table ∏R-S (r ) x s 
    char trsms[(countrs*s)+1][5];
    /*
    for(c=0;c<s;c++)
    {
        for(a=0;a<=countrs;a++)
        {
            for(b=0;b<3;b++)
            {
                trsms[(a+1)*(c+1)-(a+1)][b]=rs[a][b];

            }
        }
    }*/
    for(i=0;i<5;i++)
    {
        trsms[0][i]=rs[0][i];
        if(i<3)
        {
            trsms[0][i]=rs[0][i];
        }
        else
        {
            trsms[0][i]=S[0][i-3];
        }
        
    }
    //feeding the table trsms
    for(a=0;a<s;a++)
    {
        for(i=1;i<=countrs;i++)
        {
            for(j=0;j<5;j++)
            {
                if(j<3)
                {
                    trsms[i+a*countrs][j]=rs[i][j];

                }
                else
                {
                    trsms[i+a*countrs][j]=S[a+1][j-3];
                }    
            }
        }
    }
    int counttrsms = countrs*s;
    //to print the table for ∏R-S (r ) x s  remove the comment
    /*
        printf("\nthe table ∏R-S (r ) x s (named as table trsms in this table ) is\n\n");
    for(i=0;i<=counttrsms;i++)
    {
        cout<<"\n";
        for(j=0;j<5;j++)
        {
            cout<<" "<<trsms[i][j]<<" ";
        }
    }
    */
   //subtracting the table r from the table trsms and substituing same rows to 00000
   int countf1=counttrsms;
   for(a=0;a<counttrsms;a++)
   {
       for(b=0;b<n;b++)
       {
           if(trsms[a][0]==r[b][0]&&trsms[a][1]==r[b][1]&&trsms[a][2]==r[b][2]&&trsms[a][3]==r[b][3]&&trsms[a][4]==r[b][4])
           {
               trsms[a][0]=0;
               trsms[a][1]=0;
               trsms[a][2]=0;
               trsms[a][3]=0;
               trsms[a][4]=0;
               countf1--;
           }
       }
   }
   //taking all non 00000 rows to the top 
   for(i=0;i<=n;i++)
    {
        for(a=n;a>=1;a--)
        {
            if(((trsms[a][0]!=0||trsms[a][1]!=0||trsms[a][2]!=0))&&trsms[a-1][0]==0&&trsms[a-1][1]==0&&trsms[a-1][2]==0)
            {
                trsms[a-1][0]=trsms[a][0];
                trsms[a-1][1]=trsms[a][1];
                trsms[a-1][2]=trsms[a][2];
                trsms[a][0]=0;
                trsms[a][1]=0;
                trsms[a][2]=0;
                
            }
        }
    }
    char rsms[countf1+1][3];
    for(i=0;i<=countf1;i++)
    {
        for(j=0;j<3;j++)
        {
            rsms[i][j]=trsms[i][j];
        }
    }
    
    //To see the intermediate table please remove the comments
    printf("\n");
        printf("\nthe table rsms is\n\n");
    for(i=0;i<=countf1;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            cout<<" "<<rsms[i][j]<<" ";
        }
    }    
    int countf=countf1;


    for(a=1;a<countrs+1;a++)
    {
        for(b=0;b<countf1;b++)
        {
            if(rs[a][0]==rsms[b][0]&&rs[a][1]==rsms[b][1]&&rs[a][2]==rsms[b][2])
            {
                rs[a][0]=0;
                rs[a][1]=0;
                rs[a][2]=0;
                countf--;
            }
        }
    }
    for(i=0;i<countf1;i++)
    {
        for(j=countrs;j>0;j--)
        {
            if((rs[j][0]!=0||rs[j][1]!=0||rs[j][2]!=0)&&(rs[j-1][0]==0&&rs[j-1][1]==0&&rs[j-1][2]==0))
            {
                rs[j-1][0]=rs[j][0];
                rs[j-1][1]=rs[j][1];
                rs[j-1][2]=rs[j][2];
                rs[j][0]=0;
                rs[j][1]=0;
                rs[j][2]=0;
                cout<<rs[j][0]<<rs[j][1]<<rs[j][2]<<"\n";
            }
        }
    }
    printf("Answer of calculating the Division operation is :- \n");
    for(i=0;i<countf1;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            cout<<" "<<rs[i][j]<<" ";
        }
    }

    return 0;
}
