#include<cstring>
#include<iostream>

using namespace std;

class banking
{
	public:
		char username[50],pass1[50],pass2[50];
		char yesno;
		int total_value=0,deposit_value,withdraw_value,cnic,choice1,choice2;
		const double withdraw_limit=20000;
	 condition();
	 account();	
	 banking()
	{
		cout<<"\t\t\t\t---------------------------";
		cout<<"\n\t\t\t\tWelcome to OPT Bank ATM";
		cout<<"\n\t\t\t\t---------------------------";
	    cout<<"\n\n";
	    cout<<"Do you have an Account Y/N : ";
	    cin>>yesno;
	}
	
};
int main()
{
	banking obj1;
	obj1.condition();
	obj1.account();
	return 0;
}

//Account creation section
int banking::condition()
{
	if(yesno=='Y' || yesno=='y')
	{
		cout<<"\n\nEnter Username : ";
		cin>>username;
		cout<<"Enter your Password : ";
		cin>>pass1;
		cout<<"Enter your Total amount : "<<total_value;
	}
	else if(yesno=='N' || yesno=='n')
	{
		cout<<"\nIf you don't have an account yet, you can create it right now.";
		cout<<"\n\nSelect a Username : ";
		cin>>username;
		cout<<"Enter your CNIC : ";
		cin>>cnic;
		for(int i=0;i>-1;i--)
		{
		    cout<<"\nSelect a Password : ";
		    cin>>pass1;
		    cout<<"Confirm Password : ";
		    cin>>pass2;
		    if(strcmp(pass1,pass2)==0)
		    {
		    	cout<<"Account created successfully !\n\n";
		    	i=-100;
			}
			else
			{
				cout<<"Oops! Password didn't matched.Try Again..";
				i=2;
			}
	    }
    }
}

//Account display section
int banking::account()
{
	for(int j=0;j>-1;j--)
	{
		cout<<"\n";
		cout<<"\t\t-----------------------------------------------------------------";
		cout<<"\n\t\t\t\t\tTotal amount:"<<total_value;
		cout<<"\n\t\t-----------------------------------------------------------------";
		cout<<"\n\t\tSelect Transections..";
		cout<<"\n\n\t\t---------------------\t\t\t---------------------";
		cout<<"\n\t\tFor DEPOSIT press 1\t\t\tTo WITHDRAW press 2";
		cout<<"\n\t\t---------------------\t\t\t---------------------";
		cout<<"\n\n\t\t-------------------";
		cout<<"\n\t\tTo Exit press 3";
		cout<<"\n\t\t-------------------";
		cout<<"\n\n\t\tEnter your choice : ";
		cin>>choice1;
		if(choice1==1)
		{
			cout<<"\n\t\tHow much amount do you want to deposit : ";
			cin>>deposit_value;
			cout<<"\n\n\t\t---------------------\t\t\t---------------------";
		    cout<<"\n\t\tpress 1 to Confirm\t\t\tpress 2 to Abort";
    		cout<<"\n\t\t---------------------\t\t\t---------------------";
    		cout<<"\n\n\t\tEnter your choice : ";
    		cin>>choice2;
    		if(choice2==1)
    		{
    			total_value=total_value+deposit_value;
				j=2;	
			}
			else
			{
			    j=2;
		    }
		}
		if(choice1==2)
		{
			cout<<"\n\t\tEnter the amount you want to withdraw : ";
			cin>>withdraw_value;
			cout<<"\n\n\t\t---------------------\t\t\t---------------------";
		    cout<<"\n\t\tpress 1 to Confirm\t\t\tpress 2 to Abort";
    		cout<<"\n\t\t---------------------\t\t\t---------------------";
    		cout<<"\n\n\t\tEnter your choice : ";
    		cin>>choice2;
    		if(choice2==1)
    		{
			    if(total_value<withdraw_value)
			    {
			    cout<<"\t\tWithdraw amount exceeded from Total Amount.\n";
				j=4;
			    }
			    if(total_value>=withdraw_value)
			    {
				total_value=total_value-withdraw_value;
				cout<<"\t\tWithdrawal successful! New balance is : "<<total_value;
				j=4;
			    }
			    if(withdraw_value>withdraw_limit)
			    {
			    total_value=total_value-100;
			    cout<<"\n\t\tDeduction of Rs 100 as withdrawal amount exceeded daily limit of "<<withdraw_limit;
			    j=4;
				}
		    else
		    {
		    	j=4;
			}
		}
	}
		if(choice1==3)
		{
	        cout << "\t\t\t -----------------------------------------------" << endl;
            cout << "\t\t\t|                                               |" << endl;
            cout << "\t\t\t|  . . .Thanks for visiting OPT Bank ATM . . .  | " << endl;
   	        cout << "\t\t\t|                                               |" << endl;
            cout << "\t\t\t -----------------------------------------------" << endl;
			j=-100;
		}
	}
}


