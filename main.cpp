#include <iostream>
#include <unistd.h>

using namespace std;

    //project 1
/*
int main() {

    for (int i = 1; i <= 10; i++) {
        cout << i << " miles is equal " << i*1.609 << " kilometres" << endl;
    }

    return 0;

}
*/

    //project 2
/*
int main() {

    int number, counter = 0;
    printf("Enter a number: ");
    cin >> number;
if (number == 0) {
    cout << "The depth is 0" << endl;
}else{
    for (int i = 1; i <= number; i++) {
        counter++;
        for (int j = 1; j <= counter; j++) {
            cout << i;
        }
        cout << endl;
    }
}
    return 0;
}
*/

    //project 3

/*
int main() {

    int number, counter = 0;
    printf("Enter a number: ");
    cin >> number;
    if (number == 0) {
        cout << "The depth is 0" << endl;
    }else{
        for (int i = 1; i <= number; i++) {
            counter++;
            for (int j = 1; j <= counter; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
    return 0;
}
*/

    //project 4
/*
int main() {

    int number;
    printf("Enter a number: ");
    cin >> number;

    for (int i = 1; i <= number; i++) {

        for (int j = 1; j <= number; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}

*/

    //project 5

/*

int main() {

    int num, negative = 0, positive = 0;
    double total = 0, counter = 0;


    printf("enter numbers: ");
    while (true) {
        cin >> num;

        if (num == 0) {
            break;
        }
        total += num;
        counter++;

        if (num < 0) {
            negative++;
        }else if (num > 0) {
            positive++;
        }
    }

    if (counter == 0) {
        printf("total number is 0");
    }else {
        cout << "total number is " << total << endl;
        cout << "positive number is " << positive << endl;
        cout << "negative number is " << negative << endl;
        cout << "average is " << total/counter << endl;
    }
}
*/



    //project 6

/*
int main() {

    int num;
    float total;

    printf("Enter a number: ");
    cin >> num;

    for (float i = 1; i <= num; i++) {
        cout << " + 1/" << i;
        total += 1/i;
    }

    cout << "=" << total << endl;

    return 0;
}

*/


    //project 7


/*
int main() {

    int sec;
    printf("enter second: ");
    cin >> sec;

    while(sec > 0) {
        cout << sec << "second remaining" << endl;
        sleep(1);
        sec--;
    }

return 0;
}
*/



    //project 8


/*
int main() {

    int totalYear = 5;
    int rent = 1000;
    int percent = 3;


    for (int i = 1; i <= totalYear; i++) {
        cout << "for year number " << i << " rent is " << percent << "%" << endl;
        cout << "the total for year " << i << " is " << rent*12*1.03*i << endl;
    }


    return 0;
}

*/


    //project 9
/*
int main() {

    int number;
    cout << "enter number ";
    cin >> number;

for (int i = 2; i <= number; i++) {

    while (number % i == 0) {
    cout << i << " ";
        number = number / i;
    }
}

    cout << endl;
    return 0;
}
*/


    //project 10

/*
int main() {
    int num = 1;
    int largest = 0;
    while (num*num<30000)
    {
        if (num > largest)
        {
            largest = num;
        }
        num++;
    }
    cout << "the largest number is " << largest;
}
*/

    //project 11

int main() {

    int binary, decimal = 0, base = 1, lastDigit;

    cout << "Enter a binary number: ";
    cin >> binary;

    while (binary > 0) {
        lastDigit = binary % 10;
        decimal += lastDigit * base;
        binary /= 10;
        base *= 2;
    }

    cout << "Decimal equivalent: " << decimal << endl;

    return 0;
}
