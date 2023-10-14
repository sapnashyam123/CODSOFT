#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand((unsigned int) time(NULL));

  int number = (rand() % 100) + 1; 


  int guess = 0;
  int trial = 0;

  do
  {
    trial++;
    cout << "Enter Guess : ";
    cin >> guess;


    if (guess > number)
      cout << "Guess too low!" << endl;

    else if (guess < number)
      cout << "Guess too high!" << endl;

    else
      cout << "You won after "<<trial<<" trials" << endl;




  } while (guess != number);


  return 0;
}