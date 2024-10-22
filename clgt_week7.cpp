#include <iostream>
using namespace std;
void input(int year[], int num[], int& n) {
    cout << "So nam " << endl;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> year[i];
        cin >> num[i];
    }
}
void same(int num[], int n) {
    cout << "So luong nam co cung so luong nguoi sinh ra:" << endl;
    for (int i = 0; i < n; i++) {
        int a = 1;
        if (num[i] != -1) {
            for (int j = i + 1; j < n; j++) {
                if (num[i] == num[j]) {
                    a++;
                    num[j] = -1;
                }
            }
            if (a > 1)
                cout << num[i] << " nguoi sinh trong " << a << " nam" << endl;
        }
    }
}
void yMin(int year[], int num[], int n) {
    int min = num[0];
    for (int i = 1; i < n; i++) {
        if (num[i] < min) {
            min = num[i];
        }
    }
    cout << "Nam co so luong nguoi sinh it nhat: ";
    for (int i = 0; i < n; i++) {
        if (num[i] == min) {
            cout << year[i] << endl;
        }
    }
}
void yMax(int year[], int num[], int n) {
    int max = num[0];
    for (int i = 1; i < n; i++) {
        if (num[i] > max) {
            max = num[i];
        }
    }
    cout << "Nam co so luong nguoi sinh nhieu nhat: ";
    for (int i = 0; i < n; i++) {
        if (num[i] == max) {
            cout << year[i] << endl;
        }
    }
}
int main() {
    int n;
    int year[100];
    int num[100];
    input(year, num, n);
    same(num, n);
    yMin(year, num, n);
    yMax(year, num, n);

}
