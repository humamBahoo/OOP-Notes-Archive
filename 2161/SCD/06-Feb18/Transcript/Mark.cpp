#include <iostream>
#include <iomanip>
using namespace std;
#include "Mark.h"
namespace sict{
  Mark::Mark(){
    outOf(100);
    totalMark(0);
  }
  Mark::Mark(int value){
    outOf(100);
    totalMark(value);
  }
  Mark::Mark(int value, int outOfValue){
    outOf(outOfValue);
    totalMark(value);
  }
  Mark::~Mark(){
  // un-comment to see the execution of the destructor
  /*  cout <<"{{{"<< totalMark_ << "/" << outOf_ 
      << " is going to die!}}}"<< endl;*/
  }
  int Mark::outOf()const{
    return outOf_;
  }
  Mark& Mark::outOf(int value){
    outOf_ = value;
    return *this;
  }
  int Mark::totalMark()const{
    return totalMark_;
  }
  Mark& Mark::totalMark(int value){
    totalMark_ = value;
    return *this;
  }

 
  int Mark::weightedMark()const{
    return int(totalMark() / double(outOf()) * 100);
  }
  //starts here
  char Mark::grade()const{
    char ret = 'F';
    int wm = weightedMark();
    if (wm >= 80){
      ret = 'A';
    }
    else if (wm >= 70){
      ret = 'B';
    }
    else if (wm >= 60){
      ret = 'C';
    }
    else if (wm >= 50){
      ret = 'D';
    }
    return ret;
  }
  double Mark::gpa()const{
    return 4.0 * totalMark() / outOf();
  }
  const Mark& Mark::display(int type)const{
    if (type == DSP_GRADE){
      std::cout << grade();
    }
    else if (type == DSP_GPA){
      std::cout <<setprecision(1) << fixed <<  gpa();
    }
    else if (type == DSP_MARK){
      std::cout << weightedMark();
    }
    else{
      std::cout << "Bad display type for a mark";
    }
    return *this;
  }

}

