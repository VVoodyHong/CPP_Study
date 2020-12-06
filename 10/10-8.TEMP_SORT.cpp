// 10-8.TEMP_SORT.CPP 10.5 template 함수
#include <iostream>
using namespace std;

template <class T>
void sort (T *ele, int num){
    cout << "sort() 수행" << endl << endl;
    for (int temp = 0; temp < num; temp++){
        int temp2 = temp;
        for (int temp3 = temp + 1; temp3 < num; temp3++)
            if (ele[temp3] < ele[temp2]){
                temp2 = temp3;
            }
        T arg = ele[temp]; 
        ele[temp] = ele[temp2]; 
        ele[temp2] = arg;
    }
}
template <class T>
void print (T *ele, int num){
    for(int i=0; i<num; i++){
        cout << ele[i] << " ";
    }
    cout << endl << endl;
}

void main (){
    int arr1[10] = {5, 6, 1, 7, 9, 3, 2, 0, 4, 8};
    float arr2[10] = {4.1, 1.2, 5.0, 6.3, 2.3, 0.4, 7.7, 8.5, 3.1, 9.0};
    char* name[10] = { "Kim" };
    //Person p[10];
    cout << "sort() 호출 전 " << endl;
    print(arr1, 10);
    sort(arr1, 10);
    cout << "sort() 호출 후 " << endl;
    print(arr1, 10);
    sort(arr2, 10);
    print(arr2, 10);
    sort(name, 10);//동작 가능하도록 고치는 것을 실습할 것
    //sort(p, 10);//동작 가능하도록 수정 필요
    system("pause");
}