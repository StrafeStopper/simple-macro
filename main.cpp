#include "main.h"
#include "fileio.h"
#include "record.h"

using namespace std;

int menuOption = NULL;
string fileName = "New.txt";


int menu()
{
    int m;
    cout << endl << "Select an option from the below list:" << endl;
    cout << "1) New macro" << endl 
    << "2) Exit" << endl;
    cin >> m;
    return m;
};

int main( int argc, char* args[])
{
    cout << "Welcome to simple-macro!" << endl << "This is a simple command line tool that allows the user to run code, commands, long macros, etc with the push of a button. " << endl;
    
    /*
    while ( !_kbhit() )
    {
        _cputs( "Waiting for key press" );
    }
    */

    menuOption = menu();
    switch(menuOption)
    {
        case 1:
            cout << "Make new macro." << endl;
            recordString( "Please type full file name for new macro" );
            newMacroFile(fileName);
            break;
        
        case 2:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid menu option." << endl;
            break;
    }

   

    return 0;
};