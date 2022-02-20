#include <opencv2/opencv.hpp>

int main( int argc, char **argv)
{
    // opencv에서의 이미지를 불러오기 위해서는 imread("filename, flag")이렇게 입력해주어야 하는데
    // 대표적으로 아래의 3가지가 존재한다.
    // flag는 '1'일 경우 이미지의 색깔정보를 포함해서 불러오는 것을 의미한다.
    // flag가 '0'일 경우 이미지를 grayscale로 받아온다는 의미이다.
    // flag가 '-1'일 경우 이미지 파일을 색정보에 알파채널(Alpha channel)까지 포함해서 불러온다.
    // 사실 이렇게 처음부터 받아오게 할수도 있지만 이미지를 받아오고 난 뒤에 변경해도 된다.
    cv::Mat img = cv::imread("/home/kwak/RAIL_1/dataset/sequences/00/image_0/000000.png", 1);
    
    // 첫번째 파라미터에서 이미지를 보여줄 윈도우 창의 이름을 입력하고 
    // 두번째 파라미터에서 이미지를 Mat형식으로 만든 이미지 변수를 입력해준다.
    cv::imshow("ok", img);

    // opencv에서 제공되는 waitKey함수에 입력되는 파라미터는 키입력을 기다릴 시간을 입력한다.
    // 따라서 여기에 '0'을 입력해주게 된다면 무한정 키입력을 기다리게 되는 것이다.
    cv::waitKey(0);
}