#include <iostream>
#include<cstdlib>

using namespace std;

int main() {

    setlocale(LC_ALL, "ru");
    srand(time(NULL));

    cout << "\t\t\t\t\t������ �����!" << endl << endl;

    int random_number = rand() % (20 - 1 + 1) + 1;
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
        }
    } while (user_number != random_number);
    cout << "�� �������!!!" << endl;
    int sin;
    cin >> sin;
    return 0;
}