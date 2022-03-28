//Реалізуйте клас «Футбольний клуб». Необхідно зберігати в змінних-членах класу Назву команди, назву домашнього стадіону, презедента клубу, капітана команди, середня кількість відвідувань домашнього матчу. 
//Реалізуйте функцію, яка перевіряє на який з трьох футбольних клубів ходить більше вболівальників.
#include <iostream>
#include <string>
#include<Windows.h>
using namespace std;
int chek( int visitHomeGame1, int visitHomeGame2, int visitHomeGame3);//ф-н перевірки на матчі якої комади ходять більше вболівалників
class footballClub
{
public:
	string nameComand;// змінна для назви команди 
	string nameStadion;// змінна для назви домашнього стадіону
	string namePresident;// змінна для імені президента клуба
	string nameCapitan;// змінна для імені камітана команди 
	int visitHomeGame=0;// змінна для середньої кількості вболівальників
 
	void foo() {//ф-н вводу данних 
		cout << "Введіть назву футбольної команди " << endl;
	    cin >>nameComand;
		cout << "Введіть назву домашнього стадіону " << endl;
		cin >>nameStadion;
		cout << "Введіть ім'я презудента клубу " << endl;
		cin>>namePresident;
		cout << "Введіть ім'я капітана команди " << endl;
	    cin>> nameCapitan;
		cout << "Введіть середню кількість відвідувань домашнього матчу " << endl;
		cin >> visitHomeGame; 
		cout << endl;
		
	}
};
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a = 0;//додаткова змінна
	footballClub first;
	first.foo();

	footballClub second;
	second.foo();

	footballClub third;
	third.foo();
	a=chek(first.visitHomeGame,second.visitHomeGame, third.visitHomeGame);
	if (a == 1) {//взалежності від поверненого значення виводимо фразу
		cout <<"Команда ,"<< first.nameComand << ", має найбільше вболівальників " << endl;
	}
	if (a == 2) {
		cout <<"Команда ,"<< second.nameComand << ",має найбільше вболівальників " << endl;
	}
	if (a == 3) {
		cout <<"Команда ,"<< third.nameComand << ",має найбільше вболівальників " << endl;
	}
	if (a == 4) {
		cout <<  "Всі три комади мають однакову кількість вболівальників  " << endl;
	}
}
int chek(int visitHomeGame1, int visitHomeGame2, int visitHomeGame3) {
	if (visitHomeGame1 > visitHomeGame2 && visitHomeGame1 > visitHomeGame3) {
		return 1;//якщо перший клуб має найбільше вболівальників повертаєм 1
	}
	else if (visitHomeGame2 > visitHomeGame1 && visitHomeGame2 > visitHomeGame3){ 
		return 2;//якщо другий клуб має найбільше вболівальників повертаєм 2
	}
	else if (visitHomeGame3 > visitHomeGame1 && visitHomeGame3 > visitHomeGame2) {
		return 3;//якщо третій клуб має найбільше вболівальників повертаєм 3
	}
	else if (visitHomeGame1 == visitHomeGame2 && visitHomeGame1 ==visitHomeGame3) {
		return 4;//якщо клуби мають однакову кількість вболівальників повертаєм 4
	}	
}

