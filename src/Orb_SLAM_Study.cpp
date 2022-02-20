#include <opencv2/opencv.hpp>

int main (int argc, char** argv)
{
    cv::Mat img = cv::imread("/home/kwak/RAIL_1/dataset/sequences/00/image_0/000000.png", 1);
    
    // Ptr는 cv::feature2D 클래스를 가리키는 포인터 역할을 한다. 그러나 일반적인 포인터와는 다르게 Ptr 인스턴스가
    // 사라지면 object는 한번에 자동적으로 사라진다.
    // cv::Feature2D는 추상화 클래스로 2D image feature detectors와 descriptor extractions들 포함한다.
    // 따라서 feature라는 객체를 생성하고 Feature2D에서 ORB 클래스를 사용하는 코드이다.
    // 그 중에서 ORB algorithm에서 ORB의 시작을 알리는 create함수를 실행.
    cv::Ptr<cv::Feature2D> feature = cv::ORB::create();

    // vector컨테이너는 자료구조에서 stack과 비슷한 역할을 하는 c++에서 제공되는 컨테이이너이다.
    // 
    std::vector<cv::KeyPoint> trgKeyPoints, srcKeyPoints;
    cv::imshow("ok", img);
    cv::waitKey(0);
}