#include <iostream>
#include <iomanip>
#include "getObesity.h"
using namespace std;

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