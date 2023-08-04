#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <stack>

using namespace std;

typedef long long ll;

int main() {
	// Пример работы с массивами (ввод с клавиатуры)
	int a[10]; // массив a размера [10]
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	sort(a, a + 10);
	// Пример работы с вектором (ввод с клавиатуры) 
	vector<int> v(10); // вектор b размера (10) НУЖНО ПОДКЛЮЧИТЬ #include <vector>
	for (int i = 0; i < 10; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());//сортировка вектора (Стандартная функция в С++) 
	// Пример ввода и вывода строки s
	string s = "bbda"; // abbd
	cin >> s;
	cout << s << endl;
	sort(s.begin(), s.end()); // сортировка строки
	s.size(); //размер строки
	//-----------------------------------------//
	// 
	// 
	//Создание вектора размера n и ввод его с клавиатуры
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	//------------------------------------//
	string s, s1;
	cin >> s >> s1;
	sort(s.begin(), s.end());
	sort(s1.begin(), s1.end());
	if (s == s1) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
    return 0; 
}
