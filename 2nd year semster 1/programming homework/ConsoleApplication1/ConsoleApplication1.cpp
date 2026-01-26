// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include  <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int user,n;
	

	do
	{
        // instuctring the user to pick a number
        cout << "\nMenu:\n";
        cout << "1. Sum of First N Numbers (For Loop)\n";
        cout << "2. Multiplication Table (While Loop)\n";
        cout << "3. Count Digits in a Number (While Loop)\n";
        cout << "4. Average of Entered Numbers (Sentinel-Controlled While Loop)\n";
        cout << "5. Check Prime Number (For Loop)\n";
        cout << "6. Number Guessing Game (Do...While Loop)\n";
        cout << "7. Fibonacci Sequence (For Loop)\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        // colleting input from the user
        cin >> user;
        /*first if statement, 
        this will ask the user to enter a number
        and it will calculate the sum of all 
        the numbers to reach that number*/
        if (user == 1) {
            int n, sum = 0;
            cout << "enter a number n :";
                cin >> n;
                for (int i = 1; i < n; i++) {
                    sum += i;
                }
                cout << "Sum of first " << n << " numbers is: " << sum << "\n";
        }
        /*second if statement is will use a while loop to to for 
        mulitpaction tables it will print each result  */
        else if (user == 2) {
            int n, sum = 0, i = 1;
            cout << "enter a number n :";
            cin >> n;
            cout << "The multipcation table of " << n << "form 1 to 10 is\n";
            while (i < 11) {
                //this is the exit case
                sum = n * i;
                cout << sum << " ";
                i++;
            }
        }//this counts the number of digits are in the orignal number by deviding it by 10 till you get to 0 
        else if (user == 3)
        {
            int n,sum=0,i;
            cout << "enter a number n :";
            cin >> n;
            while (n > 0)
            {
                i = n / 10;
                n = i;
                sum++;

            }
            cout << "the number of digits this number has is :" << sum;

        }// this one caculate the average of all the numbers enterd unless the number is -1
        else if (user ==4)
        {
            int n = 0, sum = 0, i=0, avg;
            cout << "please make sure your numbers is not -1 other wise the loop will end\n";
            cout << "enter a number n :";
            while (true) {

                cin >> n;
				if (n == -1) break;
                sum += n;
                i++;
                

            }
            avg = sum / i;
            cout << "the average of "<<n<<"that you entered in is : " << avg;
        }
        // this one will check if the number is a prime number by using a for loop and de
        else if(user == 5)
        {
            int n, sum = 0;
            cout << "enter a number n :";
            cin >> n;
            if (n < 2) {
                cout << n << " is not a prime number.\n";
            }
            else{
                bool isPrime = true;
                for (int i=2; i < n/2; i++) {
                    if (n % i == 0) {
                        isPrime = false;
                        break;
                    }
                }
                if (isPrime == true) {
                    cout << n << " is a prime number.\n";
                }
                else
                {
                    cout << n << " is not a prime number.\n";
                }

            }


        }// this is a gussing game it will give you hints untill you get the number this used a do while loop
        else if (user == 6) {
            srand(time(0));
            int n;
            int t = rand() % 100 + 1;
            cout << "Guess a number between 1 and 100: ";
            
            
            do
            {
                cin >> n;
                if (n > t) {
                    cout << "Too high\n";
                }
                else if (n < t) {
                    cout << "Too low\n";
                }

            } while (n != t);
        }// this will do the fibbinco sequnce till the nummber entered
        else if (user == 7) {
            int n, sum = 0,a=0,b=1;
            cout << "enter a number n :";
            cin >> n;
            for (int i = 0; i < n + 1; i++) {
                cout << a << " ";
                sum = a + b;
                a = b;
                b = sum;

            }

        }
        else {
            cout << "invalid number enter a number between 1-8. \n";
        }
        

        
        // this will exit the loop
	} while (user != 8);

	

	

}


