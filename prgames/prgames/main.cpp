#include <iostream>
#include<cstdlib>

using namespace std;

int main() {

    setlocale(LC_ALL, "ru");
    srand(time(NULL));

    cout << "\t\t\t\t\t������ �����!" << endl << endl;
    int counter = 1;
    int random_number = rand() % (100 - 1 + 1) + 1;
    int user_number;

    //cout << random_number << endl; // ���������
    cout << "���������� ������� �����: ";
    cin >> user_number;

    do {
        if (user_number == random_number) {
            break;
        }
        else {
            if (user_number > random_number) {
                cout << "������!" << endl;
            }
            else {
                cout << "������!" << endl;
            }
            cout << "������� �����: ";
            cin >> user_number;
            counter ++;
        }
    } while (user_number != random_number);
    cout << "�� �������!!!" << endl; cout << "���������� �������: " << counter  << endl;
    int sin;
    cin >> sin;
    return 0;
}