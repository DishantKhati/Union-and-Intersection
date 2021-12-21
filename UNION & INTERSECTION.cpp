#include<stdio.h>
int main()
{int l=0,a[80],b[80],n,u,nu[80],jn[80];
  printf("ENTER TOTAL NO. OF ELEMENTS : ");
  scanf("%i",&n);
  for(int i=0;i<n;++i)	
  {printf("enter the element at place %i : ",i+1);
   scanf("%i",&a[i]);  
  }
  printf("ENTER TOTAL NO. OF ELEMENTS : ");
  scanf("%i",&u);
  for(int i=0;i<u;++i)	
  {printf("enter the element at place %i : ",i+1);
   scanf("%i",&b[i]);  
  }
  printf("union: ");
  for(int i=0;i<u;++i)
   jn[i]=b[i];
   int k=u;
  for(int i=0;i<n;++i)
   {int n=0;
     for(int j=0;j<u;++j)
    { if(a[i]==b[j])
      {nu[l]=a[i];
		n=1;	  
	  }
	}	
    if(n==0)
	{jn[k]=a[i];
	 k++;
    }
   }
   for(int i=0;jn[i]!='\0';++i)
   printf("%i ",jn[i]);
  printf("\nintersection: ");
  for(int i=0;nu[i]!='\0';++i)
  printf("%i ",nu[i]);
}
