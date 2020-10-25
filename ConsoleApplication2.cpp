#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    bool bodyAches = false,
        chills = false,
        coughs = false,
        fatigue = false,
        fever = false,
        headAche = false,
        itchyEyes = false,
        lossSensivity = false,
        congestions = false,
        diarrhea = false,
        runnyNose = false,
        sneezing = false,
        soreThroat = false,
        shortnessBreath = false;
    bool yes = true;
    string input = " ";
    cout << "What is your name: ";
    cin >> input;
    cout << "Hello " << input << "!";
    while (yes)
    {
        cout << "\nDo you have any body aches? 'Y'/'N' : ";
        cin >> input;
        if (input == "Y" || input == "y")
        {
            bodyAches = true;
        }
        cout << "Do you have any chills? 'Y'/'N : ";
        cin >> input;
        if (input == "Y" || input == "y")
        {
            chills = true;
        }
        cout << "Do you have any dry coughs? 'Y'/'N : "; //bet
        cin >> input;
        if (input == "Y" || input == "y")
        {
            coughs = true;
        }
        cout << "Do you have any body fatigue? 'Y'/'N : ";
        cin >> input;
        if (input == "Y" || input == "y")
        {
            fatigue = true;
        }
        cout << "Do you have a fever? 'Y'/'N : ";
        cin >> input;
        if (input == "Y" || input == "y")
        {
            fever = true;
        }
        cout << "Do you have any headache? 'Y'/'N : ";
        cin >> input;
        if (input == "Y" || input == "y")
        {
            headAche = true;
        }
        cout << "Do you have itchy eyes? 'Y'/'N : ";
        cin >> input;
        if (input == "Y" || input == "y")
        {
            itchyEyes = true;
        }

        cout << "Do you have a lost of taste or smell? 'Y'/'N : ";
        cin >> input;
        if (input == "Y" || input == "y")
        {
            lossSensivity = true;
        }

        cout << "Do you have a nasal congestion? 'Y'/'N : ";
        cin >> input;
        if (input == "Y" || input == "y")
        {
            congestions = true;
        }

        cout << "Do you have nausea/vomiting/diarrhea? 'Y'/'N : ";
        cin >> input;
        if (input == "Y" || input == "y")
        {
            diarrhea = true;
        }

        cout << "Do you have a runny nose? 'Y'/'N : ";
        cin >> input;
        if (input == "Y" || input == "y")
        {
            runnyNose = true;
        }

        cout << "Are you sneezing? 'Y'/'N : ";
        cin >> input;
        if (input == "Y" || input == "y")
        {
            sneezing = true;
        }

        cout << "Do you have a sore throat? 'Y'/'N : ";
        cin >> input;
        if (input == "Y" || input == "y")
        {
            soreThroat = true;
        }

        cout << "Do you have a shortness of breath? 'Y'/'N : ";
        cin >> input;
        if (input == "Y" || input == "y")
        {
            shortnessBreath = true;
        }

        double countAllergies = 0, countCold = 0, countFlu = 0, countCovid = 0;
        if (bodyAches)
        {
            countCold++; countCovid += .5;
        }
        if (chills)
        {
            countCold += .25; countFlu++; countCovid += .5;
        }
        if (coughs)
        {
            countAllergies++; countCold++; countFlu++; countCovid++;
        }
        if (fatigue)
        {
            countAllergies += .5; countCold++; countFlu++; countCovid++;
        }
        if (fever)
        {
            countCold += .5; countFlu++; countCovid++;
        }
        if (headAche)
        {
            countAllergies++; countCold += .25; countFlu++; countCovid += .5;
        }
        if (itchyEyes)
        {
            countAllergies++;
        }
        if (lossSensivity)
        {
            countAllergies += .5; countCold += .25; countFlu += .5; countCovid++;
        }
        if (congestions)
        {
            countAllergies++; countCold++; countFlu++; countCovid += .25;
        }
        if (diarrhea)
        {
            countCold += .5; countFlu += .5; countCovid += .5;
        }
        if (runnyNose)
        {
            countAllergies++; countCold++; countFlu++; countCovid += .25;
        }
        if (sneezing)
        {
            countAllergies++; countCold++; countFlu++; countCovid += .5;
        }
        if (soreThroat)
        {
            countAllergies += .5; countCold++; countFlu++; countCovid += .5;
        }
        if (shortnessBreath)
        {
            countAllergies += .5; countCold += .25; countFlu++; countCovid++;
        }
        if (countAllergies == 0 && countCold == 0 && countFlu == 0 && countCovid == 0)
            cout << "You are not ill.\n\n";
        else if (countAllergies > countCold && countAllergies > countFlu && countAllergies > countCovid)
            cout << "You most likely have Allergies.\n\n";
        else if (countAllergies < countCold && countCold > countFlu && countCold > countCovid)
            cout << "You most likely have a cold.\n\n";
        else if (countAllergies < countFlu && countCold < countFlu && countFlu > countCovid)
            cout << "You most likely have a flu.\n\n";
        else if (countCovid > countCold && countCovid > countFlu && countAllergies < countCovid)
            cout << "You most likely have covid.\n\n";
        else
            cout << "You may have one or more illness.\n\n";
        cout << "Do you want to take survey again? 'Y'/'N' : ";
        cin >> input;
        if (input == "Y" || input == "y")
            yes = true;
        else
            yes = false;
    }
    cout << "Have a good day!\n";
    return 0;
}
