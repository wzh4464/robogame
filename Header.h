//
//  Header.h
//  test
//
//  Created by 吴子晗 on 2017/10/3.
//  Copyright © 2017年 吴子晗. All rights reserved.
//

#ifndef Header_h
#define Header_h

#include <iostream>
#include <cstdlib>

typedef int Position;                       // 7个位置
typedef int Block;                          // 6个物块
typedef int Status;                         // 未写入-1，黑线1，非黑线零
typedef int Check;                          // 成功retur0，失败return-1，其他参见说明
typedef int Circle;                         // 循环变量
typedef int Task;                           // 任务队列 0-50
Check checker;                              // bug检测变量

#endif /* Header_h */
