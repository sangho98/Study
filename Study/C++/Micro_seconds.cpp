// chrono를 이용해 ms(micro seconds) 단위로 시간을 측정한다.

#include <iostream>
#include <chrono>

using namespace std;

int main() {

	double result;

	// 시작시간
	// 정밀한 시간을 측정하기 위한 코드 (시작시간)
	
	chrono::system_clock::time_point start = chrono::system_clock::now();

	// 시간 측정을 위한 코드
	// 임의로 아무런 코드


	for(int i=0;i<100;i++)
		for(int j=0;j<100;j++)
			cout<<"Micro seconds 단위로 시간측정 합니다." << i+1 << "행" << j+1 << "열\n";

			// 임의의 코드를 한 줄 이상 넣어야한다.

	
	// 종료시간
	// 정밀한 시간을 측정하기 위한 코드 (종료시간)

	chrono::system_clock::time_point end = chrono::system_clock::now();

	// ms단위를 얻기위해 for문 실행 후 시간과 실행 전 시간을 뺀다.

	chrono::microseconds micro = chrono::duration_cast<chrono::microseconds>(end - start);

	cout << "\n경과시간 : " << micro.count() << "ms";

	return 0;

}
	
