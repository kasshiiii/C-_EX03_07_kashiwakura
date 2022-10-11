#include <iostream>
#include <iomanip>
using namespace std;

double GetBmi(double weight, double height)
{
    return weight / height / height;
}

int GetObesity(double bmi) {
    if (bmi < 18.5) {
        return -1;
    }
    else if (bmi < 25) {
        return 0;
    }
    else if (bmi < 30) {
        return 1;
    }
    else if (bmi < 35) {
        return 2;
    }
    else if (bmi < 40) {
        return 3;
    }
    else {
        return 4;
    }
}

int main()
{
    double height;
    double weight;
    int bmi;

    cout << "身長(m)を入力してください" << endl;
    cin >> height;
    cout << "体重(kg)を入力してください" << endl;
    cin >> weight;

    cout << "あなたのBMIは"  << fixed << setprecision(2) << GetBmi(weight, height) << "です" << endl;
    bmi = GetObesity(GetBmi(weight, height));
    if (bmi < 0) {
        cout << "低体重です" << endl;
    }
    else if (bmi < 1) {
        cout << "通常体重です" << endl;
    }
    else
    {
        cout << "肥満(" << bmi << "度)です" << endl;
    }
    string a;
    cin >> a;
    return 0;
}