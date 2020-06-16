/*Contact Management System*/
#include<stdio.h>
struct contact
{
	char name[100];
	char mobileno[100];
	char email[200];
};
struct contact s[100];
void addition();
void validate();
int choice,i,count=0,j=0;
char temp_name[100],temp_mobile[100],temp_email[100];
int main()
{
	while(1)
	{
		printf("\nCONTACT MANAGEMENT SYSTEM\n1) ADDITION\n2) DELETION\n3) SEARCH\n4) CONTACT BOOK\n5) EXIT\nEnter Your Choice\t");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				addition();
				break;	
			}	
			/*case 2: 
			{
				deletion();
				break;	
			}
			case 3:
			{
				search();
				break;	
			}
			case 4:
			{
				display();
				break;			
			}*/
			case 5:
			{
				exit(1);
				break;	
			}
			default:
			{
				printf("\nPlease Enter the valide choice\n");
				break;	
			}
		}	
	}
}
void addition()
{
	printf("Enter the Name\t");
	scanf("%s",temp_name);
	printf("Enter the Mobile Number\t");
	scanf("%s",&temp_mobile);
	printf("Enter the email\t");
	scanf("%s",temp_email);
	validate();
	strcpy(s[j].name,temp_name);
	strcpy(s[j].mobileno,temp_mobile);
	strcpy(s[j].email,temp_email);
	j++;
	printf("\n\nContact saved successfully\n");
}
void validate()
{
	for(i=0;i<100;i++)
	{
		if(!strcmp(s[i].name,temp_name))
		{
			printf("Name already existed!\n");
			exit(1);	
		}
	}
	if(i==100)
	{
		count=0;
		for(i=0;temp_email[i]!='\0';i++)
		{
			if(temp_email[i]=='@' || temp_email[i]=='.')
			{
				count++;	
			}	
		}	
		if(count!=2)
		{
			printf("Please Enter correct Email\n");
			exit(1);
		}
		else
		{
			if(!(strlen(temp_email)>=5))
			{
				printf("\nPlease Enter correct Email\n");
				exit(1);	
			}
		}
	}
	for(i=0;i<10;i++)
	{
		if(strlen(temp_mobile)!=10 || temp_mobile[0]=='0')
		{
			printf("Please Enter the valid Mobile Number");
			exit(1);	
		}
		else if(!(temp_mobile[i]>='0' && temp_mobile[i]<='9'))
		{
			printf("Please Enter the valid Mobile Number");
			exit(1);	
		}	
	}
	for(i=0;i<100;i++)
	{
		if(!strcmp(temp_mobile,s[i].mobileno))
		{
			printf("Phone Number already existed in contact book\n");
			exit(1);	
		}	
	}
}
