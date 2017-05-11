#include <iostream>
#include <glog/logging.h>

int main(int argc, char ** argv)
{
  ////////////////Initialisation Logs////////////////////
  google::InitGoogleLogging("log_chifoumi");
  google::SetLogDestination(google::GLOG_INFO, "log_chifoumi");
  ///////////////////////////////////////////////////////
  
  std::cout << "Hello World!" << std::endl;
  return 0;
}
