#include<stdio.h>


struct Marks 
{
    int roll_no;
    char name[100];
    int chem_marks, maths_marks, phy_marks;
};


main() 
{
	int i;
    struct Marks marks[100];


    for(i=0;i<5;i++)
	{
		printf("Student %d\n",i+1);
        printf("Enter roll no.=\n");
        scanf("%d",&marks[i].roll_no);
        printf("Enter name=\n");
        scanf("%s",marks[i].name);
        printf("Enter Chemistry marks=\n");
        scanf("%f",&marks[i].chem_marks);
        printf("Enter Maths marks=\n");
        scanf("%f",&marks[i].maths_marks);
        printf("Enter Physics marks=\n");
        scanf("%f",&marks[i].phy_marks);
    }


	for(i=0;i<5;i++) 
	{
	    printf("Student=%d\n",i+1);
	    int pt=(marks[i].chem_marks+marks[i].maths_marks+marks[i].phy_marks/300)*100;
	    printf("Percentage=%d\n",pt);
	}

}

