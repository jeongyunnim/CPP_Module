# C++ - Module 00
Namespaces, classes, member functions, stdio streams, initialization lists, static, const, and some other basic stuff
## General rules
### Compiling
- -Wall -Wextra - Werror 플래그와 함께 c++로 컴파일 해야한다.
- -std=c++98 플래그를 추가해야 한다.
Formatting and naming conventions
- 예제 폴더의 이름은 ex00, ex01, ..., exn 으로 해야한다.
- 파일과 클래스, 함수, 메머 함수와 속성의 이름은 가이드 라인을 따라야 한다.
- 클래스의 이름은 UpperCamelCase 형식으로 작성하라. class 코드를 포함한 파일은 항상 class의 이름을 따라야 한다. 
- ClassName.hpp/ClassName.h, ClassName.cpp, or ClassName.tpp
- 모든 출력 메세지의 마지막에는 개행이 있어야 하며, stdout으로 출력되어야 한다.
- norminette 표준을 지키지 않아도 된다. 가독성을 신경쓰지 않아도 된다는 이야기는 아니다.

Allowed / Forbidden

- 대부분의 standard library를 사용하는 것이 허용된다. C++11과 Boost library들을 사용하는 것은 금지된다. 또한 printf(), alloc(), free() 등의 함수는 금지된다.
- using namespace <ns_name> 과 friendly 키워드를 사용하는 것은 금지된다. 이 경우 -42점을 받을 것이다.
- C++ Module 08과 09에서만 STL을 사용하는 것을 허용한다. 해당 모듈을 제외한 모듈에서는 컨테이너(vector/list/map/등)와 알고리즘(<algorithm>헤더를 include 하여 사용하는 것)을 사용하는 것을 금지한다. 이 경우 -42점을 받을 것이다.

A few design requirements

- 메모리를 할당한 경우(new 키워드를 통해) 메모리를 해제해야 한다.
- Module02 부터 09까지는 Orthodox Canonical Form을 유지해야 한다.
	-> 기본 생성자 / 기본 소멸자 / 복사 생성자 / 할당 연산자 오버로딩을 명시적으로 선언하는 것을 가리킨다.
	```
	class A
	{
		A();
		~A();
		A(const A &a);
		A &operator= (const A &a);
	}
	```
- 함수를 헤더파일에 구현을 하면 안된다. 이 경우 0점을 받게 된다.
- 각 헤더를 다른 헤더와 독립적으로 사용할 수 있어야 한다. 필요한 의존성을 포함하여야만 한다. include guards를 이용하여 이중 include 문제를 피해야 한다. 이 경우 0점을 받게 된다.

Read me

- 이는 프로그램에 의해 확인되지 않으므로 필요로 하는 추가적인 함수를 자유롭게 추가할 수 있다. 