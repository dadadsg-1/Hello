#include "ros/ros.h"
int main(int argc, char *argv[])
{
    ros::init(argc,argv,"hello");
    //解决乱码
    setlocale(LC_ALL,"");
    ROS_INFO("haha,哈哈");
    
    return 0;
}

