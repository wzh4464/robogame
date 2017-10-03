//
//  Reading.h
//  test
//
//  Created by 吴子晗 on 2017/10/3.
//  Copyright © 2017年 吴子晗. All rights reserved.
//

#ifndef Reading_h
#define Reading_h

#include "Moving.h"
#include "Header.h"


class Reading{
private:
    Block CurrentState[8] = {-1};                        // -1 means unread
public:
    Block GetCurrentState(Position pos) {
        return CurrentState[pos] ;
    }// GetCurrentState
    Check EditCurrentState(Position pos, Block tag) {
        CurrentState [pos] = tag ;
        if (pos >= 8 || pos <= 0) {
            return 1;
        }
        if (tag >= 7 || tag < 0) {
            return 2;
        }
        return 0;
    }// EditCurrentState
    Block GetCurrentBlockNumber() {
        Block n = 0;
        return n;
        // from 底层
        // 输出范围 0 - 6, 0 代表没有物块
    }
    Check RememberThis() {
        return EditCurrentState(Movment.GetCurrentPosition(), GetCurrentBlockNumber());
    }
};

Reading Read;

#endif /* Reading_h */
