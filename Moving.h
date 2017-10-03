//
//  Moving.h
//  test
//
//  Created by 吴子晗 on 2017/10/3.
//  Copyright © 2017年 吴子晗. All rights reserved.
//

#ifndef Moving_h
#define Moving_h

#include "Header.h"

class Moving {
private:
    Position CurrentPosition;                       // Current position for the vehicle
public:
    Position GetCurrentPosition() {
        return CurrentPosition;
    }// GetCurrentPosition
    Position EditCurrentPosition(Position pos) {
        CurrentPosition = pos;
        return pos;
    }// EditCurrentPosition
    Check MoveTo(Position pos) {
        CurrentPosition = pos;
        if (pos >= 8 || pos <= 0) {
            return -1;
        }
        return 0;
    }// MoveTo                                       // returning 0 represents success while returning -1 means not in range
};

Moving Movment;

#endif /* Moving_h */
