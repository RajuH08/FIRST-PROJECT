#include <iostream>

using namespace std;

int main () {
    
    
    double num1=0, num2=0 ;
     char choice{0} ;
    const double MARKET(84.50),MARKET1 (84.50), MARKET2 (95.37), MARKET3 (22.95), MARKET4 (65.32), MARKET5 (0.061), MARKET6 (102.55);
    
    
    while (true) {
    cout << "\n========================================\n";
    cout << " \n\nTODAY MARKET RATE: " << MARKET  << " OF USD TODAY \n\n";
    cout << "\n========================================\n";
    cout << "select an option" << endl;
    cout << " 1. Calculator \n" ;
    cout << " 2. Currency Convert \n" ;
    cout << " 3. Back to Main \n";
    cout << " 0. Exit\n ";
    cout << " Enter your choice \n";
    cin >> choice ;
    
    if (choice == '1') {
        
        char selc ;
        
        
        cout << "\nThankYou for selecting Calculator "<< endl ;
        cout << "\n***********************************\n" ;
        cout << " Calculator \n" << endl;
        
        cout << "select an option" << endl;
        cout << " a. ADDITION \n" ;
        cout << " b. SUBTRACTION \n" ;
        cout << " c. MULTIPLICATION \n";
        cout << " d. DIVISION \n ";
        cout << "e. Back to Main \n "; 
        cout << " Enter your choice ";
        cin >> selc;
        
        
        
        
        if(selc == 'a') {
            
            cout << "ENTER YOUR NUMBERS\n "<< endl;
            cin >> num1 >> num2;
            cout << "ANSWER IS: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            
        } else if(selc == 'b'){
            
            cout << "ENTER YOUR NUMBERS\n " << endl;
            cin >> num1 >> num2;
            cout << "ANSWER IS: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        
        } else if(selc == 'c'){
            
            cout << "ENTER YOUR NUMBERS\n " << endl;
            cin >> num1 >> num2;
            cout << "ANSWER IS: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            
        } else if(selc == 'd'){
            
            cout << "ENTER YOUR NUMBERS\n " << endl;
            cin >> num1 >> num2;
            if(num2 != 0)
            cout << "ANSWER IS: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            else cout << "Enter: Division by Zero!\n";
            
        } else if(selc == 'e'){
            
            cout << "RETURNING TO MAIN\n " << endl;
            
            
        } else  {
            cout << "Invalid option selected.\n";
        }
        
        
        
    }  else if (choice == '2') {
        cout << "\n\nThankYou for selecting Currency Converter";
        cout << "\n***********************************\n" ;
        cout << " Currency Calculator \n" << endl;;
        
        cout << "ENTER YOUR CURRENCY TO CONVERT: \n" << endl;
        cin >> num1 ;
        cout << " USD TO INR IS: " << num1 << " * " << MARKET1 << " = " << num1 * MARKET1 << endl; 
        cout << " EUR TO INR IS: " << num1 << " * " << MARKET2 << " = " << num1 * MARKET2 << endl; 
        cout << " UAE TO INR IS: " << num1 << " * " << MARKET3 << " = " << num1 * MARKET3 << endl; 
        cout << " SGD TO INR IS: " << num1 << " * " << MARKET4 << " = " << num1 * MARKET4 << endl; 
        cout << " WON TO INR IS: " << num1 << " * " << MARKET5 << " = " << num1 * MARKET5 << endl; 
        cout << " SWISS TO INR IS: " << num1 << " * " << MARKET6 << " = " << num1 * MARKET6 << endl; 
        
    } else if (choice == '3') {
        cout << "Returning to Main \n";
    } else if (choice == '0'){
        cout << "Exiting program. ThankYou!\n";
        break;
    } 
    
    
    else {
        cout << "Invalid option selected.\n";
    }

    }    
        
        
        
     

    
    return 0;
}
    
