/********************************************************************
  > File Name: main.cpp
  > Author:xisha
  > Mail: 1540348087@qq.com
  > Created Time: 2018年08月30日 星期四 20时27分02秒
********************************************************************/

#include <glog/logging.h>
#include <iostream>

int main(int argc,char* argv[])
{
    google::InitGoogleLogging(argv[0]);
    google::SetLogDestination(google::GLOG_INFO,"./myinfo");
    LOG(INFO)<<"hello,world";
    return 0;
}
