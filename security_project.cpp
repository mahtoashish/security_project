#include <iostream>
#include <conio.h>
using namespace std;
int a = 0;
struct Register
{
    int id;
    string name, email, password;
} R[25];
void registeraccount()
{
    system("cls");
    int ascii = 178;
    char ch = ascii, d;
    cout << "\n ";
    for (int i = 1; i <= 20; i++)
        cout << ch;
    cout << " C++ Mini Project ";
    for (int i = 1; i <= 20; i++)
        cout << ch;
    cout << "\n\n "
         << ch << ch << " ENTER USER ID -> ";
    cin >> R[a].id;
    cout << "\n\n "
         << ch << ch << " ENTER USER NAME -> ";
    cin >> R[a].name;
    cout << "\n\n "
         << ch << ch << " ENTER USER EMAIL -> ";
    cin >> R[a].email;
    cout << "\n\n "
         << ch << ch << " ENTER USER PASSWORD-> ";
    do
    {
        d = getch();
        if (isdigit(d) || isalpha(d) || ispunct(d))
        {
            R[a].password += d;
            cout << "*";
        }

    } while (isdigit(d) || isalpha(d) || ispunct(d));
    a++;
    cout << "\n\n\n " << ch << ch << "  ACCOUNT REGISTER SUCCESSFULLY " << ch << ch;
}

void loginaccount()
{
    system("cls");
    int ascii = 178;
    char ch = 178, d;
    cout << "\n ";
    for (int i = 1; i <= 20; i++)
        cout << ch;
    cout << " C++ Mini Project ";
    for (int i = 1; i <= 20; i++)
        cout << ch;
    if (a == 0)
    {
        cout << "\n\n\n " << ch << ch << " NO ANY RECORD FOUND " << ch << ch;
    }
    else
    {
        int found = 0;
        string t_email, t_password;
        cout << "\n\n"
             << ch << ch << " ENTER USER EMAIL -> ";
        cin >> t_email;
        cout << "\n\n"
             << ch << ch << " ENTER USER PASSWORD-> ";
        do
        {
            d = getch();
            if (isdigit(d) || isalpha(d) || ispunct(d))
            {
                t_password += d;
                cout << "*";
            }

        } while (isdigit(d) || isalpha(d) || ispunct(d));
        for (int k = 0; k < a; k++)
        {
            if (t_email == R[k].email && t_password == R[k].password)
            {
                cout << "\n\n"
                     << ch << ch << " USER ID -> " << R[k].id;
                cout << "\n\n"
                     << ch << ch << " USER NMAE -> " << R[k].name;
                cout << "\n\n"
                     << ch << ch << " USER EMAIL -> " << R[k].email;
                cout << "\n\n"
                     << ch << ch << " USER PASSWORD -> " << R[k].password;
                found++;
                break;
            }
        }
        if (found == 0)
        {
            cout << "\n\n\n " << ch << ch << " USER DATA INCORRECT " << ch << ch;
        }
    }
}

void forgetemail()
{
    system("cls");
    int ascii = 178;
    char ch = 178, d;
    cout << "\n ";
    for (int i = 1; i <= 20; i++)
        cout << ch;
    cout << " C++ Mini Project ";
    for (int i = 1; i <= 20; i++)
        cout << ch;
    if (a == 0)
    {
        cout << "\n\n\n " << ch << ch << " NO ANY RECORD FOUND " << ch << ch;
    }
    else
    {
        int found = 0;
        string t_password;

        cout << "\n\n"
             << ch << ch << " ENTER USER PASSWORD-> ";
        do
        {
            d = getch();
            if (isdigit(d) || isalpha(d) || ispunct(d))
            {
                t_password += d;
                cout << "*";
            }

        } while (isdigit(d) || isalpha(d) || ispunct(d));
        for (int k = 0; k < a; k++)
        {
            if (t_password == R[k].password)
            {
                cout << "\n\n"
                     << ch << ch << " USER ID -> " << R[k].id;
                cout << "\n\n"
                     << ch << ch << " USER NMAE -> " << R[k].name;
                cout << "\n\n"
                     << ch << ch << " USER EMAIL -> " << R[k].email;
                cout << "\n\n"
                     << ch << ch << " USER PASSWORD -> " << R[k].password;
                found++;
                break;
            }
        }
        if (found == 0)
        {
            cout << "\n\n\n " << ch << ch << " USER DATA INCORRECT " << ch << ch;
        }
    }
}
void forgetpassword()
{
    system("cls");
    int ascii = 178;
    char ch = 178, d;
    cout << "\n ";
    for (int i = 1; i <= 20; i++)
        cout << ch;
    cout << " C++ Mini Project ";
    for (int i = 1; i <= 20; i++)
        cout << ch;
    if (a == 0)
    {
        cout << "\n\n\n " << ch << ch << " NO ANY RECORD FOUND " << ch << ch;
    }
    else
    {
        int found = 0;
        string t_email;
        cout << "\n\n"
             << ch << ch << " ENTER USER EMAIL -> ";
        cin >> t_email;
        cout << "\n\n"
             << ch << ch << " ENTER USER PASSWORD-> ";

        for (int k = 0; k < a; k++)
        {
            if (t_email == R[k].email)
            {
                cout << "\n\n"
                     << ch << ch << " USER ID -> " << R[k].id;
                cout << "\n\n"
                     << ch << ch << " USER NMAE -> " << R[k].name;
                cout << "\n\n"
                     << ch << ch << " USER EMAIL -> " << R[k].email;
                cout << "\n\n"
                     << ch << ch << " USER PASSWORD -> " << R[k].password;
                found++;
                break;
            }
        }
        if (found == 0)
        {
            cout << "\n\n\n " << ch << ch << " USER DATA INCORRECT " << ch << ch;
        }
    }
}
int main()
{
    p:
    system("cls");
    int ascii = 178, choice;
    char ch = ascii;
    cout << endl;
    for (int i = 1; i <= 20; i++)
        cout << ch;
    cout << " C++ Mini Project ";
    for (int i = 1; i <= 20; i++)
        cout << ch;
    cout << "\n\n " << ch << " 1.    REGISTER ACCOUNT ";
    cout << "\n\n " << ch << " 2.    LOGIN ACCOUNT ";
    cout << "\n\n " << ch << " 3.    FORGET EMAIL ";
    cout << "\n\n " << ch << " 4.    FORGET PASSWORD ";
    cout << "\n\n " << ch << " 5.    EXIT ";
    cout << "\n\n ";
    for (int i = 1; i <= 20; i++)
        cout << ch;
    cout << "\n\n " << ch << ch << " ENTER YOUR CHOICE ->"
         << " ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        registeraccount();
        break;
    case 2:
        loginaccount();
        break;
    case 3:
        forgetemail();
        break;
    case 4:
        forgetpassword();
        break;
    case 5:
        cout<<"\n\n\n "<<ch<<ch<<" THANKS FOR VISITING "<<ch<<ch;
        exit(0);

    default:
        cout << "\n\n " << ch << ch << "  PLEASE SELECT CORRECT OPTION  " << ch << ch;
        
    }
    getch();
    goto p;
}