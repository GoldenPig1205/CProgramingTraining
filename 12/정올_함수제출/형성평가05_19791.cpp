#include <iostream>
#include <string>
using namespace std;

void input(Student arr[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i].name;
        arr[i].total = 0;
        for (int j = 0; j < 3; j++) {
            cin >> arr[i].score[j];
            arr[i].total += arr[i].score[j];
        }
    }
}

void sort(Student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].total < arr[j + 1].total) {
                Student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void output(Student arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i].name;
        for (int j = 0; j < 3; j++) {
            cout << " " << arr[i].score[j];
        }
        cout << " " << arr[i].total << '\n';
    }
}
