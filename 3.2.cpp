#include<iostream>
#include<string>
#include<ctime>
using namespace std;
int main()
{
	int a,num;
	srand(static_cast<unsigned int>(time(NULL)));
	a = rand() % 100 + 1;
	//cout << num << endl;
	cin >> num ;
	while (num != a)
	{
		if (num < a)
			cout << "С��" << endl;
		else
			cout << "����" << endl;
		cin >> num;
	}
	cout << "yes" << endl;
	system("pause");
	return 0;
}