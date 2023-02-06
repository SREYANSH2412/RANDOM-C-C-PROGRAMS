#include<stdio.h>
#include<conio.h>
#include<string.h>
struct records
{
	int flag, usn;// usn is the key- K with 4 digits
	char name[20];
}rec[10];
int hash(int m)
{
	int slots = 10; //assume number of slots available in hash table is 10
	int r;
	r = m % slots;
	return r;
}
void main()
{
	int m, k, usn, loc, i, n, j;
	char name[20];
	FILE *in, *outp;
	printf("\nEnter no of records to read from file: ");
	scanf("%d", &n);
	in = fopen("input.txt", "r");//create input.txt file inside the source file of the Project created before executing and add min 10 records
	if (n <= 10)
	{
		for (k = 0; k<10; k++)
			rec[k].flag = 0;
		for (i = 0; i<n; i++)
		{
			fscanf(in, "%s%d", name, &usn);
			loc = hash(usn);
			if (rec[loc].flag == 0)
			{
                printf("\naddress of %d: %d",i+1, loc);
				strcpy(rec[loc].name, name);
				rec[loc].usn = usn;
				rec[loc].flag = 1;
			}
			else//linear probing is taking place
			{
                printf("collision detected");
				for (j = loc + 1; j % 10<10; j++)
				{
					if (rec[j % 10].flag == 0)
					{
                        printf("\naddress of %d: %d",i+1, j%10);
						strcpy(rec[j % 10].name, name);
						rec[j % 10].usn = usn;
						rec[j % 10].flag = 1;
						break;
					}
				}
			}
		}
		fclose(in);
		printf("\n\nThe Hash Table Content is: ");
		for (i = 0; i<10; i++)
		{
			if (rec[i].flag == 1)
				printf("\n%s     %d ", rec[i].name, rec[i].usn);
			else
				printf("\n##\n");
		}
		outp = fopen("output.txt", "w");//create output.txt file inside the source file of the Project created before executing
		for (i = 0; i<10; i++)
		{
			if (rec[i].flag == 0)
				fprintf(outp, "\n##");
			else
				fprintf(outp, "\n%s%d ", rec[i].name, rec[i].usn);
		}
		fclose(outp);
	}
	else
		printf("\n Please Provide less than 10 Records !! ");
	_getch();
}
