#include <iostream>
#include <windows.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
using namespace std;


int main(){
    bool reset1 = 1, reset2 = 1, reset3 = 1, reset4 = 1;
    int akce, akce1, pinK, pinP, pinV,/* pin?tru, pin?,*/ credK = 500, credP=300, credV=5000, pinKtru = 696969, pinPtru = 42069, pinVtru = 69420, withdraw, deposit, who;//pinK = 696969, pinP = 42069, PinV = 69420
    while (reset1 == 1){
        reset1 = 0;
        cout<<" Hello User! Please choose your action.\n 1 - Register \n 2 - Login as Karel \n 3 - Login as Pepa \n 4 - Login as Vendo necum sem!\n ";
        string uNameV = "Vendo necum sem!", uNameK = "Karel", uNameP = "Pepa";
        cin>>akce;
        system ("cls");
        switch (akce) {
            default:
                cout<<" Error wrong input! Try again in 3 seconds.";
                Sleep(3000);
                system ("cls");
                reset1 = 1;
            case 1:
                cout<<" Yet to be programmed\n";
                reset1 = 1;
                //dodìlat register
            break;
            case 2:
                reset2 = 1;
                while(reset2 == 1){
                    reset2 = 0;
                    system ("cls");
                    cout<<" To login as "<<uNameK<<", please type in your pin: \n ";
                    cin>>pinK;
                    if (pinK == pinKtru){
                        cout<<" Login successful!";
                        Sleep(1500);
                        reset2 = 0;
                        reset3 = 1;
                        while(reset3==1){
                            reset3=0;
                            system ("cls");
                            cout<<" Hello user " << uNameK <<"!\n Your account balance is: "<< credK <<"$\n What is your next action? \n 1 - Withdraw money \n 2 - Deposit money \n 3 - Send money \n 4 - Log out and return to main menu \n 5 - Close Program\n ";
                            cin>>akce1;
                            switch(akce1){
                                case 1:
                                    system("cls");
                                    cout<<" Your account balance is: "<< credK <<"$\n How much money do you want to withdraw?\n ";
                                    cin>>withdraw;
                                    if(withdraw <= credK){
                                        cout<<"\n Withdrawal succesful!";
                                        credK = credK - withdraw;
                                        reset3=1;
                                    } else{
                                        cout<<"\n Withdrawal unsuccesful. \n There is not enough money on your account.";
                                        reset3=1;
                                    }
                                break;
                                case 2:
                                    system("cls");
                                    cout<<" Your account balance is: "<< credK <<"$\n How much money do you want to deposit?\n ";
                                    cin>>deposit;
                                    cout<<"\n ";
                                    credK = credK + deposit;
                                    reset3 = 1;
                                break;
                                case 3:
                                    system("cls");
                                    cout<<" Your account balance is: "<< credK <<"\n How much money do you want to send to somebody?\n ";
                                    cin>>withdraw;
                                    cout<<"\n Who do you want to send the money to?\n 1 - Pepa \n 2 - Vendo necum sem\n ";

                                    while(reset4 == 1){
                                        reset4 = 0;
                                        cin>>who;

                                        if(withdraw <= credK){
                                            credK = credK - withdraw;
                                            switch (who){
                                                case 1:
                                                    cout<<"\n Action succesful!";
                                                    credP = credP + withdraw;
                                                    reset3 = 1;
                                                    Sleep(1000);
                                                break;
                                                case 2:
                                                    cout<<"\n Action succesful!";
                                                    credV = credV + withdraw;
                                                    reset3 = 1;
                                                    Sleep(1000);
                                                break;
                                                default:
                                                    cout<<"Wrong input, please try again.\n ";
                                                    reset4 = 1;
                                                break;
                                            }
                                            reset1=1;
                                        } else{
                                            cout<<"\n Action unsuccesful. \n There is not enough money on your account.";
                                            reset3=1;
                                        }
                                    }
                                    reset3=1;
                                break;
                                case 4:
                                    system("cls");
                                    reset1 = 1;
                                    reset2 = 0;
                                    reset3 = 0;
                                    reset4 = 1;
                                break;
                                case 5:
                                    return 0;
                                break;
                                default:
                                    cout<<"Wrong input, please try again.";
                                    reset3=1;
                            }
                        }
                    } else {
                        cout<<" Wrong pin!";
                        Sleep(1000);
                        reset2 = 1;
                    }
                }
            break;
            //------------------------------------------------------------------------//
            case 3:
                reset2 = 1;
                while(reset2 == 1){
                    reset2 = 0;
                    system ("cls");
                    cout<<" To login as "<<uNameP<<", please type in your pin: \n ";
                    cin>>pinP;
                    if (pinP == pinPtru){
                        cout<<" Login successful!";
                        Sleep(1500);
                        reset2 = 0;
                        reset3 = 1;
                        while(reset3==1){
                            reset3=0;
                            system ("cls");
                            cout<<" Hello user " << uNameP <<"!\n Your account balance is: "<< credP <<"$\n What is your next action? \n 1 - Withdraw money \n 2 - Deposit money \n 3 - Send money \n 4 - Log out and return to main menu \n 5 - Close Program\n ";
                            cin>>akce1;
                            switch(akce1){
                                case 1:
                                    system("cls");
                                    cout<<" Your account balance is: "<< credP <<"$\n How much money do you want to withdraw?\n ";
                                    cin>>withdraw;
                                    if(withdraw <= credP){
                                        cout<<"\n Withdrawal succesful!";
                                        credP = credP - withdraw;
                                        reset3=1;
                                    } else{
                                        cout<<"\n Withdrawal unsuccesful. \n There is not enough money on your account.";
                                        reset3=1;
                                    }
                                break;
                                case 2:
                                    system("cls");
                                    cout<<" Your account balance is: "<< credP <<"$\n How much money do you want to deposit?\n ";
                                    cin>>deposit;
                                    cout<<"\n ";
                                    credP = credP + deposit;
                                    reset3 = 1;
                                break;
                                case 3:
                                    system("cls");
                                    cout<<" Your account balance is: "<< credP <<"\n How much money do you want to send to somebody?\n ";
                                    cin>>withdraw;
                                    cout<<"\n Who do you want to send the money to?\n 1 - Karel \n 2 - Vendo necum sem\n ";

                                    while(reset4 == 1){
                                        reset4 = 0;
                                        cin>>who;

                                        if(withdraw <= credP){
                                            credP = credP - withdraw;
                                            switch (who){
                                                case 1:
                                                    cout<<"\n Action succesful!";
                                                    credK = credK + withdraw;
                                                    reset3 = 1;
                                                    Sleep(1000);
                                                break;
                                                case 2:
                                                    cout<<"\n Action succesful!";
                                                    credV = credV + withdraw;
                                                    reset3 = 1;
                                                    Sleep(1000);
                                                break;
                                                default:
                                                    cout<<"Wrong input, please try again.\n ";
                                                    reset4 = 1;
                                                break;
                                            }
                                            reset1=1;
                                        } else{
                                            cout<<"\n Action unsuccesful. \n There is not enough money on your account.";
                                            reset3=1;
                                        }
                                    }
                                    reset3=1;
                                break;
                                case 4:
                                    system("cls");
                                    reset1 = 1;
                                    reset2 = 0;
                                    reset3 = 0;
                                    reset4 = 1;
                                break;
                                case 5:
                                    return 0;
                                break;
                                default:
                                    cout<<"Wrong input, please try again.";
                                    reset3=1;
                            }
                        }
                    } else {
                        cout<<" Wrong pin!";
                        Sleep(1000);
                        reset2 = 1;
                    }
                }
            break;
            //-----------------------------------------------------------------//
            case 4:
                reset2 = 1;
                while(reset2 == 1){
                    reset2 = 0;
                    system ("cls");
                    cout<<" To login as "<< uNameV<<", please type in your pin: \n ";
                    cin>>pinV;
                    if (pinV == pinVtru){
                        cout<<" Login successful!";
                        Sleep(1500);
                        reset2 = 0;
                        reset3 = 1;
                        while(reset3==1){
                            reset3=0;
                            system ("cls");
                            cout<<" Hello user " << uNameV <<"!\n Your account balance is: "<< credV <<"$\n What is your next action? \n 1 - Withdraw money \n 2 - Deposit money \n 3 - Send money \n 4 - Log out and return to main menu \n 5 - Close Program\n ";
                            cin>>akce1;
                            switch(akce1){
                                case 1:
                                    system("cls");
                                    cout<<" Your account balance is: "<< credV <<"$\n How much money do you want to withdraw?\n ";
                                    cin>>withdraw;
                                    if(withdraw <= credV){
                                        cout<<"\n Withdrawal succesful!";
                                        credV = credV - withdraw;
                                        reset3=1;
                                    } else{
                                        cout<<"\n Withdrawal unsuccesful. \n There is not enough money on your account.";
                                        reset3=1;
                                    }
                                break;
                                case 2:
                                    system("cls");
                                    cout<<" Your account balance is: "<< credV <<"$\n How much money do you want to deposit?\n ";
                                    cin>>deposit;
                                    cout<<"\n ";
                                    credV = credV + deposit;
                                    reset3 = 1;
                                break;
                                case 3:
                                    system("cls");
                                    cout<<" Your account balance is: "<< credV <<"\n How much money do you want to send to somebody?\n ";
                                    cin>>withdraw;
                                    cout<<"\n Who do you want to send the money to?\n 1 - Pepa \n 2 - Vendo necum sem\n ";

                                    while(reset4 == 1){
                                        reset4 = 0;
                                        cin>>who;

                                        if(withdraw <= credV){
                                            credV = credV - withdraw;
                                            switch (who){
                                                case 1:
                                                    cout<<"\n Action succesful!";
                                                    credP = credP + withdraw;
                                                    reset3 = 1;
                                                    Sleep(1000);
                                                break;
                                                case 2:
                                                    cout<<"\n Action succesful!";
                                                    credK = credK + withdraw;
                                                    reset3 = 1;
                                                    Sleep(1000);
                                                break;
                                                default:
                                                    cout<<"Wrong input, please try again.\n ";
                                                    reset4 = 1;
                                                break;
                                            }
                                            reset1=1;
                                        } else{
                                            cout<<"\n Action unsuccesful. \n There is not enough money on your account.";
                                            reset3=1;
                                        }
                                    }
                                    reset3=1;
                                break;
                                case 4:
                                    system("cls");
                                    reset1 = 1;
                                    reset2 = 0;
                                    reset3 = 0;
                                    reset4 = 1;
                                break;
                                case 5:
                                    return 0;
                                break;
                                default:
                                    cout<<"Wrong input, please try again.";
                                    reset3=1;
                            }
                        }
                    } else {
                        cout<<" Wrong pin!";
                        Sleep(1000);
                        reset2 = 1;
                    }
                }
            break;
        }
    }
    return 0;
}
