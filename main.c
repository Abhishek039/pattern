

#include <stdio.h>

int main()
{
    int i,j,k,l;
    int a,b, n=7;
    int spaces,star,m,p;
    int d;
    d=(((3*n)+2)/2);
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<d+1;j++)
        {
            printf(" ");
        }
        for(j=0;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    for(k=0;k<2;k++)
    {
        for(j=0;j<(d+1);j++)
        {
            printf(" ");
        }
        for(i=0;i<n;i++)
        {
            
        
        if(i==(n/2))
        {
            printf("@");
           
        }
        else
        {
            printf(" ");
        }
        
    }
    printf("\n");
}
   
   
   spaces = n-1;
    star = 1;
    
    /* Iterate through rows */
    for(m=1; m<n*2; m++)
    {
        /* Print leading spaces */
        for(p=1; p<=spaces; p++)
            printf(" ");
        
        /* Print stars */
        for(p=1; p<=star; p++)
        {
            printf("*");
            
        }
        for(i=0;i<=n+1;i++)
        {
            
        if(m<n)
          {
         
        if(i==(n+1))
        {
            printf("@");
           
        }
        else
        {
            printf(" ");
        }
          }
          else if(m==n)
          { printf("@");}
        }
        /* Move to next line */
        printf("\n");
        
        if(m < n) 
        {
            star++;
            spaces--;
        }
        else
        {
            star--;
            spaces++;
        }
    }


    return 0;
}
