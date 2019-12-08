//
// Created by bighead on 2019/12/8.
//

#ifndef FINAL_SYSTEMBASE_H
#define FINAL_SYSTEMBASE_H

template <class T>
class SystemBase {
public:
    virtual T run(){};
    virtual T connect(){};
};


#endif //FINAL_SYSTEMBASE_H
