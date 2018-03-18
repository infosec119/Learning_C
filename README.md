# Learning_C

## 목표

* C 콘솔 프로그램에 대해 이해한다.

  * argc, argv

    예) `gcc out.c -o out.exe`에서 argc = 4, argv[] = ["gcc", "out.c", "-o", "out.exe"]

  * main(int argc, char* argv[])에 삽입된다.

* 프로그래밍의 기본적인 문법을 이해한다.

  * 조건문 : if, else

  * 반복문 : for, while, do{} while();

* 강타입 프로그래밍 언어의 특성을 이해한다.

  * 데이터 타입 (char, int, double..)

  * 문자의 표현 (char들을 나열)

  * 구조체 (struct)

  * 포인터 (데이터의 메모리 위치를 저장하는 타입)

  * 함수 포인터 (컴파일된 코드의 메모리 위치를 저장하는 타입)

* 모듈 단위 프로그램을 작성하는 프로젝트를 진행한다.

  * `데이터를 처리하는 부분`(Controller)과 `표현하는 부분`(View)이 분리된 프로그램

* 간단한 협업 방법과 테스트 기반 프로그래밍을 경험해본다.

  * Git의 간단한 사용 (Clone, Push, Pull)

  * Github 이용 (Pull Request)

  * 테스트 작성