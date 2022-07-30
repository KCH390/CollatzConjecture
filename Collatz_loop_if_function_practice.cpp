#include <iostream>

using std::cout;
using std::string;
using std::endl;
using std::cin;

int collatz_eval(int placeholder){
    int step_number = 0;
    while (placeholder != 1) {
        if (placeholder % 2 == 0) {
            placeholder /= 2;
        } else {
            placeholder *= 3;
            placeholder++;
        }
        cout << "The Number is now " << placeholder << "\n";
        step_number++;
    }
    return step_number;
}

int main() {

    int input_number_i;
    int input_number;
    int steps;
    cout << "*******************************|COLLATZ WIZARD|*******************************" << endl;
    cout << "Give me a number and I will FORCE IT TO BECOME 1 WITH THE POWER OF COLLATZ CONJECTURE MWHAHAHA" << endl;
    cin >> input_number_i;
    input_number = input_number_i;

    if(cin.fail()){
        cout << "HEY THAT\'S NOT AN INTEGER! MY POWERS DON'T WORK ON OTHER TYPES. I\'M GOING TO LEAVE NOW!" << endl;
    }
    else {
        steps = collatz_eval(input_number);
        cout << "Wow! that took " << steps << " Collatz steps to convert " << input_number_i << " to 1!\n";
    }
    cout << "******************************************************************************" << endl;
    return 0;
}
