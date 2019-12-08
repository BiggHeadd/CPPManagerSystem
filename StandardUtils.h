//
// Created by bighead on 2019/12/8.
//

#ifndef FINAL_STANDARDUTILS_H
#define FINAL_STANDARDUTILS_H

#include "BaseUtils.h"
#include "ViewUtils.h"
#include "AnalysisUtils.h"
template <class T>
class StandardUtils :public BaseUtils<T>, public ViewUtils<T>, public AnalysisUtils<T>{

};


#endif //FINAL_STANDARDUTILS_H
