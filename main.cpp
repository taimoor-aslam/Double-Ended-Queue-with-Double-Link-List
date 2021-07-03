#include"DE_QUEUE.h"
int main()
{
	char choice;
	int val;
	DEqueue d;
	do
	{
		cout<<"\t__________________________"<<endl;
		cout<<"\t|     ***MENUE***         |"<<endl;
		cout<<"\t| I/i :: insert from rear |"<<endl;
		cout<<"\t| F/f :: insert from front|"<<endl;
		cout<<"\t| D/d :: delete from front|"<<endl;
		cout<<"\t| R/r :: delete from rear |"<<endl;
		cout<<"\t| P/p :: print data       |"<<endl;
		cout<<"\t| E/e ::  exit(0)         |"<<endl;
		cout<<"\t---------------------------"<<endl;
		cout<<"choice= ";
		cin>>choice;
		switch(choice)
		{
		case 'I':case 'i':
			cout<<"Enter value which you want to insert: ";
			cin>>val;
			d.enqueue(val);
			break;
		case 'F':case'f':
			cout<<"Enter value which you want to insert: ";
			cin>>val;
			d.insertFront(val);
			break;
		case 'D':case'd':
			 if(d.deQueue())
			 {
				cout<<"value deleted successfully."<<endl;
			 }
			 else
			{
				 cout<<"Sorry you can't delete values anymore."<<endl;
			 }
			break;
		case 'R':case 'r':
			 if(d.deleteRear())
			 {
				cout<<"value deleted successfully."<<endl;
			 }
			 else
			{
				 cout<<"Sorry you can't delete values anymore."<<endl;
			 }
			break;
		case'P':case'p':
			d.display();
			break;
		case'E':case'e':
			break;
		default:
			cout<<"Sorry! Inavlid choice."<<endl;
			cout<<"Chose the appropriate choice."<<endl;
		}
	}
	while(choice!='E'&&choice!='e');
	system("pause");
	
}