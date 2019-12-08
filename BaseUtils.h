//
// Created by bighead on 2019/12/8.
//

#ifndef FINAL_BASEUTILS_H
#define FINAL_BASEUTILS_H

template <class T>
class BaseUtils {
public:
    virtual T Add(){};
    virtual T Delete(){};
    virtual T Insert(){};
    virtual T Modify(){};
    virtual T ReadData(){};
};


#endif //FINAL_BASEUTILS_H
