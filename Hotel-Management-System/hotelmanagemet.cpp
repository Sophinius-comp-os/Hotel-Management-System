#include <iostream>
#include <conio.h>

using namespace std;
void inputerrors()
{
     if(cin.fail())
    {
        cout<<"\nPlease Enter Integer Values only." << endl;
        cout<<" Porgram Ended unsuccessful, Please try again." << endl;
        exit(1);
    }
}

int main()
{
    int bill;
    int quantity,choice;
    //Declaring the Quantity
    int quantity_of_rooms=0,quantity_of_pasta=0, quantity_of_burgers=0, quantity_of_noodles=0, quantity_of_chicken=0, quantity_of_qshake=0;

    //Declaring the quantity of items/foods already sold 
     int sold_rooms=0, sold_pasta=0, sold_burgers=0,sold_noodles=0,sold_chicken=0,sold_qshake=0;


     //declaring the total cost of the variables
     int Total_rooms=0, Total_pasta=0, Total_noodles=0, Total_chicken=0,Total_burgers=0, Total_qshake=0;

     cout <<"*************************Stock Available at the Sakarina International Hotel********************************"<<endl;
    //fflush(stdin);
     cout <<"\n Enter the quantity of Rooms: " ;
     cin>>quantity_of_rooms;
        inputerrors();
     cout <<"\n Enter the quantity of Pasta: " ;
     cin>>quantity_of_pasta;
     inputerrors();
     cout <<"\n Enter the quantity of Burgers: " ;
     cin>>quantity_of_burgers;
     inputerrors();
     cout <<"\n Enter the quantity of Noodles: " ;
     cin>>quantity_of_noodles;
     inputerrors();
     cout <<"\n Enter the quantity of Chickens Roll: " ;
     cin>>quantity_of_chicken;
     inputerrors();
     cout <<"\n Enter the quantity of Milkshake: " ;
     cin>>quantity_of_qshake;
   inputerrors();

     cout<<"\n";
do
{
   


     cout <<"\t\t Please Select from the Menu Options: " ;
     cout <<"\n 1. Rooms ";
     cout <<"\n 2. Pasta ";
     cout <<"\n 3. Burgers ";
     cout <<"\n 4. Noodles ";
     cout <<"\n 5. Milkshake ";
     cout <<"\n 6. Chicken ";
     cout <<"\n 7. Sales and Collection Information ";
     cout <<"\n 8. Exit ";

    cout <<"\n \n ----------------------------------------------------------------" << endl;

    cout <<"\n Please Enter Your Choice: ";

    cin >> choice;

    inputerrors();
//  cout<<"program executed successfully \n ";


switch(choice)
{
    case 1:
        cout <<"\n \n \t Enter the number of rooms you want: ";
        cin>>quantity;
     inputerrors();
        if(quantity_of_rooms-sold_rooms>=quantity)
        {
            sold_rooms=sold_rooms+quantity;
            Total_rooms=Total_rooms+quantity*1200;

            cout <<"\n \t "<<quantity<< " rooms Have been Allocated to You" << endl;

        }

        else{
            cout<<"\n \t " <<quantity_of_rooms-sold_rooms<< " rooms Are remaining" << endl;

        }
            break;
        

        

    case 2:

            cout <<"\n \n \t Enter the number of Pasta you want: ";
        cin>>quantity;
   inputerrors();
        if(quantity_of_pasta-sold_pasta>=quantity)
        {
            sold_pasta=sold_pasta+quantity;
            Total_pasta=Total_pasta+quantity*150;

            cout <<"\n \t" <<quantity<< " pasta/pastas Have been Allocated to You" << endl;

        }

        else{
            cout<<"\n \t " <<quantity_of_pasta-sold_pasta<< " pastas Are remaining" << endl;

        }
     break;
    case 3:

            cout <<"\n \n \t Enter the number of Burgers you want: ";
        cin>>quantity;
     inputerrors();

        if(quantity_of_burgers-sold_burgers>=quantity)
        {
            sold_burgers=sold_burgers+quantity;
            Total_burgers=Total_burgers+quantity*300;

            cout <<"\n \t" <<quantity<< " Burgers Have been Allocated to You" << endl;

        }

        else{
            cout<<"\n \t " <<quantity_of_burgers-sold_burgers<< " Burgers Are remaining" << endl;

        }
     break;
    case 4:

            cout <<"\n \n \t Enter the number of Noodles you want: ";
        cin>>quantity;
     inputerrors();
        if(quantity_of_noodles-sold_noodles>=quantity)
        {
            sold_noodles=sold_noodles+quantity;
            Total_noodles=Total_noodles+quantity*120;

            cout <<"\n \t "<<quantity<< " Noodles Have been Allocated to You" << endl;

        }

        else{
            cout<<"\n \t " <<quantity_of_noodles-sold_noodles<< " Noodles Are remaining" << endl;

        }
     break;
    case 5:
            cout <<"\n \n \t Enter the number of MilkShakes you want: ";
        cin>>quantity;
    inputerrors();
        if(quantity_of_qshake-sold_qshake>=quantity)
        {
            sold_qshake=sold_qshake+quantity;
            Total_qshake=Total_qshake+quantity*250;

            cout <<"\n \t "<<quantity<< " MilkShakes Have been Allocated to You" << endl;

        }

        else{
            cout<<"\n \t " <<quantity_of_qshake-sold_qshake<< " MilkShakes Are remaining" << endl;

        }
     break;
    case 6:
            cout <<"\n \n \t Enter the number of Chickens you want: ";
        cin>>quantity;
    inputerrors();
        if(quantity_of_chicken-sold_chicken>=quantity)
        {
            sold_chicken=sold_chicken+quantity;
            Total_chicken=Total_chicken+quantity*1000;

            cout <<"\n \t "<<quantity<< " Chickens Have been Allocated to You" << endl;

        }

        else{
            cout<<"\n \t " <<quantity_of_chicken-sold_chicken<< " Chickens Are remaining" << endl;

        }
     break;
    case 7:
            cout <<"\n \n \t *******Daily Sales  Report****************** \n \n";
            cout<<"\n Total rooms we at the start: "<<quantity_of_rooms;
            cout<<"\n Total Rooms sold: "<<sold_rooms;
            cout <<"\n Total Rooms Remaining: "<<quantity_of_rooms-sold_rooms;
            cout <<"\n Total amount of Pasta Collected: "<<Total_rooms;
            cout <<"\n";

            cout <<"\n Total Pasta at the start: "<<quantity_of_pasta;
            cout <<"\n Total pasta sold: "<<sold_pasta;
            cout <<"\n Total pasta remaining: "<<quantity_of_pasta-sold_pasta;
            cout <<"\n Total amount of Pasta Collected: "<<Total_pasta;
            cout <<"\n";

            cout<<"\n Total Burgers at the start: "<<quantity_of_burgers;
            cout<<"\n Total Burgers sold: "<<sold_burgers;
            cout <<"\n Total Burgers Remaining: "<<quantity_of_burgers-sold_burgers;
            cout <<"\n Total amount of Burgers Collected: "<<Total_burgers;
            cout <<"\n";

            cout<<"\n Total Noodles we at the start: "<<quantity_of_noodles;
            cout<<"\n Total Noodles sold: "<<sold_noodles;
            cout <<"\n Total Noodles Remaining: "<<quantity_of_noodles-sold_noodles;
            cout <<"\n Total amount of Noodles Collected: "<<Total_noodles;
            cout <<"\n";

            cout<<"\n Total Milkshakes we at the start: "<<quantity_of_qshake;
            cout<<"\n Total Milkshakes sold: "<<sold_qshake;
            cout <<"\n Total Milkshakes Remaining: "<<quantity_of_qshake-sold_qshake;
            cout <<"\n Total amount of Milkshakes Collected: "<<Total_qshake;
            cout <<"\n";

            cout<<"\n Total Chickens we at the start: "<<quantity_of_chicken;
            cout<<"\n Total Chickens sold: "<<sold_chicken;
            cout <<"\n Total Chickens Remaining: "<<quantity_of_chicken-sold_chicken;
            cout <<"\n Total amount of Chickens Collected: "<<Total_chicken;
            cout <<"\n";

           
        
     break;
    case 8:
    exit(0);
     break;
    default:
        cout<<"\n \t Wrong Input . Please Try Again." << endl;


    

}
 cout <<"\n Continue Shopping? Press 1 to continue and 0 to bill: ";
 cin>>bill;

}while (bill==1);

            float total_sales=Total_burgers+Total_rooms+Total_pasta+Total_noodles+Total_qshake+Total_chicken;

            cout<<"\n Total Sales Amount Made at the end of the day: "<<total_sales;
            
            cout <<"\n \n ***WELCOME***\n\n\n";





        getch();
    return 0;
    
}
