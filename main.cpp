//
//  main.cpp
//  test
//
//  Created by 吴子晗 on 2017/10/3.
//  Copyright © 2017年 吴子晗. All rights reserved.
//

#include "Algorithm.h"
#include "Moving.h"
#include "Reading.h"

Check ReadAll() {
    Position pos;
    for (pos = 1; pos < 8; pos++) {
        if (Movment.MoveTo(pos)) {
            return 1;                               //移动失败
        }
        if (Read.RememberThis()) {
            return 2;                               //读取失败
        }
    }
    return 0;
}// ReadAll
void BottomInitializing() {
    // from 底层
}



Check FormTaskQ() {
    Circle i;
    Check n;
    return n;
}

void setup() {
    BottomInitializing();
    if((checker = ReadAll())) {
        std::cout<<"Read Error!%d\n"<<checker;
        exit(1);
    }
    
}

void loop() {
    
}

int main(void) {
    setup();
    while (1) {
        loop();
    }
}//Arduino就是这个架构
