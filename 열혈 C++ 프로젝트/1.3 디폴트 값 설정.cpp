#include <iostream>

int BoxVolume(int length, int width = 1, int height = 1);
int main(void) {
	std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5, 5, D] : " << BoxVolume(5, 5) << std::endl;
	std::cout << "[7, D, D] : " << BoxVolume(7) << std::endl;
	//std::cout << "[D, D, D] : " << BoxVolume() << std::endl;
	return 0;
}
int BoxVolume(int length, int width, int height) {
	return length * width * height;
}

/*
함수에 디폴트 값을 설정함으로써 값을 입력받지 않았을때
설정한 값으로 연산을 한다.

Add(int num1=10, int num2=20) //입력받지 못하면 각각 10, 20으로 설정된다.
Add(int num1, int num2=20) //일부분만 지정가능하다 그러나...
Add(int num1=10, int num2) //다음과 같이 왼쪽부터 설정하면 망가진다.
// 디폴트 값은 반드시 오른쪽부터 값을 채워나가야 한다.
*/