//
//  LuckinBaseManager.m
//  LuckinTimeDate
//
//  Created by kkxz on 2018/8/31.
//  Copyright © 2018年 kkxz. All rights reserved.
//

#import "LuckinBaseManager.h"

@implementation LuckinBaseManager
- (NSString *)changeToStandardTime:(NSTimeInterval)timeInterval
{
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setDateFormat:@"yyyy-MM-dd HH:mm:ss"];
    NSString *time = [dateFormatter stringFromDate:[NSDate dateWithTimeIntervalSince1970:timeInterval]];
    return time;
}

@end
