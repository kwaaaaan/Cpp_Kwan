#include <iostream>
#include <vector>
#include "Snack.h"
#include "Candy.h"
#include "Chocolate.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
	std::vector<Snack*> snack_basket;


	while (1) {
		int type;
		cout << "과자 바구니에 추가할 간식을 고르시오(1:사탕, 2:초콜릿, 0:종료) : ";
		cin >> type;
		if (type == 1) {
			string taste;
			cout << "맛을 입력하세요. : ";
			cin >> taste;
			snack_basket.push_back(new Candy(taste));
		}
		else if (type == 2) {
			string shape;
			cout << "모양을 입력하세요. : ";
			cin >> shape;
			snack_basket.push_back(new Chocolate(shape));
		}
		else if (type == 0) {
			break;
		}
		else {
			cout << "0~2 사이의 숫자를 입력하세요." << endl;
		}
	}

	cout << "과자 바구니에 담긴 간식의 개수는 " << Snack::get_count() << "개 입니다.\n";

	cout << "과자 바구니에 담긴 간식 확인하기!\n";

	for (Snack* snack : snack_basket) {
		snack->show_info();
	}

	for (Snack* snack : snack_basket) {
		delete snack;
	}

	snack_basket.clear();

	return 0;
}