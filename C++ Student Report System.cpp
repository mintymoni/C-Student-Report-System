#include <iostream>
#include <string>
using namespace std;

int main() 
{
    double midterms, final, average;
    char op;
    string rank;
    string name;
    
    cout << "enter student's name: ";
    cin >> name;
    cout << "enter midterms grade: ";
    cin >> midterms ;
    cout << "enter an operator (+, -, *, /): " ;
    cin >> op;
    cout << "enter finals grade: ";
    cin >> final;

    //conditions
    if (op == '+'){
        average = midterms + final;
    }
    else if (op == '-'){
        average = midterms - final;
    }
    else if  (op == '*'){
        average = midterms * final;
    }
    else if (op == '/'){
        average = midterms / final;
    }
    else {
        cout << "INVALID OPERATOR!";
    }
    //results 
    cout << "-------------------------------" <<endl;
    cout << "Student: " << name << endl;
    cout << "Midterms: " << midterms <<  endl;
    cout << "Finals: " << final << endl;
    average = (midterms+final)/2;
    cout << "Average: " << average << endl;
    cout << "CONGRATULATIONS!"<< endl;
    
    if (average >= 75) {
    if (average >= 90) {
        if (average >= 94) {
            if (average >= 97) {
                rank = "WITH HIGHEST HONOR";
            } else {
                rank = "WITH HIGH HONOR";
            }
        } else {
            rank = "WITH HONOR";
        }
    } else {
        rank = "PASSED";
    }
} else {
    rank = "FAILED";
}
cout << "RESULT: " << rank;
    return 0;
    }
    

