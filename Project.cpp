#include<iostream>
using namespace std;

class shopping{
	private:
		float billamount;
	public:
		void shop(), customer(), add(), show(), bill();
};

void shopping :: shop(){
    	cout<<"\t   ___________\n";
    	cout<<"\n    |  Online Shopping Store |\n";
    	cout<<"\t   ___________\n";
    	cout << endl;
    	cout<<"\t|    Welcome     |\n"<<endl;
    customer();
}

void shopping::customer(){
    string a;
    cout<<"Enter your name: \n";
    cin>>a;
    system ("cls");
    add() ;
}

void shopping:: add(){
    char choice, item;
    int o, z, v;
    billamount = 0;
    cout<<"\nWelcome to Online Shopping Center. Now you can buy anything.     \n"<<endl;
    top:
		cout<<"Please enter M to see mobile section "<<endl;
		cout<<"Please enter L to see laptop section "<<endl;
		cout<<"\nPlease select what You want to buy \n";
		cin>>choice;
	system ("cls");
		if(choice=='m' || choice=='M'){
	    	mobile:
				cout<<"\nWelcome to mobile section"<<endl;
				cout<<"\nSelect mobie brand  \n";
				cout<<" \n  1)-Apple  \n";
				cout<<"  2)-SAMSUNG\n";
				cout<<"\t Select any option  \n";
				cin>>o;
				system ("cls");
				switch(o){
				    case 1:
				        t:
					        cout<<" In APPLE Brand available mobiles are following \n";
					        cout<<" 1- Iphone X \n";
				    	    cout<<" 2- Iphone 13\n";
					        cout<<"\nChoose an option\n";
					        cin>>item;
					        system ("cls");
					        if(item=='1'){
						        cout<<"\nYou select Iphone X \n";
					    	    cout<<"Specification:\n";
					        	cout<<"Ram: 4GB\t\tROM: 128GB \n";
						        cout<<"Color: Black\t\tSize: 5 Inch  \n";
    	    					cout<<"Price: 60000\n";
        						billamount = billamount+60000;
         					} else if(item=='2'){
								cout<<"\n\tYou select Iphone 13 \n";
	        					cout<<" Specification:\n";
	        					cout<<"Ram: 4GB\t\tROM: 500GB \n";
    	    					cout<<"Color: golden\t\tSize: 5 Inch  \n";
        						cout<<"Price: 150000\n";
        						billamount = billamount+150000;
							} else{
				        	 	cout<<"\nEnter correct option \n";
         						goto t;
	         				}
	         			break;
					case 2:
				        z:
					        cout<<" In SAMSUNG Brand available mobiles are following \n";
        					cout<<" 1- NOTE 10 \n";
        					cout<<" 2- S22\n";
        					cout<<"\nChoose an option\n";
        					cin>>item;
        					system ("cls");
        					if(item=='1'){
								cout<<"\n\tYou select NOTE 10 \n";
        						cout<<" Specification:";
        						cout<<"Ram: 6GB\t\tROM: 128GB \n";
        						cout<<"Color: Black\t\tSize: 6 Inch \n ";
        						cout<<"Price: 60000\n";
        						billamount = billamount+60000;
        					} else if(item=='2'){
								cout<<"\n\tYou select S22 \n";
        						cout<<" Specification:\n";
        						cout<<"Ram: 8GB\t\tROM: 256GB \n";
        						cout<<"Color: Blue\t\tSize: 6.3 Inch  \n";
        						cout<<"Price : 90000\n";
        						billamount = billamount+90000;
        					} 
                            else{
						        cout<<"\nEnter correct option \n";
        						goto z;
        					}
                            break;
                        
					default:
    					cout<<"\n\n Enter correct option \n";
    					goto mobile;
				}
		}		
	
		else if(choice=='l' || choice=='L'){
			laptop:
				cout<<"\nWelcome to laptop section"<<endl;
				cout<<"\nSelect laptop brand which YOU want to buy      \n";
			cout<<"  1)-Apple \n";
				cout<<"  2)-HP \n";
                cout << "  3)-DELL" << endl;
				cout<<"\t  Select any option      \n";
				cin>>v;
				system ("cls");
				switch(v){
					case 1:
						up:
        					cout<<" In APPLE Brand available laptop are following \n";
        					cout<<" 1- Macbook pro 17 \n";
        					cout<<" 2- Macbook M1Chip\n";
        					cout<<"\nChoose an option\n";
        					cin>>item;
        					system ("cls");
        					if(item=='1'){
									cout<<"\nYou select macbook pro 17 \n";
        							cout<<"Specification:\n";
        							cout<<"Ram: 4GB\t\tROM: 500GB \n";
        							cout<<"Color: Black\t\tPanel: touch  \n";
        							cout<<"Price: 150000\n";
        							billamount = billamount+150000;
        						} else if(item=='2'){
									cout<<"\n You select macbook M1Chip \n";
        							cout<<" Specification:\n";
        							cout<<"Ram: 8GB\t\tROM: 1 Tb \n";
        							cout<<"Color: Red\t\tPanel: simple  \n";
        							cout<<"Price : 200000\n";
        							billamount = billamount+200000;
								}  else{
									cout<<"\newnter correct option \n";
        							goto up;
         						}
         				break;
					case 2:
						up1:
        					cout<<" In HP Brand available laptops are following \n";
        					cout<<" 1- HP 14 \n";
        					cout<<" 2- HP 5 \n";
       						cout<<"\nChoose an option\n";
        					cin>>item;
        					system ("cls");
        					if(item=='1'){
								cout<<"\n You select HP 14 \n";
        						cout<<" Specification:";
        						cout<<"Ram: 8GB\t\tROM: 128GB \n";
        						cout<<"Color: Red\t\tIntelcore: i5 \n ";
        						cout<<"Price: 80000\n";
        						billamount = billamount+80000;
    						} else if(item=='2'){
								cout<<"\n You Select HP 5\n";
        						cout<<" Specification:\n";
        						cout<<"Ram: 6GB\t\tROM: 256GB \n";
        						cout<<"Color: blue\t\tIntelcore: i7  \n";
        						cout<<"Price : 70000\n";
        						billamount = billamount+70000;
    						} 
         				break;
					case 3:
						up2:
        					cout<<" In DELL Brand available laptop are following \n";
        					cout<<"\t   Sorry Sir \n";
        					cout<<"\n We hav'nt more Dell laptops. All have sold";
        					goto laptop;
        	            	break;

					default:
						cout<<"\n Enter correct option \n";
    					goto laptop;
				}
		}
		
		else{
			cout<<"\nInvalid option\n";
    		goto top;
		}
		
	show();
}

void shopping::show(){
    char r;
    char size;
    zee:
		cout<<"If you want to buy this item press Y otherwise N "<<endl;
		cin>>r;
		system ("cls");
		if(r=='y' || r=='Y'){
			bill();
		} else if(r=='n' || r=='N'){
		    cout<<" \tThanks for coming\n";
    		boo:
    			cout<<"\n Do you want to purchase another item ";
    			cout<<"\n Enter a for yes  and b for no\n";
    			cin>>size;
    			system ("cls");
    			if(size=='a') {
					customer();
    			} else if(size=='b') {
			        cout<<"\n Thanks sir for your visiting";
    	 			cout<<"\n Have a nice day sir ";
    			} else {
			        cout<<" Enter correct option\n";
    			    goto boo;
    			}
			} else {
				cout<<"\n Enter correct option\n ";
				goto zee;
			}
}

void shopping::bill(){
    char reg;
	cout << " \nCongrats sir you have purchased this item \n";
	cout << "\nYour total amount is =  " << billamount;
	cout << "\n|>thanks for coming<| \n";
	cout << "\nDo you want to shopp again \n";
	cout << " If u want to shop again  press Y otherwise press any button \n";
	cin>>reg;
	system ("cls");
	if( reg=='y' || reg=='Y'){
		add();
	}
     else
     { 
	    cout<<" \nThanks for coming and visiting\n ";
    	cout<<" \n  Have a nice day  sir \n";
        
	}
}

int main(){
    shopping b;
    b.shop();
    return 0;
}