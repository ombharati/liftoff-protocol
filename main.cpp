#include <iostream>
#include <string>
#include <thread>
#include <chrono>

int main()
{
    std::string missionName;
    char commanderInitial;

    int crewCount;
    int authorizationCode;

    double fuelLevel;
    double oxygenLevel;
    double engineTemperature;

    bool navigationOnline;
    bool communicationOnline;

    std::cout << "============================================\n";
    std::cout << "       ASTRAL DEEP-SPACE COMMAND SYSTEM      \n";
    std::cout << "============================================\n\n";

    std::cout << "MISSION REGISTRATION\n";
    std::cout << "--------------------\n";

    std::cout << "Mission codename: ";
    std::cin >> missionName;

    std::cout << "Commander initial: ";
    std::cin >> commanderInitial;

    std::cout << "Crew count: ";
    std::cin >> crewCount;

    std::cout << "Fuel level (%): ";
    std::cin >> fuelLevel;

    std::cout << "Oxygen level (%): ";
    std::cin >> oxygenLevel;

    std::cout << "Engine temperature (C): ";
    std::cin >> engineTemperature;

    std::cout << "Navigation online? (1 = YES, 0 = NO): ";
    std::cin >> navigationOnline;

    std::cout << "Communication online? (1 = YES, 0 = NO): ";
    std::cin >> communicationOnline;

    std::cout << "Launch authorization code: ";
    std::cin >> authorizationCode;


    std::cout << "\n============================================\n";
    std::cout << "       RUNNING PRE-LAUNCH DIAGNOSTICS       \n";
    std::cout << "============================================\n\n";

    std::this_thread::sleep_for(std::chrono::seconds(1));


    bool crewOkay;
    bool fuelOkay;
    bool oxygenOkay;
    bool engineOkay;
    bool navigationOkay;
    bool communicationOkay;
    bool authorizationOkay;


    // CREW CHECK
    if (crewCount >= 2 && crewCount <= 6)
    {
        crewOkay = true;
        std::cout << "[1] Crew verification............ PASSED\n";
    }
    else
    {
        crewOkay = false;
        std::cout << "[1] Crew verification............ FAILED\n";
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(700));


    // FUEL CHECK
    if (fuelLevel >= 85)
    {
        fuelOkay = true;
        std::cout << "[2] Fuel reserves................ PASSED\n";
    }
    else
    {
        fuelOkay = false;
        std::cout << "[2] Fuel reserves................ FAILED\n";
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(700));


    // OXYGEN CHECK
    if (oxygenLevel >= 90)
    {
        oxygenOkay = true;
        std::cout << "[3] Oxygen reserves.............. PASSED\n";
    }
    else
    {
        oxygenOkay = false;
        std::cout << "[3] Oxygen reserves.............. FAILED\n";
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(700));


    // ENGINE CHECK
    if (engineTemperature >= 40 && engineTemperature <= 90)
    {
        engineOkay = true;
        std::cout << "[4] Engine temperature........... PASSED\n";
    }
    else
    {
        engineOkay = false;
        std::cout << "[4] Engine temperature........... FAILED\n";
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(700));


    // NAVIGATION CHECK
    if (navigationOnline)
    {
        navigationOkay = true;
        std::cout << "[5] Navigation system............ PASSED\n";
    }
    else
    {
        navigationOkay = false;
        std::cout << "[5] Navigation system............ FAILED\n";
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(700));


    // COMMUNICATION CHECK
    if (communicationOnline)
    {
        communicationOkay = true;
        std::cout << "[6] Communication system......... PASSED\n";
    }
    else
    {
        communicationOkay = false;
        std::cout << "[6] Communication system......... FAILED\n";
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(700));


    // AUTHORIZATION CHECK
    if (authorizationCode == 7392)
    {
        authorizationOkay = true;
        std::cout << "[7] Authorization code........... PASSED\n";
    }
    else
    {
        authorizationOkay = false;
        std::cout << "[7] Authorization code........... FAILED\n";
    }


    std::cout << "\nAnalyzing security status";

    for (int i = 0; i < 3; i++)
    {
        std::cout << ".";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    std::cout << "\n\n";


    // SECURITY THREAT LEVEL
    int threatLevel = 0;

    if (!navigationOnline)
    {
        threatLevel++;
    }

    if (!communicationOnline)
    {
        threatLevel++;
    }

    if (authorizationCode != 7392)
    {
        threatLevel++;
    }


    std::cout << "SECURITY THREAT LEVEL: " << threatLevel << "\n";

    if (threatLevel == 0)
    {
        std::cout << "STATUS: SECURE\n";
    }
    else if (threatLevel == 1)
    {
        std::cout << "STATUS: CAUTION\n";
    }
    else if (threatLevel == 2)
    {
        std::cout << "STATUS: HIGH RISK\n";
    }
    else
    {
        std::cout << "STATUS: CRITICAL - POSSIBLE SYSTEM COMPROMISE\n";
    }


    std::cout << "\n============================================\n";


    // FINAL LAUNCH DECISION
    if (crewOkay &&
        fuelOkay &&
        oxygenOkay &&
        engineOkay &&
        navigationOkay &&
        communicationOkay &&
        authorizationOkay)
    {
        std::cout << "       MISSION CLEARED FOR LAUNCH\n";
        std::cout << "============================================\n\n";

        std::this_thread::sleep_for(std::chrono::seconds(1));

        std::cout << "Establishing launch control link";

        for (int i = 0; i < 3; i++)
        {
            std::cout << ".";
            std::cout.flush();

            std::this_thread::sleep_for(
                std::chrono::milliseconds(700)
            );
        }

        std::cout << "\nCONNECTION ESTABLISHED\n\n";

        std::this_thread::sleep_for(std::chrono::seconds(1));

        std::cout << "Propulsion system.............. READY\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(800));

        std::cout << "Navigation computer............ READY\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(800));

        std::cout << "Communication array............ READY\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(800));

        std::cout << "Launch clamps.................. READY\n";
        std::this_thread::sleep_for(std::chrono::seconds(1));


        std::cout << "\n============================================\n";
        std::cout << "            FINAL COUNTDOWN\n";
        std::cout << "============================================\n\n";


        for (int i = 10; i >= 1; i--)
        {
            std::cout << "                 T-" << i << "\n";

            // Terminal beep - may not work on every computer
            std::cout << "\a";

            std::this_thread::sleep_for(
                std::chrono::seconds(1)
            );
        }


        std::cout << "\n";
        std::cout << "MAIN ENGINES................... IGNITION\n";

        std::this_thread::sleep_for(
            std::chrono::seconds(2)
        );

        std::cout << "LAUNCH CLAMPS.................. RELEASED\n";

        std::this_thread::sleep_for(
            std::chrono::seconds(1)
        );


        std::cout << "\n";
        std::cout << "********************************************\n";
        std::cout << "                >>> LIFTOFF <<<\n";
        std::cout << "********************************************\n\n";

        std::cout << missionName
                  << " HAS CLEARED THE LAUNCH PLATFORM.\n";

        std::cout << "MISSION CONTROL: FLIGHT CONFIRMED.\n";
    }

    else
    {
        std::cout << "             LAUNCH ABORTED\n";
        std::cout << "============================================\n\n";

        std::cout << "ABORT REPORT\n";
        std::cout << "------------\n";

        if (!crewOkay)
        {
            std::cout << "- Invalid crew configuration\n";
        }

        if (!fuelOkay)
        {
            std::cout << "- Fuel reserves below safe level\n";
        }

        if (!oxygenOkay)
        {
            std::cout << "- Oxygen reserves below safe level\n";
        }

        if (!engineOkay)
        {
            std::cout << "- Engine temperature outside safe range\n";
        }

        if (!navigationOkay)
        {
            std::cout << "- Navigation system offline\n";
        }

        if (!communicationOkay)
        {
            std::cout << "- Communication system offline\n";
        }

        if (!authorizationOkay)
        {
            std::cout << "- Invalid launch authorization code\n";
        }

        std::cout << "\nLAUNCH CONTROL HAS BEEN LOCKED.\n";
    }


    return 0;
}
