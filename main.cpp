#include <iostream>

using namespace std;

int main()

{
    cout << "\n\t\t   -----------------------";

    cout << "\n\t\t   ARITHMETIC CALCULATIONS"<< endl;

    cout << "-------------------------------------------------------------";

    cout << "\n\t\t   Select Yours Operation"<< endl;

    cout << "-------------------------------------------------------------";

    cout << "\n\t  Press & Enter (A) - Addition of Numbers" << endl;

    cout << "\n\t Press & Enter (S) - Subtraction of Numbers" << endl;

    cout << "\n\tPress & Enter (M) - Multiplication of Numbers" << endl;

    cout << "\n\t  Press & Enter (D) - Division of Numbers" << endl;

    cout << "-------------------------------------------------------------";

        // Take input from the user

        char Arithmetic;

        cout << "\nFrom Above Statements - Provide a Number to Perform Operation "

                "\n-------------------------------------------------------------"

                "\n\n\t\tPress - ( A - S - M - D) :  ";

        cin >> Arithmetic;

        // Transform to uppercase

        Arithmetic = toupper(Arithmetic);

        // Decision Structure - ELSE IF Statements

        if (Arithmetic == 'A')

        {

            // Arithmetic - A  ---- it'll executed

            int x, y, sum;

            cout << "\n\t\t----------------------------" << endl;

            cout << "\t\t Program to Sum Two Numbers" << endl;

            cout << "\t\t----------------------------" << endl;

            cout << "\nProvide First Number : " << endl;

            cin >> x;

            cout << "\nProvide Second Number : " << endl;

            cin >> y;

            sum = x + y;

            cout << "\t\t----------------------------" << endl;

            cout << "\t\t  Addition of Two Integers" << endl;

            cout << " \t\t\t " << x << " + " << y << " = " << sum << endl;

            cout << "\t\t----------------------------" << endl;
        }

        else if (Arithmetic == 'S')

        {
            // Arithmetic - S  ---- it'll executed

            int x, y, sub;

            cout << "\n\t\t----------------------------" << endl;

            cout << "\t\t Program to Sub Two Numbers" << endl;

            cout << "\t\t----------------------------" << endl;

            cout << "\nProvide First Number : " << endl;

            cin >> x;

            cout << "\nProvide Second Number : " << endl;

            cin >> y;

            sub = x - y;

            cout << "\t\t----------------------------" << endl;

            cout << "\t\t Subtraction of Two Integers" << endl;

            cout << " \t\t\t " << x << " - " << y << " = " << sub << endl;

            cout << "\t\t----------------------------" << endl;

            }

        else if (Arithmetic == 'M')

        {

            // Arithmetic - M  ---- it'll executed

            int x, y, mul;

            cout << "\n\t\t----------------------------" << endl;

            cout << "\t\t Program to Mul Two Numbers" << endl;

            cout << "\t\t----------------------------" << endl;

            cout << "\nProvide First Number : " << endl;

            cin >> x;

            cout << "\nProvide Second Number : " << endl;

            cin >> y;

            mul = x * y;

            cout << "\t\t------------------------------" << endl;

            cout << "\t\tMultiplication of Two Integers " << endl;

            cout << " M"
                    "\t\t\t  " << x << " x " << y << " = " << mul << endl;

            cout << "\t\t------------------------------" << endl;

        }

        else if (Arithmetic == 'D')


        {

            // Arithmetic - A  ---- it'll executed

            int x, y, div;

            cout << "\n\t\t----------------------------" << endl;

            cout << "\t\t Program to Div Two Numbers" << endl;

            cout << "\t\t----------------------------" << endl;

            cout << "\nProvide First Number : " << endl;

            cin >> x;

            cout << "\nProvide Second Number : " << endl;

            cin >> y;

            div = x / y;

            cout << "\t\t----------------------------" << endl;

            cout << "\t\t  Division of Two Integers " << endl;

            cout << " \t\t\t  " << x << " / " << y << " = " << div << endl;

            cout << "\t\t----------------------------" << endl;

        }

        // ELSE Block - If enter unexpected Character

        else

            {

            // block of code if condition is false

            cout << "\n\t\t----------------------------" << endl;

            cout << "\t\t\tInvalid Input" << endl;

            cout << "\t\t----------------------------" << endl;

            }

        return 0;

        }