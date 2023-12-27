// FirstConsole.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>

using namespace std;

////////////////////////////////////////////////////////
// classes and objects

class Book {
public:
    string title, author;
    int pages;

    void read(){
        cout << "Book Tittle is: " << this->title << endl;
        cout << "written by: " << this->author << " | Pages of: " << this->pages <<  endl;
    }
};


////////////////////////////////////////////////////////
// Construtor

class Person {
public: string fname, lname;
      int age;

      Person(string fname, string lname, int age) {
          this->fname = fname;
          this->lname = lname;
          this->age = age;
          
      }

      void greet() {
          cout << "My name is: " << this->fname << ", " << this->lname << " age of: " << this->age << endl;
      }
   
};




// need to have refernce if the method or function is below the main function
int add(int a, int b);
int add(int a, int b, int c);
int power(int a, int b);

int main()
{
    // need this when using rand
    // also the time.h include
    srand(time(NULL));

 
    string fname;

    cout << "Hello World!\n";

    cout << "Enter First Name: ";

    cin >> fname;

    cout << "First Name is: " << fname << endl;
    ////////////////////////////////////////////////////////
    // for loop

    int ages[] = { 1,2,3,4,5,6,7,8 };
    
    //size for int. // if it is sizeof it will count the bit like 32 and 64 if the array is int
    for (int i = 0; i < size(ages); i++) {
        cout << ages[i] << endl;
    };


    string names1[] = { "Jerome1","Jerome2","Jerome3" };
    for (int i = 0; i < size(names1); i++) {

        cout << "Hello: " << names1[i] << endl;
    };

    // 1 to 10
    for (int i = 0; i < 10; i++) {
        cout << "Accending:" << i << endl;
    }

    // 10 to 0
    for(int i = 10; i >= 0; i--) {
        cout << "Descending: " << i << endl;
    }

    // odd 1,3,5,7
    for (int i = 0; i < 100; i++) {
        i++;
        cout << "odd: " << i << endl;
    }

    //even 2,4,6,8
    for (int i = 1; i < 100; i++) {
        i++;
        cout << "even: " << i << endl;
    }
    /////////////////////////////////////////////////////////
    // functions

    // overloading functions
    cout << "Add 2 : " << add(1, 1) << endl;
    cout << "Add 3 : " << add(1, 1, 1) << endl;


    //power function
    cout << "Power: " << power(4, 5) << endl;




    ////////////////////////////////////////////////////////
    // for each loop
    string names2[] = { "Jerome1","Jerome2","Jerome3"};
    for (string i : names2)
    {
        cout << i << ", ";
    }
    
    cout << " " << endl;

    int ages2[] = { 1,2,3,4,5,6 };

    for (int i : ages2) {
        cout << i << ", ";
    }

    cout << " " << endl;

    ////////////////////////////////////////////////////////
    // while loop  //odd and even

    int evennumber = 100;
    int oddnumber = 100;

    while (evennumber < 100 && oddnumber < 100) {
       
        for (int o = 0; o < evennumber; o++) {
            o++;
            cout << "odd: " << o << endl;
            if (o == 100) {
                break;
            }
        }
        for (int e = 1; e < oddnumber; e++) {
            e++;
            cout << "even: " << e << endl;
            if (e == 100) {
                break;
            }
        }
    }

    ////////////////////////////////////////////////////////
    // guessing game using //do while
    int guess = 0;
    int tries = 0;
    int randomnumber = rand() % 10 + 1;
    bool Continue = true;
    char Choice;



    do {
        cout << "Guess A number from 1 to 10" << endl;
        cout << "Guess: ";
        cin >> guess;

        if (guess > randomnumber ) {
            cout << "Number is Higher" << endl;
            tries++;
        }
        else if (guess < randomnumber) {
            cout << "Number is Lower" << endl;
            tries++;
        }
        else if (guess == randomnumber) {
            cout << "You are Correct Random number is: " << randomnumber << endl;
            cout << "Number of tries: " << tries << endl;
            Continue = false;
        }
    } while (Continue == true);
   

    cout << "Random Number: " << randomnumber << endl;

    ////////////////////////////////////////////////////////
    //switch // Number to days

    int days;

    cout << "Enter number 1-7 to display day: ";
    cin >> days;

    switch (days) {
    case 1: cout << "Monday" << endl;
            break;
    case 2: cout << "Tuesday" << endl;
        break;
    case 3: cout << "Wednseday" << endl;
        break;
    case 4: cout << "Thursday" << endl;
        break;
    case 5: cout << "Friday" << endl;
        break;
    case 6: cout << "Saturday" << endl;
        break;
    case 7: cout << "Sunday" << endl;
        break;
    default:
        cout << "ERROR" << endl;
        break;
    }

    ////////////////////////////////////////////////////////
    // classses and objects
    
    // need to instantiate
    Book book1;

    book1.title = "English";
    book1.pages = 100;
    book1.author = "Secret";

    book1.read();

    ////////////////////////////////////////////////////////
  //Constructors
   
    // need to instantiate and have a value
    Person p1("Jerome","Marco",23);
    Person p2("Mara","Oruga",22);

    p1.greet();
    p2.greet();

    

  
    


    return 0;
}




int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
        return a + b + c;
}

int power(int a, int b) {
    int power = pow(a, b);
    return power;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
