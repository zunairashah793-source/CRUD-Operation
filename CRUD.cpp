#include<iostream>
using namespace std;

int i=0;

void add(int a[])
{
	cout<<"Enter the number you want to add "<<endl;
	cin>>a[i];
	i++;
	cout<<"Added sucessfuly"<<endl;
}

void exitProgram()
 {
 	
 }

void search(int a[])
{
	int n;
	cout<<"Enter the number you want to search "<<endl;
	cin>>n;
	for(int j=0;j<i;j++)
	{
		if(n==a[j])
		{
			cout<<"Your searched value is "<<a[j]<<endl;
		}
	}
}

void update(int a[])
{
	int n;
	cout<<"Enter the number you want to update "<<endl;
	cin>>n;
	for(int j=0;j<i;j++)
	{
		if(n==a[j])
		{
			cout<<"Your updated value is "<<a[j]<<endl;
		}
	}
}

void del(int a[])
{
	int n;
	cout<<"Enter the number you want to delete "<<endl;
	cin>>n;
	for(int j=0;j<i;j++)
	{
		if(n==a[j])
		{
			for(int k=j;k<j;k++)
			{
				a[k]=a[k+1];
			}
		}i--;
		break;
	}
}

void show(int a[])
{
	for(int j=0;j<i;j++)
	{
		cout<<"\n"<<a[j]<<endl;
	}
}

int main()
{
	cout<<"Press 1 for add"<<endl;
	cout<<"Press 2 for search"<<endl;
	cout<<"Press 3 for delete"<<endl;
	cout<<"Press 4 for update"<<endl;
	cout<<"Press 5 for show"<<endl;
	cout<<"Press 6 for exit"<<endl;
	
p:
 int choice;
 cout<<"Enter your choice "<<endl;
 cin>>choice;
 int a[20];
 
 switch(choice)
 {
 	case 1:
 	add(a);
 	break;
 	case 2:
	serch(a);
	break;
	case 3:
	del(a);
	break;
	case 4:
	update(a);
	break;
	case 5:
	show(a);
	break;
	case 6:
	exitProgram(0);
	break;
	default:
	cout<<"Invalid value...try again"<<endl;
	 	
 }
  	goto p;
	
}
