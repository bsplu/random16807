#include<iostream>

using namespace std;

int z = 123;                     // z 为种子，需提前设置（GetTickCount()）

int schrage_next()
{
    const int a = 16807;         // 16807 法
    const int b = 0;
    const int m = 2147483647;    // MAX_INT
    const int q = 127773;        // q = m / a;
    const int r = 2836;          // r = m % a;
    int _z = a * (z % q) - r * (int)(z / q) + b; // 计算 mod
    if(_z < 0)
        _z += m;             // 将结果调整到 0 ~ m
    return z = _z;
}

int main(){

	for(int i=0;i<100;i++){
		cout<<double(schrage_next())/double(2147483647)<<endl;
	}
}
