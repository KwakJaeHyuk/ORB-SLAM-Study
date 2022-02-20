# cmake할때 요구되는 최소 버전 설정
cmake_minimum_required(VERSION 3.0)

# 프로젝트 이름
project(Opencv_Study)

# 외부 라이브러리인 opencv를 사용하기 위해서 find_package를 통한 이미지 출력을 연습해보겠다.
find_package(OpenCV REQUIRED)
# opencv에 포함된 다이렉토리를 사용한다고 언급해주고
include_directories(OpenCV_INCLUDE_DIR)

# 실행할 파일 및 파일 이름
add_executable(run src/Opencv_Study.cpp)
# opencv안에 들어있는 라이브러리를 사용하기 위해 taget_link_libraries를 해준다.
target_link_libraries(run ${OpenCV_LIBRARIES})