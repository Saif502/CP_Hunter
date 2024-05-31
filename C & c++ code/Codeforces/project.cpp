#include<bits/stdc++.h>
#include<windows.h>

using namespace std;
int main()
{

    string pas,batch,b7="easypassword";
    cout<<"\t\t\t\t  *******COMPUTER SCIENCE  AND  ENGINEERING*******\n\t\t\t\t\t\tUNIVERSITY OF BARISAL\n";
Main:
    cout<<"\n Enter Batch Name : ";
    cin>>batch;
    if(batch=="CSE07"||batch=="cse07")
    {
x:
        cout<<" Enter Password : ";
        cin>>pas;
        if(pas==b7)
        {
L:
            system("CLS");
            cout<<"\n\n\t\t\t\t\t.....WELCOME TO CSE 07 Fammily.....\n";
            cout<<"\n\n\n1) Student Information\n2) Teacher Information\n3) Class Schedule\n4) Course Syllabus\n5) Academic Calender\n6) Student Attendence\n7) Work Details\n8) Exits";
            cout<<"\n\n Choose A Option : ";
            int op;
A:
            cin>>op;
            if(op==8)
            {
                cout<<" Thanks for using this program...\n The Programm is created by :\n Mahin, Abhi, Roni\n";
                return 0;
            }
            if(op==1)
            {
               L6: system("CLS");
                int nm1;
                cout<<" 1) Blood Group\n 2) Others Info.\n";
                cout<<" Choose a Option : ";
                cin>>nm1;
                if(nm1==2)
                {
M:                  system("CLS");
                    cout<<" Please Type : Open\n\n ";
                    string s;
                    cin>>s;
                    if(s=="Open")
                    {
                        string st="https://docs.google.com/spreadsheets/d/1q7Wme9OYEzBs7rirIpTGuqy7T2gsw9GITyu7QRfVDf4/edit#gid=0";
                        ShellExecute(NULL,"open",st.c_str(),NULL,NULL,SW_SHOWNORMAL);
                    }
                    else
                    {
                        cout<<" Wrong Type..\n";
                        goto M;
                    }

p1:
                    cout<<"\n TYPE 1 FOR GOTO HOME-PAGE : ";
                    cout<<"\n TYPE 2 FOR GOTO BACK-PAGE : ";
                    int x;
                    cin>>x;
                    if(x==1)
                        goto L;
                    else if(x==2)
                        goto L6;
                    else
                        goto p1;
                }
                else
                {
M3:                 system("CLS");
                    cout<<" Please Type : Open\n\n ";
                    string s;
                    cin>>s;
                    if(s=="Open")
                    {
                        string st="https://docs.google.com/spreadsheets/d/1_m7C5qWa3whxB06FOmYPylkFjWLWuNrfRzQidYaVut4/edit?fbclid=IwAR1PYiruPtePyfqhfNzQ3HFYtWMYNXggXhloCNucDifIcztZnqyuwbTO2RI#gid=0";
                        ShellExecute(NULL,"open",st.c_str(),NULL,NULL,SW_SHOWNORMAL);
                    }
                    else
                    {
                        cout<<" Wrong Type..\n";
                        goto M3;
                    }
p5:
                    cout<<"\n TYPE 1 FOR GOTO HOME-PAGE";
                    cout<<"\n TYPE 2 FOR GOTO BACK-PAGE\n";
                    cout<<" Enter Your Number : ";
                    int x;
                    cin>>x;
                    if(x==1)
                        goto L;
                    else if(x==2)
                        goto L6;
                    else
                        goto p5;
                }
            }
            if(op==2)
            {
                system("CLS");
                cout<<"\n\nDr. Md Manjur Ahmed\nAssistant Professor & Chairman\nCell :01851924944\nEmail :manjur_39@yahoo.com\n\n\nRahat Hossain Faisal\nAssistant Professor\nCell :+8801733977761\nEmail :rhfaisal@gmail.com; rhfaisal@bu.ac.bd\n\n\nMd Mostafijur Rahman\nAssistant Professor\nCell :+8801739097182\nEmail :mostafij.csebu@gmail.com\n\n\nMd. Erfan\nAssistant Professor\nCell :01799598455\nEmail :irfan.bucse@gmail.com\n\n\nMd. Samsuddoha\nAssistant Professor\nCell :01737349075\nEmail :sams.csebu@gmail.com\n\n\nMd Mahbub E Noor\nLecturer\nCell :+8801734094560\nEmail :mahbub0601001@gmail.com\n\n\nTania Islam\nLecturer\nCell :01059505136\nEmail :tania.bd.09@gmail.com\n\n\nSohely Jahan\nLecturer\nCell :01317419066\nEmail :sohely.cse@gmail.com\n\n\nMd. Rashid Al Asif\nLecturer\nCell :01734528367\nEmail :rashid.al.asif@gmail.com\n\n\nFarjana Yesmin\nAdministrative Officer\nEmail: yesminfarjana61@gmail.com\n";
l:
                cout<<"\n TYPE 1 FOR GOTO HOMEPAGE : ";
                int x;
                cin>>x;
                if(x==1)
                    goto L;
                else
                    goto l;
            }
            if(op==3)
            {
                system("CLS");
                cout<<"\n\t\t\t\t\t\t....CLASS SCHEDULE....\n\nDays\t: Monday - Wednesday\nTime\t: (2:30-3:30)\nCourse\t: Data Structure\nTutor\t: Md. Erfan Sir\n\n";
                cout<<"Days\t: Wednesday - Thursday\nTime\t: (11:30-10:00)\nCourse\t: Descrete Mathematics\nTutor\t: Md. Rashid Al Asif Sir\n\n";
                cout<<"Days\t: Thursday\nTime\t: (10:00-11:30)\nCourse\t: Statistics\nTutor\t: Momenul Haque Mondol Sir\n\n";
                cout<<"Days\t: Friday- Saturday\nTime\t: (Not Fixed Yet)\nCourse\t: Mechanical Engineering\nTutor\t: Sultan Mahmud Sir\n\n";
                cout<<"Days\t: Not Fixed Yet\nTime\t: (Not Fixed Yet)\nCourse\t: EEE\nTutor\t: Dr. Md. Khorshed Alam Sir\n\n";

p:
                cout<<"\n TYPE 1 FOR GOTO HOMEPAGE : ";
                int x;
                cin>>x;
                if(x==1)
                    goto L;
                else
                    goto p;
            }
            if(op==4)
            {
                system("CLS");
M4:
                cout<<" Please Type : Open\n\n ";
                string s;
                cin>>s;
                if(s=="Open")
                {
                    string st="https://docs.google.com/document/d/1MLiityp97uzifttQh8LSZovKzfS6JqmdKoXVXRq5LdQ/edit";
                    ShellExecute(NULL,"open",st.c_str(),NULL,NULL,SW_SHOWNORMAL);
                }
                else
                {
                    cout<<" Wrong Type..\n";
                    goto M4;
                }
p3:
                cout<<"\n TYPE 1 FOR GOTO HOMEPAGE : ";
                int x;
                cin>>x;
                if(x==1)
                    goto L;
                else
                    goto p3;
            }
            if(op==5)
            {
                cout<<" Opps...Nothing Found..\n\n";
                cout<<"\n Choose Another Option : ";
                goto A;
            }
            if(op==6)
            {
                system("CLS");
M1:
                cout<<" Please Type : Open\n\n ";
                string s;
                cin>>s;
                if(s=="Open")
                {
                    string st="https://docs.google.com/spreadsheets/d/1qJjmKh02TeMuepCo4rO3rwAHc9RTx_Tu4q7pWi3wXdk/edit#gid=0";
                    ShellExecute(NULL,"open",st.c_str(),NULL,NULL,SW_SHOWNORMAL);
                }
                else
                {
                    cout<<" Wrong Type..\n";
                    goto M1;
                }
p2:
                cout<<"\n TYPE 1 FOR GOTO HOMEPAGE : ";
                int x;
                cin>>x;
                if(x==1)
                    goto L;
                else
                    goto p2;
            }
            if(op==7)
            {
                cout<<" Orientation plan pending for CSE08 Batch\n\n";
                cout<<"\n Choose Another Option : ";
                goto A;
            }
            if(op<1||op>8)
            {
                cout<<"\n Please Choose a valid option : ";
                goto A;
            }

        }
        if(pas!=b7)
        {
            cout<<" Wrong Password...";
            printf("%c",2);
            cout<<" Please Enter Again\n";
            goto x;
        }

    }
    else
    {
        cout<<" Pleace Enter A Valid Batch Name \n" ;
        goto Main;
    }



}
