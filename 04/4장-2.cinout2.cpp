//4��-2. CINCOUT2.cpp  4.1 ���� scope�� ǥ�� �����
#include <iostream>
using namespace std;
int main() {
    int age;
    float weight;
	cout<<"Get age and weight: ";//enter key �Ǵ� space key�� ����
    cin >> age >> weight; //age���� �Է¹޴´� => (cin >> age) >> weight;
    cout <<"age = "<<age<<'\n'<<"weight = "<<weight<<'\n';
	system("pause");
    return 0;
}