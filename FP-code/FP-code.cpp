#include <iostream>
#include<string>;
using namespace std;

void mainmenu(); //main menu
void welcome(); //welcome message

void login(); //login function for the manangement
void loginfunctions1(); //function if the login is successful
void loginoptions2(); //function if the login is unsuccessful
void logout(); //logout function for the management

void managefurniture(); //function to manage furniture for the management
void addfurniture(); //function to add furniture for the management
void furnituredetails(); //function to view updated list of furniture

void managesales(); //function to manage sale details for the management
void viewsales(); //function to view sale details for the management
void addsales(); //function to add sales for the management

void availablefurniture(); //function to view available furniture for customers

void searchfurniture(); //function to search furniture and view their details for customers
void searchfurniture_options1(); //function if search is successful (valid product ID)
void searchfurniture_options2(); //function if the search is unsuccessful (invalid product ID)

void companydetails(); //function to view company details
void exit(); //function to exit the program
void back(); //function to go back to main menu


string productno[10] = { "1","2","3","4","5","6","7","8","9","10" };
string productname[10] = {"Bedroom set", "Dining set", "Arm chair", "Rocking chair", "Coffee table", "Couch", "Computer desk", "Office desk", "Book case", "Closet" };
string productid[10] = { "B001","D002","A003","R004","C005","C006","C007","O008","B009","C010" };
string productprice[10] = {"Rs.200 000","Rs.110 000", "Rs.65 000", "Rs.11 000", "Rs.15 000",  "Rs.25 000", "Rs.20 000", "Rs.55 000", "Rs.45 000","Rs.83 000" };
string productavailability[10] = { "Available","Available","Available","Unavailable","Unavailable","Available","Available","Available","Unavailable","Unavailable" };

int arraysize1 = 10; //sizeof(productno)/sizeof(string);

string saleno[5] = { "001","002","003","004","005"};
string sale [5]={"Coffee table","Bedroom set","Couch","Coffee table","Arm chair"};
string customer_name[5] = {"Asheley","Ryan","Rachel","Heather","Michael"};
string date[5] = {"10/31/2022","11/2/2022","11/4/2022","11/5/2022","11/5/2022"};
string payment_type[5] = {"Cash payment","Credit card","Credit card","Cash payment","Cash payment"};

int arraysize2 = 5; //sizeof(saleno)/sizeof(string);


int main()
{
    system("cls");
    system("Color 3F");
    cout << endl << endl << endl << endl << endl << endl << endl;
    cout << "                                          WELCOME TO SUPRIME FURNITURE SHOP"<<endl<<endl;
    system("pause");
    system("cls");
    system("color 0B");
    welcome();
    mainmenu();

}
//main menu

void back() {
        cout << "                                              Press B/b to go back: ";
        string b;
        cin >> b;
        cin.ignore();
        if ((b == "b") or (b == "B")) {
            system("cls");
            welcome();
            mainmenu();
        }
        else {
            cout << endl;
            cout << "                                  Invalid command.Please try again!" << endl<<endl;
            back();
        }
    }
//function to go back to main menu

void welcome() {

    cout << "***********************************************************************************************************************" << endl;
    cout << "**       W E  L C  O  M  E       T O      S  U  P  R  I  M  E       F  U  R  N  I  T  U  R  E       S  H  O  P       **" << endl;
    cout << "***********************************************************************************************************************" << endl;
    cout << "                                                                                                                       " << endl;
}
//welcome message

void logout() {
    cout << endl << endl;
    cout << "                           Are sure you want to logout and go back to mainmenu?" << endl;
    cout << "                                            [1] Yes" << endl;
    cout << "                                            [2] No" << endl<<endl;
    cout << "                                          Enter your choice: ";
    string logoutinput;
    cin >> logoutinput;
    cin.ignore();
    cout << endl << endl;

    if (logoutinput == "1") {
        system("cls");
        welcome();
        mainmenu();
    }
    else if (logoutinput == "2") {
        system("cls");
        loginfunctions1();
    }
    else {
        cout << "                                    Invalid command.Please try again";
        logout();
    }


}
//logout function for the management


void loginfunctions1() {
    cout << endl << endl;
    cout << "                                            Login successful.Welcome!" << endl<<endl;
    cout << "                                          [1] Manage furniture items" << endl;
    cout << "                                          [2] Manage sale details" << endl;
    cout << "                                          [3] Logout" << endl << endl;
    cout << "                                               Enter your choice: ";
    string login_input;
    cin >> login_input;
    cin.ignore();
    cout << endl << endl;
    if (login_input == "1") {
        system("cls");
        managefurniture();
    }
    else if (login_input == "2") {
        system("cls");
        managesales();
    }
    else if (login_input == "3") {
        system("cls");
        logout();
    }
    else {
        cout << "                                        Invalid command.Please try again" << endl;
        loginfunctions1();
    }
}
//function if the login is successful


void loginoptions2(){
    cout << endl << endl;
    cout << "                                         Incorrect username or password.Please try again" << endl;
    cout << "                                                      [1] Try again" << endl;
    cout << "                                                      [2] Back" << endl << endl;
    cout << "                                                   Enter your choice: ";
    string loginoptions2_input;
    cin >> loginoptions2_input;
    cin.ignore();
    cout << endl << endl;
    if (loginoptions2_input == "1") {
        system("cls");
        login();
    }
    else if (loginoptions2_input == "2") {
        system("cls");
        welcome();
        mainmenu();
    }
    else {
        cout << "                                           Invalid command.Please try again" << endl;
        loginoptions2();
    }
}
//function if the login is unsuccessful


void login() {
    string username = "user";
    string password = "suprime";
    cout << endl;
    cout << "                                                        LOGIN             " << endl;
    cout << "                                                     ************         " << endl;
    cout << "                                           Login to SUPRIME FURNITURE SHOP" << endl;
    cout << "                                                  Enter username: ";
    cin >> username;
    cin.ignore();
    cout << "                                                  Enter password: ";
    cin >> password;
    cin.ignore();
    cout << endl << endl;
    if (username = "user", password == "suprime")
    {
        system("cls");
        loginfunctions1();
    }
    else {
        loginoptions2();
    }
}
//login function for the manangement

void availablefurniture() {
    cout << endl << endl;
    cout << "                                                     AVAILABLE FURNITURE ITEMS  " << endl;
    cout << "                                                  ****************************** " << endl << endl;
    cout << endl;
    for (int i = 0; i < arraysize1 ;i++) {
        cout<<"                                             Product Name: "<<productno[i]<<". "<< productname[i] << endl;
        cout<<"                                             Product Id: "<<productid[i]<<endl;
        cout << endl << endl;
    }

    back();
   
} 
//function to view available furniture for customers  

void searchfurniture_options1() {
    
    cout << "                                          [1] Search for another product" << endl;
    cout << "                                          [2] Back" << endl << endl;
    cout << "                                               Enter your choice: ";
    string searchfurniture_options1_input;
    cin >> searchfurniture_options1_input;
    cin.ignore();
    cout << endl << endl;
    if (searchfurniture_options1_input == "1") {
        system("cls");
        searchfurniture();
    }
    else if (searchfurniture_options1_input == "2") {
        system("cls");
        welcome();
        mainmenu();
    }
    else {
        cout << "                                     Invalid command.Please try again";
        searchfurniture_options1();

    }
}
//function if search is successful (valid product ID)

void searchfurniture_options2() {
    cout << endl;
    cout << "                                         Invalid product ID, please try again." << endl << endl;
    cout << "                                                  [1] Try again" << endl;
    cout << "                                                  [2] Back" << endl << endl;
    cout << "                                               Enter your choice: ";

    string searchfurniture_options2_input;
    cin >> searchfurniture_options2_input;
    cin.ignore();
    cout << endl << endl;

    if (searchfurniture_options2_input == "1") {
        system("cls");
        searchfurniture();
    }
    else if (searchfurniture_options2_input == "2") {
        system("cls");
        welcome();
        mainmenu();
    }
    else {
        cout << "                                                      Invalid command.Please try again" << endl;
        searchfurniture_options2();

    }

}
//function if the search is unsuccessful (invalid product ID)

void searchfurniture() {

    cout << endl << endl;
    cout << "                                                 SEARCH FURNITURE" << endl;
    cout << "                                           ***************************" << endl << endl;

    cout << "                                               Enter the product ID:";
    string idinput;
    cin >> idinput;
    cin.ignore();
    bool pid = true;
    int i;
    for (i = 0; i < arraysize1; i++) {
        if (productid[i] == idinput) {
            pid = true;
            cout << endl;
            cout << "                                           Product name - " << productname[i] << endl;
            cout << "                                           Product ID - " << productid[i] << endl;
            cout << "                                           Product price - " << productprice[i] << endl;
            cout << "                                           Product availability - " << productavailability[i] << endl << endl << endl << endl;
            searchfurniture_options1();

        }
    }

      if (pid==false) {
 
          searchfurniture_options2();

      }
} 
//function to search furniture and view their details for customers

void furnituredetails() {
    arraysize1++;
    cout << endl << endl;
    cout << "                                                       FURNITURE DETAILS  " << endl;
    cout << "                                                  ****************************** " << endl << endl;
    cout << endl;
    //arraysize1++;
    for (int i = 0; i <arraysize1; i++) {
        cout << "                                             Product Number:" << productno[i] << endl;
        cout << "                                             Product Name: " << productname[i] << endl;
        cout << "                                             Product Id: " << productid[i] << endl;
        cout << "                                             Product price:" << productprice[i] << endl;
        cout << "                                             Product availability:" << productavailability[i] << endl;
        cout << endl << endl;
    }

    back();
}
//function to view updated list of furniture

void addfurniture () {
    arraysize1++;
    cout << endl << endl;
    cout << "                                                To add a new funiture item enter the," << endl;
    cout << "                                                       [1] Product Number: ";
    cin >> productno[arraysize1];
    cin.ignore();

    cout << endl;
    cout << "                                                       [2] Product name: ";
    cin >> productname[arraysize1];
    cin.ignore();

    cout << endl;
    cout << "                                                       [3] Product ID: ";
    cin >> productid[arraysize1];
    cin.ignore();

    cout << endl;
    cout << "                                                       [4] Product Price: ";
    cin >> productprice[arraysize1];
    cin.ignore();

    cout << endl;
    cout << "                                                       [5] Product availability: ";
    cin >> productavailability[arraysize1];
    cin.ignore();
    cout << endl;
    cout << "                                                 Furniture item successfully added!" << endl;
    system("pause");
    system("cls");

    bool invalid = true;
    while (bool invalid = true) {
        cout << endl << endl;
        cout << "                                          Do you want to add another product?" << endl;
        cout << "                                                   [1] No, I'm done." << endl;
        cout << "                                                   [2] Add another product" << endl;
        cout << "                                                   [3] View updated list of furniture items" << endl << endl;
        cout << "                                                      Select your choice: ";
        string addanother;
        cin >> addanother;
        cin.ignore();
        if (addanother == "1") {
            system("cls");
            welcome();
            mainmenu();

        }
        else if (addanother == "2") {
            system("cls");
            addfurniture;
        }

        else if (addanother == "3") {
            system("cls");
            furnituredetails();
        }
        else {
            cout << endl;
            cout << "                                     Invalid command.Please try again";
            bool invalid = true;
        }
    }




}
//function to add furniture for the management


void managefurniture() {
    cout << endl << endl;
    cout << "                                                       MANAGE FURNITURE" << endl;
    cout << "                                                      *******************" << endl;
    cout << "                                                [1] Add a new furniture item" << endl;
    cout << "                                                [2] Back" << endl<<endl;
    cout << "                                                Enter your choice: ";
    string managefurniture_options;
    cin >> managefurniture_options;
    cin.ignore();
    cout << endl << endl;
    if (managefurniture_options == "1") {
        system("cls");
        arraysize1++;
        addfurniture();
    }
    else if (managefurniture_options == "2") {
        system("cls");
        welcome();
        mainmenu();
    }
    
    else {
        cout << "                                             Invalid command.Please try again";
        managefurniture;
    }
    

}
//function to manage furniture for the management

void viewsales() {
    cout << endl << endl;
    cout << "                                                           SALE DETAILS  " << endl;
    cout << "                                                  ****************************** " << endl << endl;
    cout << endl;
    cout << "         Sale No.            Date of sale          Customer name           Sold product            Payment type" << endl << endl;
    for (int c = 0; c < arraysize2; c++) {
        cout << "           "<<saleno[c] <<".             "<<date[c]<<"              " << customer_name[c] <<"              "<<sale[c] <<"              "<<payment_type[c]<<endl;
    }
    cout << endl;
     back();
}
//function to view sale details for the management

void addsales() {
    arraysize2++;
    cout << endl << endl;
    cout << "                                                To add a new sale,please enter the" << endl;
    cout << "                                                       [1] Sale number: ";
    cin >> saleno[arraysize2];
    cin.ignore();

    cout << endl;
    cout << "                                                       [2] Date of sale: ";
    cin >> date[arraysize2];
    cin.ignore();

    cout << endl;
    cout << "                                                       [3] Customer name: ";
    cin >> customer_name[arraysize2];
    cin.ignore();

    cout << endl;
    cout << "                                                       [4] Sold product: ";
    cin >>sale[arraysize2];
    cin.ignore();

    cout << endl;
    cout << "                                                       [5] Payment type: ";
    cin >>payment_type[arraysize2];
    cin.ignore();
    cout << endl;
    cout << "                                                 Sale details successfully added!" << endl;
    system("pause");
    system("cls");

    bool invalid = true;
    while (bool invalid = true) {
        cout << endl << endl;
        cout << "                                            Do you want to add another sale?" << endl;
        cout << "                                                     [1] No, I'm done." << endl;
        cout << "                                                     [2] Add another sale" << endl;
        cout << "                                                     [3] View updated list of sale details" << endl << endl;
        cout << "                                                        Select your choice: ";
        string addanother;
        cin >> addanother;
        cin.ignore();
        if (addanother == "1") {
            system("cls");
            welcome();
            mainmenu();

        }
        else if (addanother == "2") {
            system("cls");
            addsales;
        }

        else if (addanother == "3") {
            system("cls");
            arraysize2++;
            viewsales();
        }
        else {
            cout << endl;
            cout << "                                     Invalid command.Please try again";
            bool invalid = true;
        }
    }



}
//function to add sales for the management

void managesales() {
    cout << endl << endl;
    cout << "                                                           MANAGE SALES" << endl;
    cout << "                                                        *******************" << endl;
    cout << "                                                  [1] View sale details" << endl;
    cout << "                                                  [2] Add sale details" << endl;
    cout << "                                                  [3] Back" << endl;
    cout << "                                                  Enter your choice: ";
    string managesales_options;
    cin >> managesales_options;
    cin.ignore();
    cout << endl << endl;
    if (managesales_options == "1") {
        system("cls");
        viewsales();
    }
    else if (managesales_options == "2") {
        system("cls");
        addsales();
    }
    else if (managesales_options == "3") {
        system("cls");
        welcome();
        mainmenu();

    }
   
    else {
        cout << "                                             Invalid command.Please try again";
        managesales;
    }


}
//function to manage sale details for the management

void companydetails() {
    cout << endl << endl;
    cout<<"                                              ABOUT US                                         "<<endl;
    cout<<"                                       ************************                                "<<endl<<endl;
    cout << "   SUPRIME FURNITURE is the leading furniture supplier in Sri Lanka which will always suit your choice in your mind."<<endl<<endl;
    cout << "   You can visit our store at N0.112, Queens street,Colombo 7"<<endl;
    cout << "   contact us via,"<<endl;
    cout << "   Phone - 011-2265437"<<endl;
    cout << "   Email - suprimefurniture@gmail.com"<<endl;
    cout << "   Web site - www.suprimefurniture.lk"<<endl;
    cout << "   for more details"<<endl;
    back();
    system("pause");
}
//function to view company details

void exit() {
    cout << endl << endl;
    cout << "                                                     EXIT" << endl;
    cout << "                                                ***************" << endl;
    cout << "                                          Are you sure you want to exit?"<<endl;
    cout << "                                                 [1] Yes" << endl;
    cout << "                                                 [2] No" << endl;
    cout << "                                               Enter your choice: ";
    string exit_input;
    cin >> exit_input;
    cin.ignore();
    cout << endl << endl;


    if (exit_input == "1") {
        system("cls");
        cout<<"                                  Thank you for shopping at Suprime Furniture" << endl;
        system("pause");
        exit(0);
       
   
    }
    else if (exit_input=="2") {
        system("cls");
        welcome();
        mainmenu();
    }
    else {
        cout << "                                     Invalid command.Please try again" << endl<<endl;
        exit();
    }
   
}
//function to exit the program

void mainmenu() {
            cout << endl<<endl;
            cout << "                                                MAIN MENU                                       " << endl;
            cout << "                                             ****************                                   " << endl;
            cout << "                                              1. Login" << endl;
            cout << "                                              2. Available furniture items" << endl;
            cout << "                                              3. Search furniture " << endl;
            cout << "                                              4. Company details" << endl;
            cout << "                                              5. Exit" << endl << endl;

            cout << "                                               Enter your choice: ";

            string menu;
            cin >> menu;
            cin.ignore();
            system("cls");

            if (menu == "1") {
                login();
            }
            else if (menu == "2") {
                availablefurniture();
            }
            else if (menu == "3") {
                searchfurniture();
            }
            else if (menu == "4") {
                companydetails();
            }
            else if (menu == "5") {
                exit();
            }
            else {
                welcome();
                cout << endl << endl;
                cout << "                                           Invalid command. Please try again!" << endl << endl;
                mainmenu();
            }
                
             
}
//main menu

