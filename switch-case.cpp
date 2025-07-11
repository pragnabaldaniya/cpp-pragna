#include <iostream>
using namespace std;

main() 
{
    int languageChoice, rechargeChoice;

    // Language menu
    cout << "Press 1 for English" << endl;
    cout << "Press 2 for Hindi" << endl;
    cout << "Press 3 for Gujarati" << endl;
    cout << "Enter your choice: ";
    cin >> languageChoice;

    switch (languageChoice) {
        case 1:
            // English
            cout << "Press 1 for Internet Recharge" << endl;
            cout << "Press 2 for Top-up Recharge" << endl;
            cout << "Press 3 for Special Recharge" << endl;
            cout << "Enter your choice: ";
            cin >> rechargeChoice;

            switch (rechargeChoice) {
                case 1:
                    cout << "You have successfully done an Internet Recharge.";
                    break;
                case 2:
                    cout << "You have successfully done a Top-up Recharge.";
                    break;
                case 3:
                    cout << "You have successfully done a Special Recharge.";
                    break;
                default:
                    cout << "Invalid recharge option!";
            }
            break;

        case 2:
            // Hindi 
            cout << "Internet recharge ke liye 1 dabaiye" << endl;
            cout << "Top-up recharge ke liye 2 dabaiye" << endl;
            cout << "Special recharge ke liye 3 dabaiye" << endl;
            cout << "Apna chayan darj kijiye: ";
            cin >> rechargeChoice;

            switch (rechargeChoice) {
                case 1:
                    cout << "Aapka Internet recharge safaltapurvak ho gaya hai.";
                    break;
                case 2:
                    cout << "Aapka Top-up recharge safaltapurvak ho gaya hai.";
                    break;
                case 3:
                    cout << "Aapka Special recharge safaltapurvak ho gaya hai.";
                    break;
                default:
                    cout << "Galat vikalp!";
            }
            break;

        case 3:
            // Gujarati 
            cout << "Internet Recharge mate 1 dabavo" << endl;
            cout << "Top-up Recharge mate 2 dabavo" << endl;
            cout << "Special Recharge mate 3 dabavo" << endl;
            cout << "Tamaru pasandgi no number nakho: ";
            cin >> rechargeChoice;

            switch (rechargeChoice) {
                case 1:
                    cout << "Tamaru Internet Recharge safaltapurvak thayi gayu chhe.";
                    break;
                case 2:
                    cout << "Tamaru Top-up Recharge safaltapurvak thayi gayu chhe.";
                    break;
                case 3:
                    cout << "Tamaru Special Recharge safaltapurvak thayi gayu chhe.";
                    break;
                default:
                    cout << "Amany vikalp!";
            }
            break;

        default:
            cout << "Invalid language choice!";
    }

}
