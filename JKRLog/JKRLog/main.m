//
//  main.m
//  JKRLog
//
//  Created by Joker on 2017/4/14.
//  Copyright © 2017年 Joker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JKRLog.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        jkr_log("int:%d, float:%f ,char:%s", 6, 6.0, "Six");
    }
    return 0;
}
