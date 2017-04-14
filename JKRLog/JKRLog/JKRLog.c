//
//  JKRLog.c
//  JKRLog
//
//  Created by Joker on 2017/4/14.
//  Copyright © 2017年 Joker. All rights reserved.
//

#include "JKRLog.h"
#include <stdarg.h>

static void log_func(char *fmt, va_list args) {
    printf("[JKRLog] ");
    // 用一个参数代替变长参数表
    vprintf(fmt, args);
    printf("\n");
}

void jkr_log(char *fmt, ...) {
    // 用于获取不确定个数的参数列表
    va_list args;
    // 从走到右获取参数
    va_start(args, fmt);
    // 打印
    log_func(fmt, args);
    // 清空列表
    va_end(args);
}
