#import <stdio.h>
#import <unistd.h>
#import <stdlib.h>
#import <string.h>

#define m 10

int main(int argc, char *argv[])
{
	/* code */
	int no_arg=argc;
	if (no_arg == 1)
	{
		/* code */
		printf("there is an error in printing the numbers\n");
	}
	else
	{	
		int a[m];
		pid_t pid;
		if (no_arg-1<m)
		{
			/* code */
			for (int i = 1; i < no_arg; i++)
			{
				/* code */
				a[i-1]=atoi(argv[i]);
			}
		}
		else
		{
			printf("error in calculations\n");
		}
		for (int i = 0; i < no_arg-1; i++)
		{
			/* code */
			printf("%d\n",a[i]);
		}
		for (int i = 0; i < no_arg-1; i++)
		{
			/* code */
			pid=fork();
			if (pid == 0)
			{
				printf("the factorial of the number %d is %d with child process id is %d from parent process id %d\n",a[i],factorial(a[i]),getpid(),getppid());
				exit(0);
			}
			
		}
	}
	return 0;
}

int factorial (int n)
{
	if(n < 0)
		{
			printf("error");
		}
	else if (n <= 0)
	{
		/* code */
		return 1;
	}
	else
	{
		return (n * factorial(n-1));
	}
}

