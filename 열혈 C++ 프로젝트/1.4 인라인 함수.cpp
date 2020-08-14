#include <iostream>
#define SQUARE(x) ((x)*(x))
inline int SQUARE2(int x) {
	return x * x;
}
int main(void) {
	std::cout << SQUARE(5) << std::endl;
	std::cout << SQUARE2(5) << std::endl;

	std::cout << SQUARE(3.15) << std::endl;
	std::cout << SQUARE2(3.15) << std::endl;
	return 0;
}

/*
inline 함수는 함수를 실행하는데 필요한 작업량을 줄이는데에 의의가있다.
inline 함수의 코드를 코드대치를 통해 삽입한다.
그 방식은 매크로와 같지만 전처리기가 아닌 컴파일러에서 처리된다.

간단한 함수를 간단한방법으로 실행하기위한 것이기에
컴파일러에서 복잡한 함수라고 판단되면 인라인함수가 되지않는다.


추가적으로 매크로함수와의 차이점이 또 있는데

매크로
MACRO(a,b) a*b
인라인 함수
inline Inline(int a, int b){
return a*b;
}

만약 (10+20,30+40)의 값을 입력할 경우
매크로: 10+20*30+40
인라인: (10+20)*(30+40)
으로 처리된다.
*/