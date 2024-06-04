#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float MARK;
    cout << "PLEASE ENTER YOUR EXAMINATION MARK" << endl;
    cin >> MARK;

    if (MARK >= 70){
        cout << "YOU HAD GRADE A";
    }
    else if (MARK >= 60 & MARK < 70){
        cout << "YOU HAD GRADE B";
    }
    else if (MARK >=50 & MARK < 60){
        cout << "YOU HAD GRADE C";
    }
    else if(MARK >= 40 & MARK < 50){
        cout << "YOU HAD GRADE D";
    }
    else{
        cout << "YOU FAILED";
    }
    return 0;
}