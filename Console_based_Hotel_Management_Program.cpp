#include <iostream>
using namespace std;

int main() {

    //Quantity
    int Qrooms = 100, Qpasta = 5, Qburger = 5, Qnoodles = 5, Qshake = 5, Qfranky = 5;
    
    //food items sold
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Sfranky = 0;
    
    //total price of items
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_franky = 0;

    int choice;
    do {
        cout << "\n\t\t\t\t\t\tWelcome to My Hotel!\n\n";
        cout<<"Select what you want!"<<endl;
        cout<<endl;
        cout << "1. Rooms\n";
        cout << "2. Pasta\n";
        cout << "3. Burger\n";
        cout << "4. Noodles\n";
        cout << "5. Shake\n";
        cout << "6. Franky\n";
        cout << "7. Sales and Collection\n";
        cout << "8. Exit\n\n";
        cout << "Please enter your choice: ";

        cin >> choice;

        switch(choice) {
            case 1:
                cout << "\nNumber of rooms available: " << Qrooms << endl;
                cout<<endl;
                cout << "Enter the number of rooms you want: ";
                int quant_room;
                cin >> quant_room;
                cout<<endl;
                if(Qrooms - Srooms >= quant_room) {
                    Srooms += quant_room;
                    Total_rooms += quant_room * 2000;
                    cout << quant_room << " room(s) have been allotted to you!\n";
                }
                else {
                    cout << "Only " << Qrooms - Srooms << " room(s) remaining in the hotel.\n";
                }
                break;

            case 2:
                cout << "\nQuantity of pasta available: " << Qpasta << endl;
                cout<<endl;
				cout << "Enter the quantity of pasta you want: ";
                int quant_pasta;
                cin >> quant_pasta;
                cout<<endl;
                if(Qpasta - Spasta >= quant_pasta) {
                    Spasta += quant_pasta;
                    Total_pasta += quant_pasta * 100;
                    cout << quant_pasta << " plate(s) of pasta have been ordered!\n";
                }
                else {
                    cout << "Only " << Qpasta - Spasta << " plate(s) of pasta remaining in the hotel.\n";
                    cout<<endl;
                    cout<<"We are making pasta for you Please comeback after sometime!"<<endl;
                }
                break;

            case 3:
                cout << "\nQuantity of burger available: " << Qburger << endl;
                cout<<endl;
				cout << "Enter the quantity of burger you want: ";
                int quant_burger;
                cout<<endl;
                cin >> quant_burger;
                if(Qburger - Sburger >= quant_burger) {
                    Sburger += quant_burger;
                    Total_burger += quant_burger * 60;
                    cout << quant_burger << " burger(s) have been ordered!\n";
                }
                else {
                    cout << "Only " << Qburger - Sburger << " burger(s) remaining in the hotel.\n";
                    cout<<endl;
                    cout<<"We are making burger for you Please comeback after sometime!"<<endl;
                }
                break;

            case 4:
                cout << "\nQuantity of noodles available: " << Qnoodles << endl;
                cout<<endl;
				cout << "Enter the quantity of noodles you want: ";
                int quant_noodles;
                cin >> quant_noodles;
                cout<<endl;
                if(Qnoodles - Snoodles >= quant_noodles) {
                    Snoodles += quant_noodles;
                    Total_noodles += quant_noodles * 80;
                    cout << quant_noodles << " bowl(s) of noodles have been ordered!\n";
                }
                else {
                    cout << "Only " << Qnoodles - Snoodles << " bowl(s) of noodles remaining in the hotel.\n";
                    cout<<endl;
                    cout<<"We are making noodles for you Please comeback after sometime!"<<endl;
                }
                break;

            case 5:
                cout << "\nQuantity of shake available: " << Qshake << endl;
                cout<<endl;
				cout << "Enter the quantity of shake you want: ";
                int quant_shake;
                cin >> quant_shake;
                cout<<endl;
                if(Qshake - Sshake >= quant_shake) {
                    Sshake += quant_shake;
                    Total_shake += quant_shake * 80;
                    cout << quant_shake << " glass(es) of shake have been ordered!\n";
                }
                else {
                    cout << "Only " << Qshake - Sshake << " glass(es) of shake remaining in the hotel.\n";
                    cout<<endl;
                    cout<<"We are making shake for you Please comeback after sometime!"<<endl;
                }
                break;

            case 6:
                cout << "\nQuantity of franky available: " << Qfranky<< endl;
                cout<<endl;
				cout << "Enter the quantity of franky you want: ";
                int quant_franky;
                cin >> quant_franky;
                cout<<endl;
                if(Qfranky - Sfranky >= quant_franky) {
                    Sfranky += quant_franky;
                    Total_franky += quant_franky * 50;
                    cout << quant_franky << " plate(s) of franky have been ordered!\n";
                }
                else {
                    cout << "Only " << Qfranky - Sfranky << " plate(s) of franky remaining in the hotel.\n";
                    cout<<endl;
                    cout<<"We are making franky for you Please comeback after sometime!"<<endl;
                }
                break;

            case 7:
                cout << "\n\tSales and Collection\n";
                cout << "Rooms: " << Srooms << " Total Sales: Rs. " << Total_rooms << endl;
                cout << "Pasta: " << Spasta << " Total Sales: Rs. " << Total_pasta << endl;
                cout << "Burger: " << Sburger << " Total Sales: Rs. " << Total_burger << endl;
                cout << "Noodles: " << Snoodles << " Total Sales: Rs. " << Total_noodles << endl;
                cout << "Shake: " << Sshake << " Total Sales: Rs. " << Total_shake << endl;
                cout << "Franky: " << Sfranky << " Total Sales: Rs. " << Total_franky << endl;
                cout << "Total Sales: Rs. " << (Total_rooms + Total_pasta + Total_burger + Total_noodles + Total_shake + Total_franky) << endl;
                break;

            case 8:
                cout << "\nThank you for using our Hotel!\n";
                break;

            default:
                cout << "\nInvalid choice. Please enter a valid choice.\n";
        }

    } while(choice != 8);

    return 0;
}


