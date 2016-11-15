#include <stdio.h>

int main (void)
{


    int n1, n2, Sum;
    
    printf("Enter two integers: ");

    // two integers entered by user are stored using scanf
    scanf("%d %d", &n1, &n2);

    // store sum in variable Sum
    Sum = n1 + n2;
	
	//display the two number in ascending order
	if(n1<n2)
	{printf("\n\n%d %d\n", n1, n2);}
	else{printf("\n\n%d %d\n", n2, n1);}

    // display output     
    printf("\n%d + %d = %d", n1, n2, Sum);
	
	// check if the sum is even or odd, 
    // and print result to screen
    if(Sum % 2 == 0) printf("\n\n%d is even\n", Sum);
    else printf("\n%d is odd\n", Sum);

	printf("\n\nhas this changed anythingn?\n\n\n");
    return 0;
}
