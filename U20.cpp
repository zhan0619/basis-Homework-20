#include <stdio.h>  

#include <stdlib.h> 

struct phone 

{

   char i[16],y[10];

   int t,r;

}; 

int main(void)

{

    int i;


	printf("                 phone手機結構體                 \n");

	printf("-------------------------------------------------\n"); 

    struct phone p[5]={  

	"APPLE", "X", 2017, 35000, 

    "Samsung", "S9", 2018, 30000, 

    "Huawei", "P20 Pro", 2018, 32000, 

    "OPPO", "R15", 2018, 9000, 

    "ASUS", "Zenfone 5", 2018, 12000

	};

    

    for (i=0; i<5; i++) 

    {

        printf("%s %s %4d %5d\n", p[i].i, p[i].y, p[i].t, p[i].r);

    }

    system("pause"); 

    return 0;

}

