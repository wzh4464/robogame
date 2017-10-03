//
//  Algorithm.h
//  test
//
//  Created by 吴子晗 on 2017/10/3.
//  Copyright © 2017年 吴子晗. All rights reserved.
//

#ifndef Algorithm_h
#define Algorithm_h

#include "Header.h"

class Algorithm {
private:
    Position TaskQueue[50] = {-1};                  // 指导小车如何行进的任务队列 -1 表示完事了
public:
    Position GetTaskQueue(Task tk) {
        return TaskQueue[tk];
    }
    Check EditTaskQueue(Task tk, Position pos) {
        TaskQueue[tk] = pos;
        if (tk  >50 || tk <= 0) {
            return 1; 
        }
    }
};

Algorithm alg;

#endif /* Algorithm_h */
