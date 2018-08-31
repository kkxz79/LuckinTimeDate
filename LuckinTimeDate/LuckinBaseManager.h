//
//  LuckinBaseManager.h
//  LuckinTimeDate
//
//  Created by kkxz on 2018/8/31.
//  Copyright © 2018年 kkxz. All rights reserved.
//时间转换基类

#import <Foundation/Foundation.h>

@interface LuckinBaseManager : NSObject
- (NSString *)changeToStandardTime:(NSTimeInterval)timeInterval;
@end
