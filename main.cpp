#include <iostream>
#include <stdlib.h>

using namespace std;
void sign_in();
void sign_up();
void stuffs ();
string choiceYes="yes", choiceNo="no", choice;
    string choiceyes2="yes", choiceno="no", choice2;
    string username, name, surname;
    int age;
    int security_code= 143, my_code;
int main()
{

    cout << "\t\t\tWelcome Visitor" << endl;
    cout << "\t\t\t E-Portal" << endl;
    cout << "\t\tAre you already a member?" << endl;
    cout << "\t\tYes or No?\n" << endl;

    cout << "\t\tEnter your choice:\t";
    cin >> choice;
    if (choice==choiceYes)
    {
        sign_in();
        string stuff;
        int again;
        cout << "\t\t Do you want to order stuffs"<<endl;
        again;
        cin>> stuff;
        if (stuff=="yes")
        {
            stuffs();
        }
        else if (stuff=="no")
        {
            cout<< "Thank you for using E-Portal"<< endl;
            return 0;
        }

    }
    else if (choice==choiceNo)
    {
        sign_up();
    }



    return 0;
}




















void sign_in()
{
    int trials= 0;
    int  passcode= 143;
    while (trials!=3)
    {
        cout << "Please Enter Passcode"<<endl;
        cin >> passcode;
        if (passcode!=143)
        {
            trials++;
        }
        else if (passcode == 143)
        {
                cout << "\t\t Welcome User"<<endl;
                cout << "\n\t\t Name : Art Lynuel" << endl;
                cout << "\t\t Surname : Guillartes" << endl;
                cout << "\t\t Age  :19" << endl;
                cout << "\t\t Username :artpaper" << endl;
                break;
        }
        {


        if (trials==1)
        {
            cout<< "you have Entered wrong passcode please try again you have only 2 tries left"<<endl;
        }
        else if (trials ==2)
        {
            cout << "you have entered wrong passcode please try again you have only 1 tries left"<<endl;
        }
        else if (trials == 3)
        {
            cout << "you have Entered wrong passcode please wait for 5 minutes to sign in again"<<endl;
            exit(0);
        }
        }
    }

}

















void sign_up ()
{
    cout << "\tDo you Want to sign-up" << endl;
        cout << "\tYes or No"<< endl;
        cout << "\tEnter Your Choice :";
        cin >> choice2;
        if (choice2==choiceyes2)
        {
            cout << "Please enter username :\t";
            cin >> username;
            cout << "Please enter name :\t";
            cin >> name;
            cout << "Please enter age :\t";
            cin >>age;
            if (age<18)
            {
                cout << "Pending for registration/still minor";
            }
            else
            {
                cout << "Congratulations account created"<<endl;
                cout << "\nUsername :"<<username<<endl;
                cout << "Name :" <<name<<endl;
                cout << "Age :"<<age<<endl;

            }
        }
    }


    void stuffs ()
{
        int items, points=0, wearable= 10, tablets= 20, phones= 30, camera= 40;
        while (points!=1000)
    {
cout << "Please select an item"<<endl;
cout<< "[1] Wearables\t\t [2] Tablets\t\t [3] Phones\t\t [4] Camera"<<endl;
cin >> items;

switch (items)
{
    case 1:
    {
        int quantity, total;
        string choiceyis="yes",choicenu="no", chose;
        cout << "How many do you want to order?"<<endl;
        cin >>quantity;
        total= quantity*wearable;
        points+=total;
        cout << "you have earned\t"<<points<<endl;
        if (points>=100&& points<= 500)
{
    cout<< "congratulations you have earned a one time reward of 100 pesos worth of load if you have already earned your 100 pesos worth of load please ignore this message"<<endl;
}
else if (points>=500)
{
    cout << "congratulations you have earned a one time external memory for any of the purchased item if you have already earned your external memory please ignore this message"<<endl;
}
else if (points>= 1000)
{
    cout << "congratulations you have earned a one time 25% discount for the total purchased item if you have already earned your 25% discount please ignore this message"<<endl;
}


        cout << "Do you want to buy more stuffs"<<endl;
        {
        cin>> chose;
        if (chose==choiceyis)
        {
            cout<< "please continue"<<endl;
        }
        else if (chose==choicenu)
        {
            cout<< "Thak you for shopping with us"<<endl;
            exit (0);
        }
        }
        break;





    }
    case 2:
        {
            int quantity, total;
            string choiceyis="yes",choicenu="no", chose;
        cout << "How many do you want to order?"<<endl;
        cin >>quantity;
        total= quantity*tablets;
        points+=total;
        cout << "you have earned\t"<<points<<endl;
        if (points>=100&& points<= 500)
{
    cout<< "congratulations you have earned a one time reward of 100 pesos worth of load if you have already earned your 100 pesos worth of load please ignore this message"<<endl;
}
else if (points>=500 && points<1000)
{
    cout << "congratulations you have earned a one time external memory for any of the purchased item if you have already earned your external memory please ignore this message"<<endl;
}
else if (points>= 1000)
{
    cout << "congratulations you have earned a one time 25% discount for the total purchased item if you have already earned your 25% discount please ignore this message"<<endl;
}


        cout << "Do you want to buy more stuffs"<<endl;
        {
        cin>> chose;
        if (chose==choiceyis)
        {
            cout<< "please continue"<<endl;
        }
        else if (chose==choicenu)
        {
            cout<< "Thak you for shopping with us"<<endl;
            exit (0);
        }
        }
        break;


        }

case 3:
    {
int quantity, total;
string choiceyis="yes",choicenu="no", chose;

            cout << "How many do you want to order?"<<endl;
        cin >>quantity;
        total= quantity*phones;
        points+=total;
        cout << "you have earned\t"<<points<<endl;
                        if (points>=100&& points<= 500)
{
    cout<< "congratulations you have earned a one time reward of 100 pesos worth of load if you have already earned your 100 pesos worth of load please ignore this message"<<endl;
}
else if (points>=500)
{
    cout << "congratulations you have earned a one time external memory for any of the purchased item if you have already earned your external memory please ignore this message"<<endl;
}
else if (points>= 1000)
{
    cout << "congratulations you have earned a one time 25% discount for the total purchased item if you have already earned your 25% discount please ignore this message"<<endl;
}

        cout << "Do you want to buy more stuffs"<<endl;
        {
        cin>> chose;
        if (chose==choiceyis)
        {
            cout<< "please continue"<<endl;
        }
        else if (chose==choicenu)
        {
            cout<< "Thak you for shopping with us"<<endl;
            exit (0);
        }
        }
        break;


    }

    case 4:
        {
            int quantity, total;
            string choiceyis="yes",choicenu="no", chose;
            cout << "How many do you want to order?"<<endl;
        cin >>quantity;
        total= quantity*camera;
        points+=total;
        cout << "you have earned\t"<<points<<endl;
                        if (points>=100&& points<= 500)
{
    cout<< "congratulations you have earned a one time reward of 100 pesos worth of load if you have already earned your 100 pesos worth of load please ignore this message"<<endl;
}
else if (points>=500)
{
    cout << "congratulations you have earned a one time external memory for any of the purchased item if you have already earned your external memory please ignore this message"<<endl;
}
else if (points>= 1000)
{
    cout << "congratulations you have earned a one time 25% discount for the total purchased item if you have already earned your 25% discount please ignore this message"<<endl;
}

        cout << "Do you want to buy more stuffs"<<endl;
        {
        cin>> chose;
        if (chose==choiceyis)
        {
            cout<< "please continue"<<endl;
        }
        else if (chose==choicenu)
        {
            cout<< "Thak you for shopping with us"<<endl;
            exit (0);
        }
        }


        }
        break;
}
}



    }
