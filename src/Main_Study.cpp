// // opencv의 모든 기능을 사용한다는 의미의 헤더파일 => 하지만 컴파일 타임이 느려질 수 있다.
// #include "opencv2/opencv.hpp"

// // 기본 데이터 타입 선언 Mat이나 Point가 선언되었다. 그와 관련된 행렬 연산 혹은 벡터 연산이 제공된다. 
// // Mat: 이미지를 담은 객체(행렬이라고 생각하면 된다.)
// #include <opencv2/core.hpp>

// #include <opencv2/imgcodecs.hpp>

// // 윈도우 화면, UI처리 및 마우스 제어 가능
// #include <opencv2/highgui.hpp>
// #include <opencv2/imgproc.hpp>
#include <iostream>

// 아래의 예제를 입력하려고 하는데 c++로 입력하게 된다면 에러가 뜨는데 그 이유는 위의 opencv 헤더파일들이 있는데 사용하지 않았더니 에러가 뜬것 같다.
// #include <stdio.h>
// #include <stdlib.h>

// void main대신 int main문을 사용하는 이유는 일부 컴파일러가 임의로 지원하는 비표준 기능으로 
// 컴파일러가 void main을 int main으로 치환해주었기 때문에 가능하다.
// int main의 매개변수인 argc : 메인함수에 전달되는 정보의 개수
//                    argv : 메인함수에 전달되는 실질적인 정보로, 문자열의 배열을 의미한다. 첫번째 문자열은 프로그램의 실행결로로 항상 고정이 되어있다.
int main(int argc, char **argv)
{
    int i;
    for(i = 0;i < argc; i++)
    {
        // std::cout << "argv[" << i << "]: "<< argv[i] << std::endl;
        printf("argv[%d]: %s\n", i, argv[i]);
    }
    // argc의 개수는 아마 출력하고 난다면 우리가 예상한 수의 +1이 나올 것이다. 사실 정보의 개수는 argc-1의 값이 된다.
    printf("%d\n", argc);
    exit(0);
}
