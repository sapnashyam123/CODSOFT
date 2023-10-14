#include <iostream>
#include <vector>
using namespace std;

// Define movie listings and seat availability
vector<vector<int>> seats(10, vector<int>(10, 0)); // 10 rows and 10 seats in each row
vector<int> prices = {10, 12}; // Prices for different movies

// Function to display available movies
void displayMovies() {
    cout << "Available Movies:" << endl;
    cout << "1. Movie 1" << endl;
    cout << "2. Movie 2" << endl;
}

// Function to display available seats for a movie
void displaySeats(int movieIndex) {
    cout << "Available seats for Movie " << movieIndex + 1 << ":" << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (seats[i][j] == 0) {
                cout << "O "; // Available seat
            } else {
                cout << "X "; // Booked seat
            }
        }
        cout << endl;
    }
}

// Function to book seats
int bookSeats(int movieIndex, int numSeats) {
    cout << "Enter the row and seat numbers (e.g., 3 5) for " << numSeats << " seats:" << endl;
    int totalCost = 0;
    
    while (numSeats > 0) {
        int row, seat;
        cin >> row >> seat;

        if (row >= 1 && row <= 10 && seat >= 1 && seat <= 10) {
            if (seats[row - 1][seat - 1] == 0) {
                seats[row - 1][seat - 1] = 1;
                totalCost += prices[movieIndex];
                numSeats--;
            } else {
                cout << "Seat already booked. Please select another seat." << endl;
            }
        } else {
            cout << "Invalid seat selection. Please try again." << endl;
        }
    }
    return totalCost;
}

int main() {
    int choice;
    while (true) {
        displayMovies();
        cout << "Select a movie (1-2), or enter 0 to exit: ";
        cin >> choice;
        if (choice == 0) {
            break;
        } else if (choice == 1 || choice == 2) {
            int movieIndex = choice - 1;
            int numSeats;
            cout << "Enter the number of seats to book: ";
            cin >> numSeats;

            if (numSeats > 0) {
                int totalCost = bookSeats(movieIndex, numSeats);
                cout << "Booking successful! Total cost: $" << totalCost << endl;
            } else {
                cout << "Invalid number of seats. Please try again." << endl;
            }
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}