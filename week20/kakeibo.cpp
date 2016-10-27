#include <stdio.h>

class Kakeibo {

	public:

	int payments[1000];

	Kakeibo() {
		int i;
		for (i=0; i<1000; i++) {
			payments[i] = -1;
		}
	}

void pay(int amount) 
{
	int i = 0;
	while( payments[i] != -1) {
		i++;
	}
	payments[i] = amount;
	printf("%d円の支出を記録しました。\n", amount);
	
}

void show_payments() 
{
	int i = 0;
	printf("これまでの支出を表示します。\n");
	while( payments[i] != -1) {
		printf("%d：%d円\n", i, payments[i]);
		i++;
	}
}
void average() 
{
	int i = 0;
	int sum = 0;
	while( payments[i] != -1) {
		sum += payments[i];
		i++;
	}
	printf("支出平均：%d\n", sum/i);
}

void sum() 
{
	int i = 0;
	int sum = 0;
	while( payments[i] != -1) {
		sum += payments[i];
		i++;
	}
	printf("支出合計：%d\n", sum);
}
};

int main() {
	Kakeibo a;
	a.pay(100);
	a.pay(200);
	a.pay(500);
	a.show_payments();
	a.average();
	a.sum();
	return 0;
}
