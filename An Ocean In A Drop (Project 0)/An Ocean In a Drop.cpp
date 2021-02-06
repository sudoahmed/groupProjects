#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<ctime>
#include<fstream>
#include <conio.h>

//-------------------List of parent functions------------------------------------------------------
void title();
void welcomescreen();
void login();
void choice();
void ultimate_conv();
void falme_matrix();
void number_sysConv();
void hangMan();
void exit_me();
//void hangMan_1();

// Ultimate Converter's Functions
void currCon();
void weightCon();
void disCon();

// Flaming Matrix Calculator Functions

void matAdd(float *,int, float *, int, int, int);
void matSub(float *,int, float *, int, int, int);
void matDiv(float *,int, float *, int, int, int);
void matDet(float *,int, float *, int, int, int, int, int);
void matTrans(float [][10],int, float [][10], int, int, int, int, int);
void matInv(float *,int, float *, int, int, int, int, int);
void matAdj(float *,int, float *, int, int, int, int, int);
void matMul(float [][10],int, float [][10], int, int, int, int, int);

// Number System Calculator's Function

void decimal_to_binary();
void binary_to_decimal(); 
void octal_to_decimal();
void decimal_to_octal();
void decimal_to_hexadecimal();
void hexadecimal_to_decimal();
void hexadecimal_to_binary();
void exit();




using namespace std;

//-------------------------------------Main Function------------------------------------------------------------
int main () {
  				
  system("color 3f");
  welcomescreen();      
  return 0;
}




//-----------------------------Title------------------------------------------------------------
void title()
{
	cout  << "   \t\t\t\t       " << "---------------------" << endl;
    cout << "   \t\t\t              | AN OCEAN IN A DROP  |" << endl;
    cout  << "   \t\t\t\t       " << "---------------------" << endl;
}


//------------------------------------Welcomescreen---------------------------------------------------
void welcomescreen()
{
	cout << setw(60) << "======================" << endl;
    cout << setw(60) << "Welcome to our Project" << endl;
    cout << setw(60) << "======================" << endl;


    cout << setw(58) << "Project Name :"<< endl;
    cout  << "   \t\t\t\t       " << "---------------------" << endl;
    cout << "   \t\t\t              | AN OCEAN IN A DROP  |" << endl;
    cout  << "   \t\t\t\t       " << "---------------------" << endl << endl << endl;
    cout << setw(60) << " Project Contributors " << endl;
    cout << setw(60) << "======================" << endl << endl;

    cout << setw(50) << " Muhammad Ahmed " << "(2020F-BCS-226)" << endl; 
    cout << setw(57) << " Muhammad Kaleem Uddin " << "(2020F-BCS-213)" << endl; 
    cout << setw(48) << " Aiman Nadeem " << "(2020F-BCS-203)" << endl; 
    cout << setw(47) << " Javeria Ali " << "(2020F-BCS-252)" << endl << endl;
    
    cout << setw(60)<<"Enter any key to continue"<<endl;
    getch();
    system("cls");
    login();
}




//----------------------------------Login--------------------------------------------------------------------------------
void login()
{
	title();
	bool passAuth;
	bool check = true ; // For password inpur Loop execution keeping it true so loop continues (dp while Loop) 

string pass1 = "a10" ;
string psc1 = pass1 ;
string pass2 = "k20" ;
string psc2 = pass2;
string pass3 = "ah30" ;
string psc3 = pass3;
string pass4 = "j40" ;
string psc4 = pass4;


string user1 = "AIMAN" ;
string user2 = "KALEEM" ;
string user3 = "AHMAD" ;
string user4 = "JAVERIA" ;

string a,b;

	
	do
	{
		cout << "\t\t\t\t" << "        ENTER YOUR USERNAME " << endl ;
		cout << "\t\t\t\t" <<"        ===================" << endl ; 
		cin >> a ;
		
		if(a == user1)
		{
			cout << endl ;
			cout << "\t\t\t\t" << "     ===============================" << endl ;
			cout << "\t\t\t\t " << "    YOUR USERNAME IS CORRECT AIMAN! " << endl ;
			cout << "\t\t\t\t" << "     ===============================" << endl ; 
			cout << endl ;
			check == true ;
			break ;
		}
		
		else if(a == user2)
		{
			cout << "\t\t\t\t" << "     ================================" << endl ;
			cout << "\t\t\t\t " << "    YOUR USERNAME IS CORRECT KALEEM! " << endl ;
			cout << "\t\t\t\t" << "     ================================" << endl ; 
			cout << endl ;
			check == true ;
			break ;
		}
		
		else if(a == user4)
		{
			cout << "\t\t\t\t" << "     ================================" << endl ;
			cout << "\t\t\t\t " << "    YOUR USERNAME IS CORRECT JAVERIA! " << endl ;
			cout << "\t\t\t\t" << "     ================================" << endl ; 
			cout << endl ;
			check == true ;
			break ;
		}
		
		else if(a == user3)
		{
			cout << "\t\t\t\t" << "     ===============================" << endl ;
			cout << "\t\t\t\t " << "    YOUR USERNAME IS CORRECT AHMAD! " << endl ;
			cout << "\t\t\t\t" << "     ===============================" << endl ; 
			cout << endl ;
			check == true ;
			break ;
		}
		
		else 
		{
			cout << "\t\t\t\t" << " =====================================" << endl ;
			cout << "\t\t\t\t" << "     YOUR USERNAME IS INCORRECT " << endl ;
			cout << "\t\t\t\t" << " =====================================\n" << endl ; 
			cout << endl ;  
			check == false ; 
 			 
		}
 
	
	}
 	
		while(check == true);
	

	      cout  << "\t\t\t\t\t" << "  ENTER YOUR PASSWORD" << endl ;
	      cout  << "\t\t\t\t\t" << "  ===================" << endl ; 
	    
         if (a == user1)
        {
          cin >> psc1;
		  cout << endl;
		  
		   if(psc1==pass1)
		   {
		    cout  << "\t\t\t\t\t" << "    ---------------" << endl ; 
	        cout  << "\t\t\t\t\t" << "    YOU LOGGED IN !" << endl ;
	        cout  << "\t\t\t\t\t" << "     HELLO AIMAN !" << endl ;
		    cout  << "\t\t\t\t\t" << "    ---------------" << endl ;
		    getch();
		    choice();
		   } 
	    else
		{
		   cout << "YOUR PASSWORD IS INCORRECT AIMAN ! " << endl;
		   cout << endl ;
		   cout<<"ENTER YOUR PASSWORD AGAIN : " ;
		   cin>>psc1;
		   
		if(psc1==pass1)
		{
		cout  << "\t\t\t\t\t" << "    ---------------" << endl ; 
		cout  << "\t\t\t\t\t" << "    YOU LOGGED IN ! " << endl ;
		cout  << "\t\t\t\t\t" << "     HELLO AIMAN !" << endl ;
		cout  << "\t\t\t\t\t" << "    ---------------" << endl ;
		passAuth = true;
		getch();
		choice();
		} 
		else
		{
		   cout << endl ;		 
		   cout << "YOUR PASSWORD IS INCORRECT AIMAN ! " << endl;
		   cout << endl ;
		   cout<<"ENTER YOUR PASSWORD AGAIN : " ;
		   cin >> psc1;
		   
		if(psc1==pass1)
		{
		cout  << "\t\t\t\t\t" << "    ---------------" << endl ; 
		cout  << "\t\t\t\t\t" << "    YOU LOGGED IN ! " << endl ;
		cout  << "\t\t\t\t\t" << "     HELLO AIMAN !" << endl ;
		cout  << "\t\t\t\t\t" << "    ---------------" << endl ;
		passAuth = true;
		getch();
		choice();
		   }   
		   else
		   {
		   cout << endl ;
		   cout << endl ;
		   cout << "              THREE TIMES YOU HAVE ENTERED THE WRONG PASSWORD    "<<endl << endl<< endl;
		   cout << endl ;
		   cout <<          "!---------------------------SYSTEM LOCKED-------------------------------!" << endl;
		   }
		}
		   
	      }
        }
    
         if (a == user2)
       {
         cin >> psc2;
		 cout << endl ;
		 
		 if(psc2==pass2)
	 	 {
	      cout  << "\t\t\t\t\t" << "    ---------------" << endl ; 
		  cout  << "\t\t\t\t\t" << "    YOU LOGGED IN ! " << endl ;
		  cout  << "\t\t\t\t\t" << "    HELLO KALEEM ! " << endl ;
		  cout  << "\t\t\t\t\t" << "    ---------------" << endl ;
		  passAuth = true;
		  getch();
		  choice();
		 } 
		 else
		{
		  
		 cout << "YOUR PASSWORD IS INCORRECT KALEEM !" << endl;
		 cout << endl ;
		 cout<<"ENTER YOUR PASSWORD AGAIN : " ;
		 cin>>psc2;
		 
		if(psc2==pass2)
		{
		cout  << "\t\t\t\t\t" << "    ---------------" << endl ; 
		cout  << "\t\t\t\t\t" << "    YOU LOGGED IN ! " << endl ;
		cout  << "\t\t\t\t\t" << "    HELLO KALEEM ! " << endl ;
		cout  << "\t\t\t\t\t" << "    ---------------" << endl ;
		passAuth = true;
		getch();
		choice();
		} 
		else
		{
		 cout << endl ;
		 cout << "YOUR PASSWORD IS INCORRECT KALEEM !" << endl;
		 cout << endl ;
		 cout<<"ENTER YOUR PASSWORD AGAIN : " ;
		 cin>>psc2;
		 
		if(psc2==pass2)
		 {
		 cout  << "\t\t\t\t\t" << "    ---------------" << endl ; 
		 cout  << "\t\t\t\t\t" << "    YOU LOGGED IN ! " << endl ;
		 cout  << "\t\t\t\t\t" << "    HELLO KALEEM ! " << endl ;
		 cout  << "\t\t\t\t\t" << "    ---------------" << endl ;
		passAuth = true;
		getch();
		choice();
		}
		else
		   {
		   	cout << endl ;
		   	cout << endl ;
		    cout << "              THREE TIMES YOU HAVE ENTERED THE WRONG PASSWORD    "<<endl << endl<< endl;
		    cout << endl ;
		    cout <<        "!---------------------------SYSTEM LOCKED-------------------------------!" << endl;
		   }
	 
		}
		}
       }




 if (a == user3)
       {
         cin >> psc3;
		 cout << endl ;
		if(psc3==pass3)
	 	 {
	      cout  << "\t\t\t\t\t" << "    ---------------" << endl ; 
		  cout  << "\t\t\t\t\t" << "    YOU LOGGED IN ! " << endl ;
		  cout  << "\t\t\t\t\t" << "     HELLO AHMAD ! " << endl ;
		  cout  << "\t\t\t\t\t" << "    ---------------" << endl ;
		  passAuth = true;
		  choice();
		} 
		else
		{
		 cout << "YOUR PASSWORD IS INCORRECT AHMAD !" << endl;
		 cout << endl ;
		 cout<<"ENTER YOUR PASSWORD AGAIN : " ;
		 cin>>psc3;
		 
		if(psc3==pass3)
		{
		cout  << "\t\t\t\t\t" << "    ---------------" << endl ; 
		cout  << "\t\t\t\t\t" << "    YOU LOGGED IN ! " << endl ;
		cout  << "\t\t\t\t\t" << "     HELLO AHMAD ! " << endl ;
		cout  << "\t\t\t\t\t" << "    ---------------" << endl ;
		passAuth = true;
		getch();
		choice();
		} 
		else
		{
		  cout << endl ;
		  cout << "YOUR PASSWORD IS INCORRECT AHMAD !" << endl;
		  cout << endl ;
		  cout<<"ENTER YOUR PASSWORD AGAIN : " ;
		  cin>>psc3;
		  
		if(psc3==pass3)
		{
		cout  << "\t\t\t\t\t" << "    ---------------" << endl ; 
		cout  << "\t\t\t\t\t" << "    YOU LOGGED IN ! " << endl ;
		cout  << "\t\t\t\t\t" << "     HELLO AHMAD ! " << endl ;
		cout  << "\t\t\t\t\t" << "    ---------------" << endl ;
		passAuth = true;
		getch();
		choice();
		} 
		else
		{
			cout << endl ;
			cout << endl ;
		    cout << "              THREE TIMES YOU HAVE ENTERED THE WRONG PASSWORD    "<<endl << endl<< endl;
		    cout << endl ;
		    cout <<        "!---------------------------SYSTEM LOCKED-------------------------------!" << endl;
		}
		
	}
    }
    }




    if (a == user4)
    {
        cin >> psc4;
		cout << endl ;
		
		if(psc4==pass4)
		{
		cout  << "\t\t\t\t\t" << "    ---------------" << endl ; 
		cout  << "\t\t\t\t\t" << "    YOU LOGGED IN ! " << endl ;
		cout  << "\t\t\t\t\t" << "    HELLO JAVERIA ! " << endl ;
		cout  << "\t\t\t\t\t" << "    ---------------" << endl ;
		passAuth = true;
		getch();
		choice();
		} 
		else
		{
			cout << " YOUR PASSWORD IS INCORRECT JAVERIA ! " << endl;
			cout << endl ;
			cout<<"ENTER YOUR PASSWORD AGAIN : " ;
			cin>>psc4;
			
		if(psc4==pass4)
	   	 {
	    	cout  << "\t\t\t\t\t" << "    ---------------" << endl ; 
		    cout  << "\t\t\t\t\t" << "    YOU LOGGED IN ! " << endl ;
		    cout  << "\t\t\t\t\t" << "    HELLO JAVERIA ! " << endl ;
		    cout  << "\t\t\t\t\t" << "    ---------------" << endl ;
		    passAuth = true;
		    getch();
		    choice();
		 } 
		else
		  { 
		       cout << endl ;
		       cout << " YOUR PASSWORD IS INCORRECT JAVERIA !" << endl;
		       cout << endl ;
			   cout<<"ENTER YOUR PASSWORD AGAIN : " ;
			   cin>>psc4;
			  
		if(psc4==pass4)
	   	   {
	    	    cout  << "\t\t\t\t\t" << "    ---------------" << endl ; 
		        cout  << "\t\t\t\t\t" << "    YOU LOGGED IN ! " << endl ;
		        cout  << "\t\t\t\t\t" << "    HELLO JAVERIA ! " << endl ;
		        cout  << "\t\t\t\t\t" << "    ---------------" << endl ;
		        passAuth = true;
		        getch();
		        choice();
		   } 
		 else
		   {
		 	   cout << endl ;
		 	   cout << endl ;
		 	   cout << "              THREE TIMES YOU HAVE ENTERED THE WRONG PASSWORD    "<<endl << endl<< endl;
		 	   cout << endl ;
		       cout <<        "!---------------------------SYSTEM LOCKED-------------------------------!" << endl;
		    }

		     
		   }  
    }
    
}
}


//------------------------------------------------Choices-----------------------------------------------------------------

void choice(){
    char t;
	system("cls");
	title();
	  int funcChoice ;
        cout << "\t\t\tPress 1 for Ultimate Converterter " << endl;
        cout << "\t\t\tPress 2 for Flaming Matrix Calculator " << endl;
        cout << "\t\t\tPress 3 for Number System Converter " << endl;
        cout << "\t\t\tPress 4 for Hangman " << endl;
        cout << "\t\t\tPress 5 for Exit" << endl;

        cin >> funcChoice;
        
        
        switch(funcChoice){
        
        	case 1:{
        		system ("cls");
        		ultimate_conv();
        		break;
				}
			case 2:{
				system ("cls");
				falme_matrix();
				break;
			}
			case 3:{
				system ("cls");
				number_sysConv();
				break;
			}
			case 4:{
			system ("cls");
			hangMan();
            break;
				
			}
            
            
			case 5:{
				exit_me();
				exit(0);
			
				break;
				
		    }
		}
        
}

//--------------------------------------------Ultimate converter(parent)---------------------------------------------------------
void ultimate_conv()
{
	title();
	int ch;
            cout << "\t========================================" << endl;
            cout << "\t    WELCOME TO Universal CONVERTER" << endl;
            cout << "\t========================================" << endl;

                cout << " \n\n\t\tWhat Do You Want To Convert?" << endl;
                cout << "\t==========================================" << endl;
                cout << "\n\tPress 1 For Currency Convertor" << endl;
                cout << "\tPress 2 For Weight Convertor" << endl;
                cout << "\tPress 3 For Distance Convertor" << endl;
                cout << "\tPress 4 For EXIT" << endl;
                
                cin>>ch;
        
    
            

            switch (ch)
            {
            case 1:
                currCon();

                break;
            case 2:
                weightCon();
                break;
            case 3:
                disCon();
                break;
            case 4:
            	exit();
            
            default:
                cout<<" Invalid Choice!\n "<<endl;
                break;
            }
            
}
// !-----------------------------Currency Converter Function-----------------------------------!
void currCon()
{
                        //******************CURRENCY CONVERTER***********************

	double 	USD,AUS,CAD,SGD,GBP,CNY,EUR,MYR,PKR;
	double  amount;
	int choice1, choice2;
	
  cout << "\t========================================" << endl;
	cout << "\t    WELCOME TO CURRENCY CONVERTER" << endl;
  cout << "\t========================================" << endl;
	cout << "\n\tPress 1 For Conversion In Pakistani Rupees" << endl;
	cout << "\tPress 2 For Conversion In Any Other Currency" << endl;
	cin >> choice1;
	
	
    switch (choice1) // any conversion in PKR
    {
	    case 1:
        {
            cout << "\tPress 1 for USD to PKR " << endl;
            cout << "\tPress 2 for AUS to PKR " << endl;
            cout << "\tPress 3 for CAD to PKR " << endl;
            cout << "\tPress 4 for SGD to PKR " << endl;
            cout << "\tPress 5 for GBP to PKR " << endl;
            cout << "\tPress 6 for CNY to PKR " << endl;
            cout << "\tPress 7 for MYR to PKR " << endl;
            cout << "\tPress 8 for EUR to PKR "  << endl;
            
            cin >> choice2;
            
            switch (choice2)
            {
                case 1:
                {
                    cout << "Enter Your Amount for Conversion" << endl;
                    cin >> amount; 

                    USD=amount*160.99;
                    cout << amount << " USD in Rupees is  = " << USD << " Rs." <<endl;

                    break; 

                }
                
                case 2:
                {
                    cout << "Enter Your Amount for Conversion" << endl;
                    cin >> amount;

                    AUS=amount*123.72;
                    cout << amount << " AUS in Rupees is = " << AUS <<" Rs. "<<endl;

                    break;
                }
                    
                case 3:
                {
                    cout << "Enter Your Amount for Conversion" << endl;
                    cin >> amount;

                    CAD=amount*126.47; 
                    cout << amount << " CAD in Rupees is = " << CAD <<" Rs."<< endl;
                    

                    break;
                        
                }
                    
                case 4:
                {
                    cout << "Enter Your Amount for Conversion" << endl;
                    cin >> amount;

                    SGD=amount* 121.82;
                    cout << amount << " SGD in Rupees is = "<< SGD <<" Rs." << endl;

                    break;

                }
                case 5:
                {
                    cout << "Enter Your Amount for Conversion" << endl;
                    cin >> amount;

                    GBP=amount * 220.13;
                    cout<<amount<<" GBP in Rupees is = "<<GBP<<" Rs."<<endl;

                    break;
                }
                
                case 6:
                {
                    cout << "Enter Your Amount for Conversion" << endl;
                    cin >> amount;

                    CNY=amount*24.64;
                    cout<<amount<<" CNY in Rupees is = "<<CNY<<" Rs."<<endl;

                    break; 
                }
                    
                case 7:
                {
                    cout << "Enter Your Amount for Conversion" << endl;
                    cin >> amount;

                    MYR=amount*40.02;
                    cout << amount << " MYR in Rupees is = " << MYR <<" Rs."<< endl;

                    break;    
                }
                    
                case 8:
                {
                    cout << "Enter Your Amount for Conversion" << endl;
                    cin >> amount;

                    EUR=amount*195.36;
                    cout << amount << " EUR in Rupees is = " << EUR <<" Rs."<< endl;

                    break;
                }	
            default:
             cout<<"Invalid Choice!\n"<<endl;
             break;
            }
        break;
        } 
        //break;
	case 2:
	{	
		cout << "\n\tPress 1 for PKR to USD " << endl;
		cout << "\tPress 2 for PKR to AUS " << endl;
		cout << "\tPress 3 for PKR to CAD " << endl;
		cout << "\tPress 4 for PKR to SGD " << endl;
		cout << "\tPress 5 for PKR to GBP " << endl;
		cout << "\tPress 6 for PKR to CNY " << endl;
		cout << "\tPress 7 for PKR to MYR " << endl;
		cout << "\tPress 8 for PKR to EUR " << endl;
		
		cin>>choice2;
		
		switch (choice2)   //PKR to any other currency 
		{
			case 1:
			{
                cout << "Enter Your Amount for Conversion" << endl;
                cin >> amount;  
                 
                PKR=amount / 160.99;
                cout << amount << " PKR is = " << PKR <<" USD"<< endl;

                break;
			}
			
			case 2:
			{
                cout << "Enter Your Amount for Conversion" << endl;
                cin >> amount;

                PKR=amount / 123.72;
                cout << amount << " PKR is = " << PKR <<" AUS" <<endl;

                break;
			}
				
			case 3:
			{
                cout << "Enter Your Amount for Conversion" << endl;
                cin >> amount;
                PKR=amount /126.47;
                cout << amount << " PKR is = " << PKR << " CAD"<< endl;

                break;
					
			}
				
			case 4:
			{
                cout << "Enter Your Amount for Conversion" << endl;
                cin >> amount;

                PKR=amount /121.82;
                cout << amount << " PKR is = "<< PKR <<" SGD" << endl;

                break;
			}
			case 5:
			{
                cout << "Enter Your Amount for Conversion" << endl;
                cin >> amount;

                PKR=amount / 220.13;
                cout << amount << " PKR is = "<< PKR << " GBP"<<endl;

                break;
			}
			
			case 6:
			{
                cout << "Enter Your Amount for Conversion" << endl;
                cin >> amount;

                PKR=amount / 24.64;
                cout << amount << " PKR is = " << PKR <<" CNY"<< endl;

                break;
			}
				
			case 7:
			{
                cout << "Enter Your Amount for Conversion" << endl;
                cin >> amount;

                PKR=amount / 40.02;
                cout << amount << " PKR is = " << PKR <<" MYR"<< endl;

                break;
					
			}
				
			case 8:
			{
                cout << "Enter Your Amount for Conversion" << endl;
                cin >> amount;

                PKR=amount / 195.36;
                cout << amount << " PKR is = " << PKR << " EUR"<< endl;

                break;
			}	

    default:
      cout<<"Invalide Choice!\n"<<endl;
      break;
		}
   break;

	 }



default:
cout<<"Invalid Choice!\n"<<endl;
break;
}

char t;
cout<<"Do you want to continue(Y/N)"<< endl;
cin>> t;
if(t=='Y' || t=='y'){
  system("cls");

ultimate_conv();
}
 else
 choice();
}
// !-----------------------------Wieight Converter Function------------------------------------!
void weightCon()
{

                    //*********************WEIGHT CONVERTER***********************

	double 	stones, tons, kg, pounds, ounces, grams, miligrams;
	double  weight;
	int choice1, choice2;
	
    cout << "\t========================================" << endl;
	cout << "\t       WELCOME TO WEIGHT CONVERTER" << endl;
    cout << "\t========================================" << endl;
	cout << "\n\t Press 1 For Conversions in STONES " << endl;
	cout << "\t Press 2 For Conversions Kg. <---> TONS" << endl;
    cout << "\t Press 3 For Conversions Kg. <---> POUNDS " << endl;  
    cout << "\t Press 4 For Conversions Kg. <---> OUNCES" << endl;  
    cout << "\t Press 5 For Conversions Kg. <---> GRAMS" << endl;  
    cout << "\t Press 6 For Conversions Kg. <---> MILIGRAMS" << endl;  
     
	cin >> choice1;
	
	
   switch (choice1)
   {
        case 1:
            {
                cout << "\n\tPress 1 for stones to tons" << endl;
                cout << "\tPress 2 for tons to stones" << endl;

                cin >> choice2;

                switch(choice2)
                {
                  case 1:
                    {
                      cout <<"\n\n\tEnter Your Amount For Conversion "<< endl;
                      cin >> weight;
 
                      tons = weight / 143;
                      cout << weight << " Stones is = " << tons << " Tons"<< endl;

                      break;

                    }

                  case 2:
                    {
                      cout<< "\n\n\tEnter Your Amount For Conversion " << endl;
                      cin >> weight;

                      stones = weight * 143;
                      cout << weight << " Tons is = " << stones <<" Stones"<< endl;  
                      break;

                    }
                  default:
                    cout<<"Invalid Choice!\n"<<endl;
                    break;
                }  

             break;

            }

        case 2:
            {
                cout << "\n\tPress 1 for TONS to KG" << endl;
                cout << "\tPress 2 for KG to TONS" << endl;

                cin >> choice2;

                switch(choice2)
                {
                  case 1:
                    {
                      cout <<"\n\n\tEnter Your Amount For Conversion "<< endl;
                      cin >> weight;
 
                      kg = weight * 907;
                      cout << weight << " Tons is = " << kg <<" Kg"<< endl;

                      break;

                    }

                  case 2:
                    {
                      cout<< "\n\n\tEnter Your Amount For Conversion " << endl;
                      cin >> weight;

                      tons= weight / 907;
                      cout << weight << " Kg is = " << tons <<" Tons"<< endl;  
                      break;

                    }
                default:
                cout<<"Invalid Choice!\n"<<endl;
                break;

                }
            break;

          }




        case 3:
            {
                cout << "\n\tPress 1 for kg to pounds " << endl;
                cout << "\tPress 2 for pounds to kg" << endl;

                cin >> choice2;

                switch(choice2)
                {
                  case 1:
                    {
                      cout <<"\n\n\tEnter Your Amount For Conversion "<< endl;
                      cin >> weight;
 
                      pounds = weight * 2.205;
                      cout << weight << " Kg is = " << pounds <<" Pounds"<< endl;

                      break;

                    }

                  case 2:
                    {
                      cout<< "\n\n\tEnter Your Amount For Conversion " << endl;
                      cin >> weight;

                      kg = weight / 2.205;
                      cout << weight << " Pounds is = " << kg <<" Kg"<< endl;  
                      break;

                    }
                  default:
                    cout<<"Invalid Choice!\n"<<endl;
                    break;
              }
             break;

            }




        case 4:
            {
                cout << "\n\tPress 1 for kg to ounce " << endl;
                cout << "\tPress 2 for ounce to kg " << endl;

                cin >> choice2;

                switch(choice2)
                {
                  case 1:
                    {
                      cout <<"\n\n\tEnter Your Amount For Conversion "<< endl;
                      cin >> weight;
 
                      ounces = weight * 35.274;
                      cout << weight << " Kg is = " << ounces << " Ounces"<<endl;

                      break;

                    }

                  case 2:
                    {
                      cout<< "\n\n\tEnter Your Amount For Conversion " << endl;
                      cin >> weight;

                      kg = weight / 35.274;
                      cout << weight << " Ounces is = " << kg <<" Kg"<< endl;  
                      break;

                    }
              default:
                cout<<"Invalid Choice!\n"<<endl;
                break;

                }

             break;

            }

        case 5:
            {
                cout << "\n\tPress 1 for kg to grams" << endl;
                cout << "\tPress 2 for grams to kg" << endl;

                cin >> choice2;

                switch(choice2)
                {
                  case 1:
                    {
                      cout <<"\n\n\tEnter Your Amount For Conversion "<< endl;
                      cin >> weight;
 
                      grams = weight * 1000;
                      cout << weight << " Kg is = " << grams << " Grams"<<endl;

                      break;

                    }

                  case 2:
                    {
                      cout<< "\n\n\tEnter Your Amount For Conversion " << endl;
                      cin >> weight;

                      kg = weight / 1000;
                      cout << weight << " Grams is = " << kg <<" Kg" <<endl;  
                      break;

                    }
                  default:
                  cout<<"Invalid Choice!\n"<<endl;
                  break;

                }

             break;

            }


        case 6:
            {
                cout << "\n\tPress 1 for kg to miligrams" << endl;
                cout << "\tPress 2 for miligrams to kg" << endl;

                cin >> choice2;

                switch(choice2)
                {
                  case 1:
                    {
                      cout <<"\n\n\tEnter Your Amount For Conversion "<< endl;
                      cin >> weight;
 
                      miligrams = weight * 1000000;
                      cout << weight << " Kg is = " << miligrams <<" Miligrams"<< endl;

                      break;

                    }

                  case 2:
                    {
                      cout<< "\n\n\tEnter Your Amount For Conversion " << endl;
                      cin >> weight;

                      kg = weight / 1000000;
                      cout << weight << " Miligrams is = " << kg <<" Kg"<< endl;  
                      break;

                    }
                    default :
                    {
                        cout<<" Invalid Choice!\n "<<endl;
                    }
                }

             break;

            }
       
    //break;
   
    default:
    {
       cout<< " Invalid Choice!\n "<<endl;
       break;
    }





}

char t;
cout<<"Do you want to continue(Y/N)"<< endl;
cin>> t;
if(t=='Y' || t=='y'){
  system("cls");

ultimate_conv();
}
 else
 choice();
}
// !-----------------------------Distance Converter Function-----------------------------------!
void disCon()
{

                //***********************DISTANCE CONVERTER*************************

	double 	miles, meters, km, yards, feet, cm;
	double  distance;
	int choice1, choice2;
	
    cout << "\t========================================" << endl;
	cout << "\t      WELCOME TO DISTANCE CONVERTER" << endl;
    cout << "\t========================================\n" << endl;
	cout << "\t Press 1 For Conversions in MILES " << endl;
	cout << "\t Press 2 For Conversions in METERS" << endl;
    cout << "\t Press 3 For Conversions in YARDS" << endl;  
    cout << "\t Press 4 For Conversions in FEET" << endl;  
    cout << "\t Press 5 For Conversions in CM" << endl;    
     
	cin >> choice1;
	
	
   switch (choice1)
   {
        case 1:
            {
                cout << "\nPress 1 for MILES to KM" << endl;
                cout << "Press 2 for KM to MILES" << endl;

                cin >> choice2;

                switch(choice2)
                {
                case 1:
                    {
                      cout <<"\tEnter Your Amount For Conversion "<< endl;
                      cin >> distance;
 
                      km =  distance * 1.609344;
                      cout << distance  << " Miles is = " << km <<" Km"<< endl;

                      break;

                    }

                case 2:
                    {
                      cout<< "\tEnter Your Amount For Conversion " << endl;
                      cin >> distance;

                      miles = distance / 1.609344;
                      cout << distance<< " Km is = " << miles <<" Miles"<< endl;  
                      break;

                    }

                default:
                cout<<"Invalid Choice!\n"<<endl;
                break;    
                }
             break;

            }

        case 2:
            {
                cout << "\nPress 1 for KM to METERS" << endl;
                cout << "Press 2 for METERS to KM" << endl;

                cin >> choice2;

                switch(choice2)
                {
                case 1:
                    {
                      cout <<"\tEnter Your Amount For Conversion "<< endl;
                      cin >> distance;
 
                      km = distance * 1000;
                      cout << distance << " Km is = " << km <<" Meters"<< endl;

                      break;

                    }

                case 2:
                    {
                      cout<< "\tEnter Your Amount For Conversion " << endl;
                      cin >> distance;

                      meters = distance / 1000;
                      cout << distance << " Km is = " << meters <<" Meters"<< endl;  
                      break;

                    }

                default:
                cout<<"Invalid Choice!\n"<<endl;
                break;

                }
             break;

            }

        case 3:
            {
                cout << "\nPress 1 for yards to km " << endl;
                cout << "Press 2 for km to yards" << endl;

                cin >> choice2;

                switch(choice2)
                {
                case 1:
                    {
                      cout <<"\tEnter Your Amount For Conversion "<< endl;
                      cin >> distance;
 
                      km = distance / 1094;
                      cout << distance << " Yards is = " << km <<" Km"<< endl;

                      break;

                    }

                case 2:
                    {
                      cout<< "\tEnter Your Amount For Conversion " << endl;
                      cin >> distance;

                      yards = distance * 1094;
                      cout << distance << " Km is = " << yards <<" Yards" <<endl;  
                      break;

                    }

                default:
                  cout<<"Invalid Choice!\n"<<endl;
                  break;
                }

             break;

            }

        case 4:
            {
                cout << "\nPress 1 for meters to feet " << endl;
                cout << "Press 2 for feet to meters " << endl;

                cin >> choice2;

                switch(choice2)
                {
                case 1:
                    {
                      cout <<"\tEnter Your Amount For Conversion "<< endl;
                      cin >> distance;
 
                      feet = distance * 3.28084;
                      cout << distance << " Meters is = " << feet <<" Feets"<< endl;

                      break;

                    }

                case 2:
                    {
                      cout<< "\tEnter Your Amount For Conversion " << endl;
                      cin >> distance;

                      meters = distance / 3.28084;
                      cout << distance << " Feets is = " <<meters <<" Meters"<< endl;  
                      break;

                    }
                  default:
                  cout<<"Invalid Choice!\n"<<endl;
                  break;  
                }

             break;

            }

        case 5:
            {
                cout << "\nPress 1 for cm to meters" << endl;
                cout << "Press 2 for meters to cm" << endl;

                cin >> choice2;

                switch(choice2)
                {
                case 1:
                    {
                      cout <<"\tEnter Your Amount For Conversion "<< endl;
                      cin >> distance;
 
                      meters = distance / 100;
                      cout << distance << " Cm is = " << meters <<" Meters"<< endl;

                      break;

                    }

                case 2:
                    {
                      cout<< "\tEnter Your Amount For Conversion " << endl;
                      cin >> distance;

                      cm = distance * 100;
                      cout << distance << " Meters is = " << cm <<" Cm"<<endl;  
                      break;

                    }
                default:
                cout<<"Invalid Choice!\n"<<endl;
                break;


                }

             break;

            }
       
    //break;
   
    default:
    {
       cout<< " Invalid Choice!\n"<<endl;
       break;
    }



}  
char t;
cout<<"Do you want to continue(Y/N)"<< endl;
cin>> t;
if(t=='Y' || t=='y'){
  system("cls");
ultimate_conv();
}
 else
 choice();
}



//-------------------------------------Ultimate converter ends---------------------------------------------------------------------






//-------------------------------------Matix cal(parent)---------------------------------------------------------------------------

void falme_matrix(){
		title();
	int sizeA;
    int sizeB;
	 // !-----------------Matrix A Input-------------------------!
            float matA[10][10], matB[10][10];
            int row, column, ROW, COLUMN, i, j, I, J;
            cout<< "Enter number of rows for matrix A = "; 
            cin>>row;
            cout<< "Enter number of columns for matrix A = "; 
            cin>>column;
            cout << "\nEnter the elements of matrix = " << endl;
            for (int i = 0; i < row; ++i)
            {
                for (int j = 0; j < column; ++j)
                {
                    cout << "Enter elements of Matrix A " << i + 1 << "X" << j + 1 << " : ";
                    cin >> matA[i][j];
                }
            }
            cout << "\nEntered Matrix = " << endl; 
            for (int i = 0; i < row; ++i)
            {
                for (int j = 0; j < column; ++j)
                {
                    cout << " " << matA[i][j];
                    if (j == column - 1) cout << endl << endl;
                }   
            }

            // !--------------------Matrix B Input----------------------!

            cout<< "Enter number of rows for matrix B = ";
            cin>>ROW;
            cout<< "Enter number of columns for matrix B = "; 
            cin>>COLUMN;
            cout << "\nEnter the elements of matrix = " << endl;
            for (int I = 0; I < ROW; ++I)
            {
                for (int J = 0; J < COLUMN; ++J)
                {
                    cout << "Enter element B " << I + 1 << "X" << J + 1 << ": "; 
                    cin >> matB[I][J];
                }
            }
            cout << "\nEntered Matrix B = " << endl; 
            for (int I = 0; I < ROW; ++I)
            {
                for (int J = 0; J < COLUMN; ++J)
                {
                    cout << " " << matB[I][J];
                    if (J == COLUMN - 1)
                    { 
                        cout << endl << endl;
                    }
                }   
            }

            //!-------------------------------MATRIX MENU----------------------------!
            sizeA = row * column;
            sizeB = ROW * COLUMN;
            
            int choice;

            cout << "Enter Your Choice" << endl;
            cout << "\t\t\tPress 1 For Matrix Addition" << endl;
            cout << "\t\t\tPress 2 For Matrix Substraction" << endl;
            cout << "\t\t\tPress 3 For Matrix Division" << endl;
            cout << "\t\t\tPress 4 For Matrix Determinant Calculation" << endl;
            cout << "\t\t\tPress 5 For Matrix Transpose" << endl;
            cout << "\t\t\tPress 6 For Matrix Inverse" << endl;
            cout << "\t\t\tPress 7 For Matrix Adjoint" << endl;
            cout << "\t\t\tPress 8 For Matrix Multiplication (Only if Matrices are 2X2 and 3X3)" << endl;
            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "\nYou have chosen Matrix addition" << endl;
                if (row == ROW && column == COLUMN )
                {
                    matAdd(*matA, sizeA, *matB, sizeB, row, column);
                }
                else
                {
                    cout << "Matrix Dimensions are not same" << endl;
                    cout << "Addition is Impossible" << endl;
                }
                
                break;

            case 2:
                cout << "\nYou have chosen Matrix Substraction" << endl;
                if (row == ROW && column == COLUMN )
                {
                    matSub(*matA, sizeA, *matB, sizeB, row, column);
                }
                else
                {
                    cout << "Matrix Dimensions are not same" << endl;
                    cout << "Substraction is Impossible" << endl;
                }
                    break;
            case 3:
                cout << "\nYou have selected Matrix Scalar Division" << endl;
                matDiv(*matA, sizeA, *matB, sizeB, row, column);

                break;

            case 4:
                cout << "\nYou have selected Determinant Calculation" << endl;
                matDet(*matA, sizeA, *matB, sizeB, row, column, ROW, COLUMN);
                
                break;

            case 5:
                cout << "\nYou have selected Matrix Transpose" << endl;
                matTrans(matA, sizeA, matB, sizeB, row, column, ROW, COLUMN); // Here we have passed 2D array Successfully Pehly araha nh tha krna wrna wo bhi 2D hi krta
                // Is se pehly function m thru pointer pass krwaya tha Array ko aur address manually call kiyay gaye hain.

            case 6:
                cout << "\nYou have Selected Matrix Inverse" << endl;
                matInv(*matA, sizeA, *matB, sizeB, row, column, ROW, COLUMN);
                break;

            case 7:
                cout << "\nYou have Selected Matrix Adjoint" << endl;
                matAdj(*matA, sizeA, *matB, sizeB, row, column, ROW, COLUMN);
                break;

            case 8:
                cout << "\nYou have Selected Matrix Multiplicaation" << endl;
                matMul(matA, sizeA, matB, sizeB, row, column, ROW, COLUMN);
                break;
            default:
                cout << "Invalid Choice" << endl;
                break;
            
			}
}
// !----------------------------------Matrix addition Funtion---------------------------!

void matAdd(float *matA, int sizeA, float *matB, int sizeB, int row, int column)
{
    if (row == 1 && column == 2) //For 1 X 2 Matrix
    {
        for (int i1x2 = 0; i1x2 < sizeA; i1x2++)
        {
            cout << matA[i1x2] << " + " << matB[i1x2] << endl;
        }
        for (int j1x2 = 0; j1x2 < sizeA; j1x2++)
        {
            cout << matA[j1x2] + matB[j1x2] << endl;
        }
                  
    }
    if (row == 1 && column == 3) // For 1x3 Matrix
    {
        for (int i1x3 = 0; i1x3 < sizeA; i1x3++)
        {
            cout << matA[i1x3] << " + " << matB[i1x3] << "    ";
        }
        cout << endl;
        for (int j1x3 = 0; j1x3 < sizeA; j1x3++)
        {
            cout << matA[j1x3] + matB[j1x3] << "    ";
        }        
    }

    if (row == 2 && column == 1) // For 2 X 1 Matrix
    {
        cout << matA[00] << " + " << matB[00] << endl;
        cout << matA[10] << " + " << matB[10] << endl;

        cout << endl;

        cout << matA[00]  +  matB[00] << endl;
        cout << matA[10]  +  matB[10] << endl;
        
    }

    if (row == 2 && column == 2)
    {
        cout << matA[00] << " + " << matB[00] << "    ";
        cout << matA[01] << " + " << matB[01] << endl;
        cout << matA[10] << " + " << matB[10] << "    ";
        cout << matA[11] << " + " << matB[11] << endl;

        cout << endl;
        
        cout << matA[00]  +   matB[00] << "    ";
        cout << matA[01]  +   matB[01] << endl;
        cout << matA[10]  +   matB[10] << "    ";
        cout << matA[11]  +   matB[11] << endl;
    }

    if (row == 2 && column == 3)
    {
        cout << matA[00] << " + " << matB[00] << "    ";
        cout << matA[01] << " + " << matB[01] << "    ";
        cout << matA[02] << " + " << matB[02] << endl;
        
        cout << matA[10] << " + " << matB[10] << "    ";
        cout << matA[11] << " + " << matB[11] << "    ";
        cout << matA[12] << " + " << matB[12] << endl;

        cout << endl;

        cout << matA[00] + matB[00] << "    ";
        cout << matA[01] + matB[01] << "    ";
        cout << matA[02] + matB[02] << endl;
        
        cout << matA[10] + matB[10] << "    ";
        cout << matA[11] + matB[11] << "    ";
        cout << matA[12] + matB[12] << endl;



    }

    if (row == 3 && column == 1)
    {
        cout << matA[00] << " + " << matB[00] << endl;  
        cout << matA[10] << " + " << matB[10] << endl;  
        cout << matA[20] << " + " << matB[20] << endl; 

        cout <<  endl;

        cout << matA[00] + matB[00] << endl;  
        cout << matA[10] + matB[10] << endl;  
        cout << matA[20] + matB[20] << endl;  
    }

    if (row == 3 && column == 2) // For 3 x 2 Matrix
    {
        cout << matA[00] << " + " << matB[00] << "    ";
        cout << matA[01] << " + " << matB[01] << endl;
        cout << matA[10] << " + " << matB[10] << "    ";
        cout << matA[11] << " + " << matB[11] << endl;
        cout << matA[20] << " + " << matB[20] << "    ";
        cout << matA[21] << " + " << matB[21] << endl; 

        cout << endl;

        cout << matA[00] +  matB[00] << "    ";
        cout << matA[01] +  matB[01] << endl;
        cout << matA[10] +  matB[10] << "    ";
        cout << matA[11] +  matB[11] << endl;
        cout << matA[20] +  matB[20] << "    ";
        cout << matA[21] +  matB[21] << endl;               
    }

    if (row == 3 && column == 3) // For 3 X 2 Matrix
    {
        cout << matA[00] << " + " << matB[00] << "    ";
        cout << matA[01] << " + " << matB[01] << "    ";
        cout << matA[02] << " + " << matB[02] << endl;

        cout << matA[10] << " + " << matB[10] << "    ";
        cout << matA[11] << " + " << matB[11] << "    ";
        cout << matA[12] << " + " << matB[12] << endl;

        cout << matA[20] << " + " << matB[20] << "    ";
        cout << matA[21] << " + " << matB[21] << "    ";
        cout << matA[22] << " + " << matB[22] << endl;

        cout << endl;

        cout << matA[00] + matB[00] << "    ";
        cout << matA[01] + matB[01] << "    ";
        cout << matA[02] + matB[02] << endl;

        cout << matA[10] + matB[10] << "    ";
        cout << matA[11] + matB[11] << "    ";
        cout << matA[12] + matB[12] << endl;

        cout << matA[20] + matB[20] << "    ";
        cout << matA[21] + matB[21] << "    ";
        cout << matA[22] + matB[22] << endl;


 }

    
    
}
// !--------------------------------------Matrix Substraction Function--------------------------------------------------!
void matSub(float *matA, int sizeA, float *matB, int sizeB, int row, int column)
{
    if (row == 1 && column == 2) //For 1 X 2 Matrix
    {
        for (int i1x2 = 0; i1x2 < sizeA; i1x2++)
        {
            cout << matA[i1x2] << " - " << matB[i1x2] << endl;
        }
        for (int j1x2 = 0; j1x2 < sizeA; j1x2++)
        {
            cout << matA[j1x2] - matB[j1x2] << endl;
        }
                  
    }
    if (row == 1 && column == 3) // For 1x3 Matrix
    {
        for (int i1x3 = 0; i1x3 < sizeA; i1x3++)
        {
            cout << matA[i1x3] << " - " << matB[i1x3] << "    ";
        }
        cout << endl;
        for (int j1x3 = 0; j1x3 < sizeA; j1x3++)
        {
            cout << matA[j1x3] - matB[j1x3] << "    ";
        }        
    }

    if (row == 2 && column == 1) // For 2 X 1 Matrix
    {
        cout << matA[00] << " - " << matB[00] << endl;
        cout << matA[10] << " - " << matB[10] << endl;

        cout << endl;

        cout << matA[00]  -  matB[00] << endl;
        cout << matA[10]  -  matB[10] << endl;
        
    }

    if (row == 2 && column == 2)
    {
        cout << matA[00] << " - " << matB[00] << "    ";
        cout << matA[01] << " - " << matB[01] << endl;
        cout << matA[10] << " - " << matB[10] << "    ";
        cout << matA[11] << " - " << matB[11] << endl;

        cout << endl;
        
        cout << matA[00]  -   matB[00] << "    ";
        cout << matA[01]  -   matB[01] << endl;
        cout << matA[10]  -   matB[10] << "    ";
        cout << matA[11]  -   matB[11] << endl;
    }

    if (row == 2 && column == 3)
    {
        cout << matA[00] << " - " << matB[00] << "    ";
        cout << matA[01] << " - " << matB[01] << "    ";
        cout << matA[02] << " - " << matB[02] << endl;
        
        cout << matA[10] << " - " << matB[10] << "    ";
        cout << matA[11] << " - " << matB[11] << "    ";
        cout << matA[12] << " - " << matB[12] << endl;

        cout << endl;

        cout << matA[00] - matB[00] << "    ";
        cout << matA[01] - matB[01] << "    ";
        cout << matA[02] - matB[02] << endl;
        
        cout << matA[10] - matB[10] << "    ";
        cout << matA[11] - matB[11] << "    ";
        cout << matA[12] - matB[12] << endl;



    }

    if (row == 3 && column == 1)
    {
        cout << matA[00] << " - " << matB[00] << endl;  
        cout << matA[10] << " - " << matB[10] << endl;  
        cout << matA[20] << " - " << matB[20] << endl; 

        cout <<  endl;

        cout << matA[00] - matB[00] << endl;  
        cout << matA[10] - matB[10] << endl;  
        cout << matA[20] - matB[20] << endl;  
    }

    if (row == 3 && column == 2) // For 3 x 2 Matrix
    {
        cout << matA[00] << " - " << matB[00] << "    ";
        cout << matA[01] << " - " << matB[01] << endl;
        cout << matA[10] << " - " << matB[10] << "    ";
        cout << matA[11] << " - " << matB[11] << endl;
        cout << matA[20] << " - " << matB[20] << "    ";
        cout << matA[21] << " - " << matB[21] << endl; 

        cout << endl;

        cout << matA[00] -  matB[00] << "    ";
        cout << matA[01] -  matB[01] << endl;
        cout << matA[10] -  matB[10] << "    ";
        cout << matA[11] -  matB[11] << endl;
        cout << matA[20] -  matB[20] << "    ";
        cout << matA[21] -  matB[21] << endl;               
    }

    if (row == 3 && column == 3) // For 3 X 3 Matrix
    {
        cout << matA[00] << " - " << matB[00] << "    ";
        cout << matA[01] << " - " << matB[01] << "    ";
        cout << matA[02] << " - " << matB[02] << endl;

        cout << matA[10] << " - " << matB[10] << "    ";
        cout << matA[11] << " - " << matB[11] << "    ";
        cout << matA[12] << " - " << matB[12] << endl;

        cout << matA[20] << " - " << matB[20] << "    ";
        cout << matA[21] << " - " << matB[21] << "    ";
        cout << matA[22] << " - " << matB[22] << endl;

        cout << endl;

        cout << matA[00] - matB[00] << "    ";
        cout << matA[01] - matB[01] << "    ";
        cout << matA[02] - matB[02] << endl;

        cout << matA[10] - matB[10] << "    ";
        cout << matA[11] - matB[11] << "    ";
        cout << matA[12] - matB[12] << endl;

        cout << matA[20] - matB[20] << "    ";
        cout << matA[21] - matB[21] << "    ";
        cout << matA[22] - matB[22] << endl;



    }
       char t;
cout<<"Do you want to continue(Y/N)"<< endl;
cin>> t;
if(t=='Y' || t=='y'){
  system("cls");
falme_matrix();
}
 else
 choice(); 
    
}
// !-----------------------------------------Matrix Scalar Division-----------------------------------------------------!
void matDiv(float *matA, int sizeA, float *matB, int sizeB, int row, int column)
{
    float scalar;
    char val;
    cout << "Enter the value to perform Scalar division" << endl;
    cin >> scalar;

    cout << "Choose a matrix to divide by scalar" << endl;
    cin >> val;

    if (val == 'a' || val == 'A')
    {
        //asfdas
        if (row == 1 && column == 2) //For 1 X 2 Matrix
        {
            for (int i1x2 = 0; i1x2 < sizeA; i1x2++)
            {
                cout << matA[i1x2] << " / " << scalar << endl;
            }
            for (int j1x2 = 0; j1x2 < sizeA; j1x2++)
            {
                cout << matA[j1x2] / scalar << endl;
            }
                    
        }
        if (row == 1 && column == 3) // For 1x3 Matrix
        {
            for (int i1x3 = 0; i1x3 < sizeA; i1x3++)
            {
                cout << matA[i1x3] << " / " << scalar << "    ";
            }
            cout << endl;
            for (int j1x3 = 0; j1x3 < sizeA; j1x3++)
            {
                cout << matA[j1x3] / scalar << "    ";
            }        
        }

        if (row == 2 && column == 1) // For 2 X 1 Matrix
        {
            cout << matA[00] << " / " << scalar << endl;
            cout << matA[10] << " / " << scalar << endl;

            cout << endl;

            cout << matA[00]  /  scalar << endl;
            cout << matA[10]  /  scalar << endl;
            
        }

        if (row == 2 && column == 2)
        {
            cout << matA[00] << " / " << scalar << "    ";
            cout << matA[01] << " / " << scalar << endl;
            cout << matA[10] << " / " << scalar << "    ";
            cout << matA[11] << " / " << scalar << endl;

            cout << endl;
            
            cout << matA[00]  /   scalar << "    ";
            cout << matA[01]  /   scalar << endl;
            cout << matA[10]  /   scalar << "    ";
            cout << matA[11]  /   scalar << endl;
        }

        if (row == 2 && column == 3)
        {
            cout << matA[00] << " / " << scalar << "    ";
            cout << matA[01] << " / " << scalar << "    ";
            cout << matA[02] << " / " << scalar << endl;
            
            cout << matA[10] << " / " << scalar << "    ";
            cout << matA[11] << " / " << scalar << "    ";
            cout << matA[12] << " / " << scalar << endl;

            cout << endl;

            cout << matA[00] / scalar << "    ";
            cout << matA[01] / scalar << "    ";
            cout << matA[02] / scalar << endl;
            
            cout << matA[10] / scalar << "    ";
            cout << matA[11] / scalar << "    ";
            cout << matA[12] / scalar << endl;



        }

        if (row == 3 && column == 1)
        {
            cout << matA[00] << " / " << scalar << endl;  
            cout << matA[10] << " / " << scalar << endl;  
            cout << matA[20] << " / " << scalar << endl; 

            cout <<  endl;

            cout << matA[00] / scalar << endl;  
            cout << matA[10] / scalar << endl;  
            cout << matA[20] / scalar << endl;  
        }

        if (row == 3 && column == 2) // For 3 x 2 Matrix
        {
            cout << matA[00] << " / " << scalar << "    ";
            cout << matA[01] << " / " << scalar << endl;
            cout << matA[10] << " / " << scalar << "    ";
            cout << matA[11] << " / " << scalar << endl;
            cout << matA[20] << " / " << scalar << "    ";
            cout << matA[21] << " / " << scalar << endl; 

            cout << endl;

            cout << matA[00] /  scalar << "    ";
            cout << matA[01] /  scalar << endl;
            cout << matA[10] /  scalar << "    ";
            cout << matA[11] /  scalar << endl;
            cout << matA[20] /  scalar << "    ";
            cout << matA[21] /  scalar << endl;               
        }

        if (row == 3 && column == 3) // For 3 X 3 Matrix
        {
            cout << matA[00] << " / " << scalar << "    ";
            cout << matA[01] << " / " << scalar << "    ";
            cout << matA[02] << " / " << scalar << endl;

            cout << matA[10] << " / " << scalar << "    ";
            cout << matA[11] << " / " << scalar << "    ";
            cout << matA[12] << " / " << scalar << endl;

            cout << matA[20] << " / " << scalar << "    ";
            cout << matA[21] << " / " << scalar << "    ";
            cout << matA[22] << " / " << scalar << endl;

            cout << endl;

            cout << matA[00] / scalar << "    ";
            cout << matA[01] / scalar << "    ";
            cout << matA[02] / scalar << endl;

            cout << matA[10] / scalar << "    ";
            cout << matA[11] / scalar << "    ";
            cout << matA[12] / scalar << endl;

            cout << matA[20] / scalar << "    ";
            cout << matA[21] / scalar << "    ";
            cout << matA[22] / scalar << endl;
        }               
    }
    else if (val == 'b' || val == 'B')
    {
        /* code */
                //asfdas
        if (row == 1 && column == 2) //For 1 X 2 Matrix
        {
            for (int i1x2 = 0; i1x2 < sizeA; i1x2++)
            {
                cout << matB[i1x2] << " / " << scalar << endl;
            }
            for (int j1x2 = 0; j1x2 < sizeA; j1x2++)
            {
                cout << matB[j1x2] / scalar << endl;
            }
                    
        }
        if (row == 1 && column == 3) // For 1x3 Matrix
        {
            for (int i1x3 = 0; i1x3 < sizeA; i1x3++)
            {
                cout << matB[i1x3] << " / " << scalar << "    ";
            }
            cout << endl;
            for (int j1x3 = 0; j1x3 < sizeA; j1x3++)
            {
                cout << matB[j1x3] / scalar << "    ";
            }        
        }

        if (row == 2 && column == 1) // For 2 X 1 Matrix
        {
            cout << matB[00] << " / " << scalar << endl;
            cout << matB[10] << " / " << scalar << endl;

            cout << endl;

            cout << matB[00]  /  scalar << endl;
            cout << matB[10]  /  scalar << endl;
            
        }

        if (row == 2 && column == 2)
        {
            cout << matB[00] << " / " << scalar << "    ";
            cout << matB[01] << " / " << scalar << endl;
            cout << matB[10] << " / " << scalar << "    ";
            cout << matB[11] << " / " << scalar << endl;

            cout << endl;
            
            cout << matB[00]  /   scalar << "    ";
            cout << matB[01]  /   scalar << endl;
            cout << matB[10]  /   scalar << "    ";
            cout << matB[11]  /   scalar << endl;
        }

        if (row == 2 && column == 3)
        {
            cout << matB[00] << " / " << scalar << "    ";
            cout << matB[01] << " / " << scalar << "    ";
            cout << matB[02] << " / " << scalar << endl;
            
            cout << matB[10] << " / " << scalar << "    ";
            cout << matB[11] << " / " << scalar << "    ";
            cout << matB[12] << " / " << scalar << endl;

            cout << endl;

            cout << matB[00] / scalar << "    ";
            cout << matB[01] / scalar << "    ";
            cout << matB[02] / scalar << endl;
            
            cout << matB[10] / scalar << "    ";
            cout << matB[11] / scalar << "    ";
            cout << matB[12] / scalar << endl;



        }

        if (row == 3 && column == 1)
        {
            cout << matB[00] << " / " << scalar << endl;  
            cout << matB[10] << " / " << scalar << endl;  
            cout << matB[20] << " / " << scalar << endl; 

            cout <<  endl;

            cout << matB[00] / scalar << endl;  
            cout << matB[10] / scalar << endl;  
            cout << matB[20] / scalar << endl;  
        }

        if (row == 3 && column == 2) // For 3 x 2 Matrix
        {
            cout << matB[00] << " / " << scalar << "    ";
            cout << matB[01] << " / " << scalar << endl;
            cout << matB[10] << " / " << scalar << "    ";
            cout << matB[11] << " / " << scalar << endl;
            cout << matB[20] << " / " << scalar << "    ";
            cout << matB[21] << " / " << scalar << endl; 

            cout << endl;

            cout << matB[00] /  scalar << "    ";
            cout << matB[01] /  scalar << endl;
            cout << matB[10] /  scalar << "    ";
            cout << matB[11] /  scalar << endl;
            cout << matB[20] /  scalar << "    ";
            cout << matB[21] /  scalar << endl;               
        }

        if (row == 3 && column == 3) // For 3 X 3 Matrix
        {
            cout << matB[00] << " / " << scalar << "    ";
            cout << matB[01] << " / " << scalar << "    ";
            cout << matB[02] << " / " << scalar << endl;

            cout << matB[10] << " / " << scalar << "    ";
            cout << matB[11] << " / " << scalar << "    ";
            cout << matB[12] << " / " << scalar << endl;

            cout << matB[20] << " / " << scalar << "    ";
            cout << matB[21] << " / " << scalar << "    ";
            cout << matB[22] << " / " << scalar << endl;

            cout << endl;

            cout << matB[00] / scalar << "    ";
            cout << matB[01] / scalar << "    ";
            cout << matB[02] / scalar << endl;

            cout << matB[10] / scalar << "    ";
            cout << matB[11] / scalar << "    ";
            cout << matB[12] / scalar << endl;

            cout << matB[20] / scalar << "    ";
            cout << matB[21] / scalar << "    ";
            cout << matB[22] / scalar << endl;
        } 
    }
    else
    {
        cout << "Invalid Matrix Entered" << endl;
    }
      char t;
cout<<"Do you want to continue(Y/N)"<< endl;
cin>> t;
if(t=='Y' || t=='y'){
  system("cls");
falme_matrix();
}
 else
 choice();  
}
// !-----------------------------------------Determinant Calculator-----------------------------------------------------!
void matDet(float *matA, int sizeA, float *matB, int sizeB, int row, int column, int ROW, int COLUMN)
{
    char matChoice;
    cout << "Choose the Matrix to Calculate Determinant [A or B] ?" << endl;
    cin >> matChoice;

    // !----------------------FOR taking 2 x 2 Determinant----------------------------!

    if (row == 2 && column == 2 || ROW == 2 && COLUMN == 2)
    {
        /* code */
        if (matChoice == 'a' || matChoice == 'A')
        {
            // Step 1 For Taking Determinant
            cout << "|" << matA[00] << "  " << matA[01] << "|" << endl;
            cout << "|" << matA[10] << "  " << matA[11] << "|" << endl;

            cout << endl << endl;

            // Step 2 for taking Determinant
            cout << "(" << matA[00] << " x " << matA[11] << ")" << " - (" << matA[01] << " x " << matA[10] << ")" << endl;

            float det2x2 = (matA[00] * matA[11]) - (matA[01] * matA[10]);

            cout << "The determinant of the Matrix A = " << det2x2;
            
        }
        if (matChoice == 'b' || matChoice == 'B')
        {
            cout << "|" << matB[00] << "  " << matB[01] << "|" << endl;
            cout << "|" << matB[10] << "  " << matB[11] << "|" << endl;

            cout << endl << endl;

            // Step 2 for taking Determinant
            cout << "(" << matB[00] << " x " << matB[11] << ")" << " - (" << matB[01] << " x " << matB[10] << ")" << endl;

            float det2x2 = (matB[00] * matB[11]) - (matB[01] * matB[10]);

            cout << "The determinant of the Matrix B = " << det2x2; 
        }
        
        
    }

    //!-------------------------FOR Taking 3 X 3 Determinant---------------------------!
    
    else if (row == 3 && column == 3 || ROW == 3 && COLUMN == 3) 
    {
        if (matChoice == 'a' || matChoice == 'A')
        {
            // Step 1 For taking Determinant
            cout << matA[00]  << "  |" << matA[11] << "  " << matA[12] << "|    -" << matA[01] << "  |" << matA[10] << "  " << matA[12] <<  "|     +" << matA[02] << "  |" << matA[10] << "  " << matA[11] << "|" << endl ;
            cout             << "   |" << matA[21] << "  " << matA[22] << "|     " << "  "     <<  " |" << matA[20] << "  " << matA[22] <<  "|      " << " "      << "  |" << matA[20] << "  " << matA[21] << "|" << endl ;

            cout << endl << endl;

            // Step 2 For Taking Determinant
            cout << matA[00] << " {(" << matA[11] << "x" << matA[22] << ") - (" << matA[21] << "x" << matA[12] << ")}  ";
            cout<< -matA[01] << " {(" << matA[10] << "x" << matA[22] << ") - (" << matA[12] << "x" << matA[20] << ")}  ";
            cout<< "+" << matA[02] << " {(" << matA[10] << "x" << matA[21] << ") - (" << matA[11] << "x" << matA[20] << ")}  ";

            float det3x3 = matA[00] * ((matA[11] * matA[22]) - (matA[21] * matA[12])) - matA[01] * ((matA[10] * matA[22]) - (matA[12] * matA[20])) + matA[02] * ((matA[10] * matA[21]) - (matA[11] * matA[20]));

            cout << "\n\n The Determinant of Matrix A = " <<  det3x3;

        }
        else if (matChoice == 'b' || matChoice == 'B')
        {
            // Step 1 For taking Determinant
            cout << matB[00]  << "  |" << matB[11] << "  " << matB[12] << "|    -" << matB[01] << "  |" << matB[10] << "  " << matB[12] <<  "|     +" << matB[02] << "  |" << matB[10] << "  " << matB[11] << "|" << endl ;
            cout             << "   |" << matB[21] << "  " << matB[22] << "|     " << "  "     <<  " |" << matB[20] << "  " << matB[22] <<  "|      " << " "      << "  |" << matB[20] << "  " << matB[21] << "|" << endl ;

            cout << endl << endl;

            // Step 2 For Taking Determinant
            cout << matB[00] << " {(" << matB[11] << "x" << matB[22] << ") - (" << matB[21] << "x" << matB[12] << ")}  ";
            cout<< -matB[01] << " {(" << matB[10] << "x" << matB[22] << ") - (" << matB[12] << "x" << matB[20] << ")}  ";
            cout<< "+" << matB[02] << " {(" << matB[10] << "x" << matB[21] << ") - (" << matB[11] << "x" << matB[20] << ")}  ";

            float det3x3 = matB[00] * ((matB[11] * matB[22]) - (matB[21] * matB[12])) - matB[01] * ((matB[10] * matB[22]) - (matB[12] * matB[20])) + matB[02] * ((matB[10] * matB[21]) - (matB[11] * matB[20]));

            cout << "\n\n The Determinant of Matrix A = " <<  det3x3;
        
        }
        else
        {
            cout << "Invalid Matrix Entered" << endl;
        }  
    }
    else
    {
        /* code */
        cout << "Invalid  Matrix Dimensions. Only 2 x 2 and 3 x 3 are acceptable" << endl;
    }
     char t;
cout<<"Do you want to continue(Y/N)"<< endl;
cin>> t;
if(t=='Y' || t=='y'){
  system("cls");
falme_matrix();
}
 else
 choice();   
}
// !------------------------------------------Transpose Calculator------------------------------------------------------!
void matTrans(float matA[][10], int sizeA, float matB[][10], int sizeB, int row, int column, int ROW, int COLUMN)
{
    char matChoice;
    cout << "Choose the Matrix to Transpose [A or B] ?" << endl;
    cin >> matChoice;

    if (matChoice == 'a' || matChoice == 'A')
    {
        for (int iA = 0; iA < column; ++iA)
        {
            for (int jA = 0; jA < row; ++jA)
            {
                cout << " " << matA[jA][iA];
                if (jA == row - 1)
                {
                    /* code */
                    cout << endl << endl;
                }
                


            }
            
        }
        
    }
    else if (matChoice == 'b' || matChoice == 'B')
    {
        for (int iB = 0; iB < COLUMN; ++iB)
        {
            for (int jB = 0; jB < ROW; ++jB)
            {
                cout << " " << matB[jB][iB];
                if (jB == ROW - 1)
                {
                    cout << endl << endl;
                }
                


            }
            
        }
    }
    else
    {
        cout << "You have Entered Invalid Matrix Choice" << endl;
    }
      char t;
cout<<"Do you want to continue(Y/N)"<< endl;
cin>> t;
if(t=='Y' || t=='y'){
  system("cls");
falme_matrix();
}
 else
 choice();  
}
// !--------------------------------------------Inverse OF Matrix-------------------------------------------------------!
void matInv(float *matA, int sizeA, float *matB, int sizeB, int row, int column, int ROW, int COLUMN)
{
    char matChoice;
    cout << "Choose the Matrix to Calculate Inverse [A or B] ?" << endl;
    cin >> matChoice;
    bool check = false;
    float deter;
    char mat;
    char MAT;
    
    if (row == 2 && column == 2 || ROW == 2 && COLUMN == 2)
    {
        /* code */
        if (matChoice == 'a' || matChoice == 'A')
        {
            // Step 1 For Taking Determinant
            cout << "|" << matA[00] << "  " << matA[01] << "|" << endl;
            cout << "|" << matA[10] << "  " << matA[11] << "|" << endl;

            cout << endl << endl;

            // Step 2 for taking Determinant
            cout << "(" << matA[00] << " x " << matA[11] << ")" << " - (" << matA[01] << " x " << matA[10] << ")" << endl;

            float det2x2 = (matA[00] * matA[11]) - (matA[01] * matA[10]);

            cout << "The determinant of the Matrix A = " << det2x2;
            if (det2x2 !=0)
            {
                check = true;
                mat = 'a';
                MAT = 'A';
                deter = det2x2;
            }
            
            
        }
        else if (matChoice == 'b' || matChoice == 'B')
        {
            cout << "|" << matB[00] << "  " << matB[01] << "|" << endl;
            cout << "|" << matB[10] << "  " << matB[11] << "|" << endl;

            cout << endl << endl;

            // Step 2 for taking Determinant
            cout << "(" << matB[00] << " x " << matB[11] << ")" << " - (" << matB[01] << " x " << matB[10] << ")" << endl;

            float det2x2 = (matB[00] * matB[11]) - (matB[01] * matB[10]);

            cout << "The determinant of the Matrix B = " << det2x2 << endl;
            if (det2x2 !=0)
            {
                check = true;
                mat = 'b';
                MAT = 'B';
                deter = det2x2;

            }
            
            
        }
        else
        {
            cout << "Only 2 x 2 matrices be considered currently" << endl;
        }

        //-----------For Matrix A Inverse--------------
        if (check == true && mat == 'a' || MAT == 'A')
        {   
            // Step 1 Adjoint Calculation
            cout << "\nThe adjoint of Matrix A will be " << endl << endl;

            cout << "|" << matA[11] << "  " << -matA[01] << "|" << endl;
            cout << "|" << -matA[10] << "  " << matA[00] << "|" << endl;

            cout << endl << endl;

            // Step 2 Presenting the Inverse formula Step
            cout << "The Inverse of Matrix A will be " << endl;

            cout << "|" << matA[11] << "  " << -matA[01] << "|" << endl;
            cout << "|" << -matA[10] << "  " << matA[00] << "|" << endl;
            cout << "---------"<< endl;
            cout << "   " << deter << endl << endl;

            // Step 3 Dividing determinant by Adjoin of A to get Inverse

            cout << "|" << matA[11] << "/" << deter << "  " << -matA[01] << "/" << deter << "|" << endl;
            cout << "|" << -matA[10] << "/" << deter << "  " << matA[00] << "/" << deter << "|" << endl;

            cout << endl << endl;

            // Step 4 The Inverse Of the Mattix Calculated

            cout << "|" << matA[11] / deter << "  " << -matA[01] / deter << "|" << endl;
            cout << "|" << -matA[10] / deter << "  " << matA[00] / deter << "|" << endl;






        }
        if (check == true && mat == 'b' || MAT == 'B')
        {
            // Step 1 Adjoint Calculation
            cout << "\nThe adjoint of Matrix A will be " << endl << endl;

            cout << "|" << matB[11] << "  " << -matB[01] << "|" << endl;
            cout << "|" << -matB[10] << "  " << matB[00] << "|" << endl;

            cout << endl << endl;

            // Step 2 Presenting the Inverse formula Step
            cout << "The Inverse of Matrix B will be " << endl;

            cout << "|" << matB[11] << "  " << -matB[01] << "|" << endl;
            cout << "|" << -matB[10] << "  " << matB[00] << "|" << endl;
            cout << "---------"<< endl;
            cout << "   " << deter << endl << endl;

            // Step 3 Dividing determinant by Adjoin of A to get Inverse

            cout << "|" << matB[11] << "/" << deter << "  " << -matB[01] << "/" << deter << "|" << endl;
            cout << "|" << -matB[10] << "/" << deter << "  " << matB[00] << "/" << deter << "|" << endl;

            cout << endl << endl;

            // Step 4 The Inverse Of the Mattix Calculated

            cout << "|" << matB[11] / deter << "  " << -matB[01] / deter << "|" << endl;
            cout << "|" << -matB[10] / deter << "  " << matB[00] / deter << "|" << endl;
        }
        if(check == false)
        {
            cout << "Invalid Matrix Choice" << endl;
        }
        
        
        
        
        
    }
    else
    {
        cout << "Sorry!" << endl;
        cout << "Only 2 x 2 Matrices are considered for Inverse Calculation currently " << endl;
        cout << "Matrix Dimension is not 2 x 2 " << endl;
    }
     char t;
cout<<"Do you want to continue(Y/N)"<< endl;
cin>> t;
if(t=='Y' || t=='y'){
  system("cls");
falme_matrix();
}
 else
 choice();   
}
// !---------------------------------------------Matrix Adjoint---------------------------------------------------------!
void matAdj(float *matA, int sizeA, float *matB, int sizeB, int row, int column, int ROW, int COLUMN)
{

    if (row == 2 && column == 2 || ROW == 2 && COLUMN == 2)
    {
        /* code */
        char matChoice;
        cout << "Choose the Matrix to Calculate Adjoint [A or B] ?" << endl;
        cin >> matChoice;

        if (matChoice == 'a' || matChoice == 'A')
        {

            cout << "The Inverse of Matrix A will be " << endl;

            cout << "|" << matA[11] << "  " << -matA[01] << "|" << endl;
            cout << "|" << -matA[10] << "  " << matA[00] << "|" << endl;
        }
        else if (matChoice == 'b' || matChoice == 'B')
        {
            cout << "|" << matB[11] << "  " << -matB[01] << "|" << endl;
            cout << "|" << -matB[10] << "  " << matB[00] << "|" << endl;
        }
        
        
    }
    else
    {
        cout << " Sorry ! Only 2 x 2 Matrix are Valid to calculate Adjoint currently" << endl; 
    }
      char t;
cout<<"Do you want to continue(Y/N)"<< endl;
cin>> t;
if(t=='Y' || t=='y'){
  system("cls");
falme_matrix();
}
 else
 choice();  
    
}
// !---------------------------------------------Matrix Multiplication--------------------------------------------------!

void matMul(float matA[][10], int sizeA, float matB[][10], int sizeB, int row, int column, int ROW, int COLUMN)
{
    
    //!----------------------------- 2X2 Multiplication Starts Here ----------------------------------!
    if (row == 2 && column == 2 && ROW == 2 && COLUMN == 2)
    {
        cout << "\t\t\tMatrix A X B :  \n" << endl;

        // Printing Matrix A

        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < column; ++j)
            {
                cout << setw(10) << " " << matA[i][j];
                if (j == column - 1) cout << endl << endl;
            }   
        }
        cout << setw(17) << " X " << endl << endl;
        
        // Printing Matrix B
        
        for (int I = 0; I < ROW; ++I)
        {
            for (int J = 0; J < COLUMN; ++J)
            {
                cout << setw(10) << " " << matB[I][J];
                if (J == COLUMN - 1)
                { 
                    cout << endl << endl;
                }
            }   
        }

        // Multiplication Step 1

        cout << setw(10) << " (" << matA[0][0] << "x" << matB[0][0] << ") + (" << matA[0][1] << "x" << matB[1][0] << ") " <<  setw(10);
        cout << setw(10) << " (" << matA[0][0] << "x" << matB[0][1] << ") + (" << matA[0][1] << "x" << matB[1][1] << ") " <<  setw(10) << endl << endl;

        cout << setw(10) << " (" << matA[1][0] << "x" << matB[0][0] << ") + (" << matA[1][1] << "x" << matB[1][0] << ") " <<  setw(10);
        cout << setw(10) << " (" << matA[1][0] << "x" << matB[0][1] << ") + (" << matA[1][1] << "x" << matB[1][1] << ") " <<  setw(10) << endl << endl << endl;


        // Multiplication Step 2

        cout << setw(10) << " " << matA[0][0] * matB[0][0] << " + " << matA[0][1] * matB[1][0] << " " <<  setw(10);
        cout << setw(10) << " " << matA[0][0] * matB[0][1] << " + " << matA[0][1] * matB[1][1] << " " <<  setw(10) << endl << endl;

        cout << setw(10) << " " << matA[1][0] * matB[0][0] << " + " << matA[1][1] * matB[1][0] << " " <<  setw(10);
        cout << setw(10) << " " << matA[1][0] * matB[0][1] << " + " << matA[1][1] * matB[1][1] << " " <<  setw(10) << endl << endl << endl;

        // Mutiplicatipn Step 3

        cout << setw(10) << " " << (matA[0][0] * matB[0][0]) + (matA[0][1] * matB[1][0]) << " " <<  setw(10);
        cout << setw(10) << " " << (matA[0][0] * matB[0][1]) + (matA[0][1] * matB[1][1]) << " " <<  setw(10) << endl << endl;

        cout << setw(10) << " " << (matA[1][0] * matB[0][0]) + (matA[1][1] * matB[1][0]) << " " <<  setw(10);
        cout << setw(10) << " " << (matA[1][0] * matB[0][1]) + (matA[1][1] * matB[1][1]) << " " <<  setw(10) << endl << endl << endl;

    
    }
    // !--------------------------------3x3 multiplication Starts here-------------------------------------------------!
    
    if (row == 3 && column == 3 && ROW == 3 && COLUMN == 3)
    {

        cout << "\t\t\tMatrix A X B :  \n" << endl;

        // Printing Matrix A

        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < column; ++j)
            {
                cout << setw(10) << " " << matA[i][j];
                if (j == column - 1) cout << endl << endl;
            }   
        }
        cout << setw(22) << " X " << endl << endl;
        
        // Printing Matrix B
        
        for (int I = 0; I < ROW; ++I)
        {
            for (int J = 0; J < COLUMN; ++J)
            {
                cout << setw(10) << " " << matB[I][J];
                if (J == COLUMN - 1)
                { 
                    cout << endl << endl;
                }
            }   
        }
        
        
        // Multiplication Step 1
        cout << setw(10) << " (" << matA[0][0] << "x" << matB[0][0] << ") + (" << matA[0][1] << "x" << matB[1][0] << ") " << " + (" << matA[0][2] << "x" << matB[2][0] << ") " <<  setw(10);
        cout << setw(10) << " (" << matA[0][0] << "x" << matB[0][1] << ") + (" << matA[0][1] << "x" << matB[1][1] << ") " << " + (" << matA[0][2] << "x" << matB[2][1] << ") " <<  setw(10);
        cout << setw(10) << " (" << matA[0][0] << "x" << matB[0][2] << ") + (" << matA[0][1] << "x" << matB[1][2] << ") " << " + (" << matA[0][2] << "x" << matB[2][2] << ") " <<  setw(10) << endl << endl;

        cout << setw(10) << " (" << matA[1][0] << "x" << matB[0][0] << ") + (" << matA[1][1] << "x" << matB[1][0] << ") " << " + (" << matA[1][2] << "x" << matB[2][0] << ") " <<  setw(10);
        cout << setw(10) << " (" << matA[1][0] << "x" << matB[0][1] << ") + (" << matA[1][1] << "x" << matB[1][1] << ") " << " + (" << matA[1][2] << "x" << matB[2][1] << ") " <<  setw(10);
        cout << setw(10) << " (" << matA[1][0] << "x" << matB[0][2] << ") + (" << matA[1][1] << "x" << matB[1][2] << ") " << " + (" << matA[1][2] << "x" << matB[2][2] << ") " <<  setw(10) << endl << endl;

        cout << setw(10) << " (" << matA[2][0] << "x" << matB[0][0] << ") + (" << matA[2][1] << "x" << matB[1][0] << ") " << " + (" << matA[2][2] << "x" << matB[2][0] << ") " <<  setw(10);
        cout << setw(10) << " (" << matA[2][0] << "x" << matB[0][1] << ") + (" << matA[2][1] << "x" << matB[1][1] << ") " << " + (" << matA[2][2] << "x" << matB[2][1] << ") " <<  setw(10);
        cout << setw(10) << " (" << matA[2][0] << "x" << matB[0][2] << ") + (" << matA[2][1] << "x" << matB[1][2] << ") " << " + (" << matA[2][2] << "x" << matB[2][2] << ") " <<  setw(10) << endl << endl << endl;

        // Multiplication Step 2

        cout << setw(10) << " " << matA[0][0] * matB[0][0] << " + " << matA[0][1] * matB[1][0] << " " << " + " << matA[0][2] * matB[2][0] << " " <<  setw(10);
        cout << setw(10) << " " << matA[0][0] * matB[0][1] << " + " << matA[0][1] * matB[1][1] << " " << " + " << matA[0][2] * matB[2][1] << " " <<  setw(10);
        cout << setw(10) << " " << matA[0][0] * matB[0][2] << " + " << matA[0][1] * matB[1][2] << " " << " + " << matA[0][2] * matB[2][2] << " " <<  setw(10) << endl << endl;

        cout << setw(10) << " " << matA[1][0] * matB[0][0] << " + " << matA[1][1] * matB[1][0] << " " << " + " << matA[1][2] * matB[2][0] << " " <<  setw(10);
        cout << setw(10) << " " << matA[1][0] * matB[0][1] << " + " << matA[1][1] * matB[1][1] << " " << " + " << matA[1][2] * matB[2][1] << " " <<  setw(10);
        cout << setw(10) << " " << matA[1][0] * matB[0][2] << " + " << matA[1][1] * matB[1][2] << " " << " + " << matA[1][2] * matB[2][2] << " " <<  setw(10) << endl << endl;

        cout << setw(10) << " " << matA[2][0] * matB[0][0] << " + " << matA[2][1] * matB[1][0] << " " << " + " << matA[2][2] * matB[2][0] << " " <<  setw(10);
        cout << setw(10) << " " << matA[2][0] * matB[0][1] << " + " << matA[2][1] * matB[1][1] << " " << " + " << matA[2][2] * matB[2][1] << " " <<  setw(10);
        cout << setw(10) << " " << matA[2][0] * matB[0][2] << " + " << matA[2][1] * matB[1][2] << " " << " + " << matA[2][2] * matB[2][2] << " " <<  setw(10) << endl << endl << endl << endl;

        // Multiplication Step 3

        cout << setw(10) << " " << (matA[0][0] * matB[0][0]) +  (matA[0][1] * matB[1][0])  +  (matA[0][2] * matB[2][0]) << " " <<  setw(10);
        cout << setw(10) << " " << (matA[0][0] * matB[0][1]) +  (matA[0][1] * matB[1][1])  +  (matA[0][2] * matB[2][1]) << " " <<  setw(10);
        cout << setw(10) << " " << (matA[0][0] * matB[0][2]) +  (matA[0][1] * matB[1][2])  +  (matA[0][2] * matB[2][2]) << " " <<  setw(10) << endl << endl;

        cout << setw(10) << " " << (matA[1][0] * matB[0][0]) +  (matA[1][1] * matB[1][0])  +  (matA[1][2] * matB[2][0]) << " " <<  setw(10);
        cout << setw(10) << " " << (matA[1][0] * matB[0][1]) +  (matA[1][1] * matB[1][1])  +  (matA[1][2] * matB[2][1]) << " " <<  setw(10);
        cout << setw(10) << " " << (matA[1][0] * matB[0][2]) +  (matA[1][1] * matB[1][2])  +  (matA[1][2] * matB[2][2]) << " " <<  setw(10) << endl << endl;

        cout << setw(10) << " " << (matA[2][0] * matB[0][0]) +  (matA[2][1] * matB[1][0])  +  (matA[2][2] * matB[2][0]) << " " <<  setw(10);
        cout << setw(10) << " " << (matA[2][0] * matB[0][1]) +  (matA[2][1] * matB[1][1])  +  (matA[2][2] * matB[2][1]) << " " <<  setw(10);
        cout << setw(10) << " " << (matA[2][0] * matB[0][2]) +  (matA[2][1] * matB[1][2])  +  (matA[2][2] * matB[2][2]) << " " <<  setw(10) << endl << endl << endl << endl;



    }
        char t;
cout<<"Do you want to continue(Y/N)"<< endl;
cin>> t;
if(t=='Y' || t=='y'){
  system("cls");
falme_matrix();
}
 else
 choice();
}


//---------------------------------------Matrix Cal ends----------------------------------------------------------------------------------


//---------------------------------------Number conversion(parent)-------------------------------------------------------------------------



void number_sysConv()
{
	title();
	int choice101=1;
      	 	
    while (choice101<8)
	{
	
	cout << endl ; 
	cout << "\t\t" << "   ===============================================" << endl ;
	cout << "\t\t" << "   ===============================================" << endl ;
	cout << "\t\t" << "     PRESS 1 TO CONVERT FROM DECIMAL TO BINARY " << endl ;
	cout << "\t\t" << "     PRESS 2 TO CONVERT FROM BINARY TO DECIMAL " << endl ;
	cout << "\t\t" << "     PRESS 3 TO CONVERT FROM OCTAL TO DECIMAL " << endl ;
	cout << "\t\t" << "     PRESS 4 TO CONVERT FROM DECIMAL TO OCTAL " << endl ;
	cout << "\t\t" << "     PRESS 5 TO CONVERT FROM DECIMAL TO HEXADECIMAL " << endl ;
	cout << "\t\t" << "     PRESS 6 TO CONVERT FROM HEXADECIMAL TO DECIMAL " << endl ;
	cout << "\t\t" << "     PRESS 7 TO CONVERT FROM HEXADECIMAL TO BINARY " << endl ;
	
	cout << "\t\t" << "                  PRESS 8 TO EXIT "   << endl ;
	
	cout << "\t\t" << "   ===============================================" << endl ;
	cout << "\t\t" << "   ===============================================" << endl ;
	cout << endl ;
	cout << "\t\t\t" << "          ENTER YOUR CHOICE " << endl ;
	
	cout << "\t\t\t" << "         ===================" << endl ;
	cin >> choice101 ;
	cout << endl ;
            
                switch(choice101)
                {
                    case 1 :
                        {
                            decimal_to_binary();
                            break ;
                        }
                    case 2 :
                        {
                            binary_to_decimal();
                            break ;
                        }
                    case 3 :
                        {
                            octal_to_decimal();
                            break ;
                        }
                    case 4 :
                        {
                            decimal_to_octal(); 
                            break ;
                        }
                     case 5 :
                        {
                            decimal_to_hexadecimal();
                            break ;
                        }
                    case 6 :
                        {
                            hexadecimal_to_decimal();
                            break ;
                        }
                    case 7 :
                        {
                            hexadecimal_to_binary();
                            break ;
                        }
                    case 8 :
                        {
                         exit();
						              
                        break ;
                    }
                   
                    
        
}

}
}
//---------------------------------Converdsion---------------------------------------------------------------
  
    void decimal_to_binary()
	{
		int decimalNumber, cnt, i ;
        int binary[32] ;
		
	
	    cout << "DECIMAL NUMBER TO BINARY NUMBER " << endl ;
	    cout << "===============================" << endl ;
	    cout << endl ;
        cout << "ENTER DECIMAL NUMBER : " ;
        cin >> decimalNumber ;
        cout << endl ;

        cnt = 0; 
        
        while(decimalNumber > 0)
		{
			binary[cnt] = decimalNumber % 2 ; 
            decimalNumber = decimalNumber / 2 ;
            cnt++ ;
		             
        }
        
        cout << "THE BINARY NUMBER IS : " ;
	    for(i = cnt-1 ; i>=0 ; i--)
	    {
		   cout << binary[i] ;
	    }
	    

	}	
			
			
	void binary_to_decimal()
	{
		int binaryNumber, mod, sum = 0 , i = 1 ;
		
		cout << "BINARY NUMBER TO DECIMAL NUMBER " << endl ;
		cout << "===============================" << endl ;
		cout << endl ;
		cout << "ENTER BINARY NUMBER : " ;
		cin >> binaryNumber ;
		cout << endl ;
		
		do
		{
			
			mod = binaryNumber % 10 ; 
			binaryNumber = binaryNumber / 10 ;
			sum = sum + mod * i ;
			i = i * 2 ;
			
		}while(binaryNumber > 0) ;
		
		cout << "THE DECIMAL NUMBER IS : " << sum << endl ;  
	}
	
 
    void octal_to_decimal()
	{
		
		int octalNumber , rem , sum = 0 , i = 1 ;
		
		cout << "OCTAL NUMBER TO DECIMAL NUMBER " << endl ;
		cout << "==============================" << endl ;
		cout << endl ;
		cout << "ENTER OCTAL NUMBER : " ;
		cin >> octalNumber ;
		cout << endl ;
		
		do
		{
			rem = octalNumber % 10 ;
			sum = sum + i * rem ;
			i = i * 8 ;
			octalNumber = octalNumber / 10 ;
								
		}while(octalNumber > 0); 
		
		cout << "THE DECIMAL NUMBER IS : " << sum << endl ; 		
	}
	
	
	void decimal_to_octal() 
	{
		
		int decimalNumber, rem , i = 1 , sum = 0 ; 
		
		
		cout << "DECIMAL NUMBER TO OCTAL NUMBER " << endl ;
		cout << "==============================" << endl ;
		cout << endl ;
		cout << "ENTER DECIMAL NUMBER : " ;
        cin >> decimalNumber ;
        cout << endl ;
		
		while(decimalNumber != 0)
		{
			rem = decimalNumber % 8 ;
			sum = sum + i * rem ;
			
			i = i * 10 ;
			decimalNumber = decimalNumber / 8 ;
		}
		
		cout << "THE OCTAL NUMBER IS : " << sum << endl ;   
    }
    
	
	void decimal_to_hexadecimal() 
	{
		
		char hexaDecimal[16] ;
		int decimalNumber , rem = 0 , i = 0 , j ;
		 
		
		cout << "DECIMAL NUMBER TO HEXADECIMAL NUMBER " << endl ;
		cout << "====================================" << endl ;
		cout << endl ;
		cout << "ENTER DECIMAL NUMBER : " ; 
		cin >> decimalNumber ;
		cout << endl ;
		
		
		while(decimalNumber > 0)
		{
			
		    rem = decimalNumber % 16 ; 
			decimalNumber = decimalNumber / 16 ;  
			 
		    if(rem < 10) 
		    { 
                hexaDecimal[i] = rem + 48 ; 
                i++ ;
            }
			else
			{ 
                hexaDecimal[i] = rem + 55 ;  
                i++ ;
            }  
        
        }
        
		for(int j = (i-1) ; j >= 0 ; j--)
		{
			cout << "THE HEXADECIMAL NUMBER IS : " << hexaDecimal[j] ;
        }
        
    }
    
    
	void hexadecimal_to_decimal()
	{
		char hexadecimal[32] ;
        int  decimalNumber , i , c = 0 ;
        
        int  digit ;   

        cout << "HEXADECIMAL NUMBER TO DECIMAL NUMBER " << endl ;
		cout << "====================================" << endl ;
		cout << endl ;
		cout << "ENTER HEXADECIMAL NUMBER : " ;
        cin >> hexadecimal ;

        decimalNumber = 0 ;
        
        for(i = (strlen(hexadecimal)-1) ; i >= 0 ; i--)
        {
        	
        switch(hexadecimal[i])
        {
            case 'A':
                digit = 10 ; 
				break ;
            case 'B':
                digit = 11 ; 
				break ;
            case 'C':
                digit = 12 ; 
				break ;
            case 'D':
                digit = 13; 
				break ;
            case 'E':
                digit = 14 ; 
				break ;
            case 'F':
                digit = 15 ; 
				break ;
            default:
                digit = hexadecimal[i]-0x30 ;
        }
        
        decimalNumber= decimalNumber + (digit)*pow(16,c) ;
        c++ ;
    }

    cout << "DECIMAL NUMBER IS : " << decimalNumber ;
     
}


    void hexadecimal_to_binary()
    {
    	
    	char hexadecimalNumber[50] ;
    	long int i ;
    	
    	cout << "HEXADECIMAL NUMBER TO BINARY NUMBER " << endl ;
		cout << "====================================" << endl ;
		cout << endl ;
		
    	cout << "ENTER HEXADECIMAL NUMBER : " ; 
    	cin >> hexadecimalNumber ;
    	
        cout << "THE BINARY NUMBER IS : " ;
    	
    	while(hexadecimalNumber[i]) 
    	{
    		
		switch (hexadecimalNumber[i])
        {
        case '0':
            cout << "0000" ; 
			break ;
        case '1':
            cout << "0001" ; 
			break ;
        case '2':
            cout << "0010" ; 
			break;
        case '3':
            cout << "0011" ; 
			break;
        case '4':
            cout << "0100" ; 
			break;
        case '5':
            cout << "0101" ; 
			break;
        case '6':
            cout << "0110" ; 
			break;
        case '7':
            cout << "0111" ; 
			break;
        case '8':
            cout << "1000" ; 
			break;
        case '9':
            cout << "1001" ; 
			break;
        case 'A':
            cout << "1010" ; 
			break;
        case 'B':
            cout << "1011" ; 
			break ;
        case 'C':
            cout << "1100" ; 
			break ;
        case 'D':
            cout << "1101" ; 
			break;
        case 'E':
            cout << "1110" ; 
			break; 
        case 'F':
            cout << "1111" ;  
			break;
        case 'a':
            cout << "1010" ; 
			break;
        case 'b':
            cout << "1011" ; 
			break;
        case 'c':
            cout << "1100" ; 
			break;
        case 'd':
            cout << "1101" ; 
			break;
        case 'e':
            cout << "1110" ; 
			break;
        case 'f':
            cout << "1111" ; 
			break;
        default:
            cout << " INVALID HEXADECIMAL VALUE. "  ;
             
        }
        ++i ;
        
        }
        
       cout <<  hexadecimalNumber[i] ;

}


    

//------------------------------Hangman Function-------------------------------------------------------------------------------------
void hangMan()
{
		title();



	cout<< " HANGMAN " <<endl;
	cout<<" _____________"<<endl;
	cout<<"|      }      "<<endl;
	cout<<"|      0      "<<endl;
	cout<<"|      |      "<<endl;
	cout<<"|    / | \\   "<<endl;
	cout<<"|   /  |  \\  "<<endl;
	cout<<"|     / \\    "<<endl;
	cout<<"|    /   \\   "<<endl; 
	cout<<"|             "<<endl;
	cout<<"|             "<<endl;
	cout<<"|_____________"<<endl;
	cout<<"\nPRESS ANY KEY TO START"<<endl;
	getch();
	system("CLS");
	int tries{ 6 };// the number of guess
	char guess;
	bool correctguess = false;
	char periviousguesses[7];
	periviousguesses[0] =='\0';
		for (int i = 1; i < 6; i++)
	{
		periviousguesses[i] = '-'; 
	}
	periviousguesses[6] = '\0';
	string word;
	string wordlist[99];
	srand(time(NULL));
	ifstream randomwords;
	randomwords.open("words.txt");
	for(int i=0;i<99;i++)
	{
		randomwords >> wordlist[i];
		//cout<<wordlist[i]<<endl;
	}
	int randomnum = rand() % 100;
	word = wordlist[randomnum];
	cout<< word << endl;
	randomwords.close();
	string mysteryword(word.length(), '*');
	//cout << mysteryword << endl;
	while( tries >= 0)
{
	correctguess = false;
	cout<< "THE WORD YOU HAVE TO IS:\n\n";
	cout<< mysteryword << endl;
	cout<< "\nTHERE ARE "<< mysteryword.length() << " LETTER IN THE WORD\n\n";
	cout << "YOU HAVE " << tries  << " GUESSES LEFT\n ";
	if (periviousguesses[0] == '\0')
	{
		cout<<endl;
	}
	else
	{
		cout<< "YOU HAVE GUESSED: " << periviousguesses << endl;

	}
	
	
	cout << "\n\nGUESS A LETTER:";
	cin >> guess;
	for (int i = 0; i < mysteryword.length(); i++)
	{
		if (word [i] == guess)
		{
			mysteryword[i] = guess;
		
			correctguess = true;

		}
	}
	if (word == mysteryword)
	{
		cout <<"\n\n\n CONGRATULATIONS! YOU'VE GOT THE CORRECT WORD :"<<mysteryword<<endl;
		break;
	}
	if (correctguess == false)
	{
		tries--;
		cout << "\n\n\nSORRY, "<< guess << " IS NOT A PART OF THE WORD "<<endl;
	}
	else
	{
		cout<< "\n\n\nCONGRATULATION!"<< guess <<"IS ONE OF THE LETTER"<<endl;
	}
	switch(tries)
	{
	case 6:
    {  
	cout<<" _____________"<<endl;
	cout<<"|      }      "<<endl;
	cout<<"|             "<<endl;
	cout<<"|             "<<endl;
	cout<<"|             "<<endl;
	cout<<"|             "<<endl;
	cout<<"|             "<<endl;
	cout<<"|             "<<endl; 
	cout<<"|             "<<endl;
	cout<<"|             "<<endl;
	cout<<"|_____________"<<endl; 
	cout<<"\n\n\n\n\n\n\n"<<endl;
     
      break;
	}
	case 5:
	{
	cout<<" _____________"<<endl;
	cout<<"|      }      "<<endl;
	cout<<"|      0      "<<endl;
	cout<<"|      |      "<<endl;
	cout<<"|            "<<endl;
	cout<<"|             "<<endl;
	cout<<"|             "<<endl;
	cout<<"|             "<<endl; 
	cout<<"|             "<<endl;
	cout<<"|             "<<endl;
	cout<<"|_____________"<<endl;
	cout<<"\n\n\n\n\n\n\n"<<endl;	
	if (correctguess == false)
	{
	periviousguesses[0] = guess;
	}
		
      break;
	}
	case 4:
	{
	cout<<" _____________"<<endl;
	cout<<"|      }      "<<endl;
	cout<<"|      0      "<<endl;
	cout<<"|      |      "<<endl;
	cout<<"|      |      "<<endl;
	cout<<"|      |      "<<endl;
	cout<<"|             "<<endl;
	cout<<"|             "<<endl; 
	cout<<"|             "<<endl;
	cout<<"|             "<<endl;
	cout<<"|_____________"<<endl;	
	cout<<"\n\n\n\n\n\n\n"<<endl;
	if (correctguess == false)
	{
	periviousguesses[1] = guess;
	}
      break;
	}
	case 3:
	{
	cout<<" _____________"<<endl;
	cout<<"|      }      "<<endl;
	cout<<"|      0      "<<endl;
	cout<<"|      |      "<<endl;
	cout<<"|    / |      "<<endl;
	cout<<"|   /  |      "<<endl;
	cout<<"|             "<<endl;
	cout<<"|             "<<endl; 
	cout<<"|             "<<endl;
	cout<<"|             "<<endl;
	cout<<"|_____________"<<endl;	
	cout<<"\n\n\n\n\n\n\n"<<endl;
	if (correctguess == false)
	{
		periviousguesses[2] = guess;
	}
      break;
	}
	case 2:
	{
	cout<<" _____________"<<endl;
	cout<<"|      }      "<<endl;
	cout<<"|      0      "<<endl;
	cout<<"|      |      "<<endl;
	cout<<"|    / | \\   "<<endl;
	cout<<"|   /  |  \\  "<<endl;
	cout<<"|             "<<endl;
	cout<<"|             "<<endl; 
	cout<<"|             "<<endl;
	cout<<"|             "<<endl;
	cout<<"|_____________"<<endl;	
	cout<<"\n\n\n\n\n\n\n"<<endl;
	if (correctguess == false)
	{
	periviousguesses[3] = guess;
	}
      break;
	}
	case 1:
	{
	cout<<" _____________"<<endl;
	cout<<"|      }      "<<endl;
	cout<<"|      0      "<<endl;
	cout<<"|      |      "<<endl;
	cout<<"|    / | \\   "<<endl;
	cout<<"|   /  |  \\  "<<endl;
	cout<<"|     /       "<<endl;
	cout<<"|    /        "<<endl; 
	cout<<"|             "<<endl;
	cout<<"|             "<<endl;
	cout<<"|_____________"<<endl;
	cout<<"\n\n\n\n\n\n\n"<<endl;	
	if (correctguess == false)
	{
	periviousguesses[4] = guess;
	}
      break;
	}
	case 0:
	{
	cout<<"\n GAME OVER   "<<endl;
	cout<<" _____________"<<endl;
	cout<<"|      }      "<<endl;
	cout<<"|      0      "<<endl;
	cout<<"|      |      "<<endl;
	cout<<"|    / | \\   "<<endl;
	cout<<"|   /  |  \\  "<<endl;
	cout<<"|     / \\    "<<endl;
	cout<<"|    /   \\   "<<endl; 
	cout<<"|             "<<endl;
	cout<<"|             "<<endl;
	cout<<"|_____________"<<endl;
	cout<<"\n\n\n\n\n\n\n"<<endl;
	
	tries=-1;
	break;
	}
	default: 
	cout<<"if you seeing this line this is an error"<< endl;
      }
}
char t;
cout<<"Do you want to continue(Y/N)"<< endl;
cin>> t;
if(t=='Y' || t=='y'){
system("cls");
hangMan();
}
 else
 choice();
}




//-------------------------------------------------------exit-------------------------------------------------------
void exit_me()
{
	cout<< "\t\t\tTHANK YOU !"<< endl;
	exit(0);
}
void exit(){
	cout<< "\t\t\t\t\t EXIT"<<endl;
    cout<< "\t\t\t\t     ========="<<endl; 
    system("cls");
    choice();
}

