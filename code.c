/*Contact Management System*/
struct contact
{
	char name[100];
	int mobileno;
	char email[200];
}
struct contact s[100];
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
			case 2: 
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
			}
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
