//
//  LuckinBaseManager.h
//  LuckinTimeDate
//
//  Created by kkxz on 2018/8/31.
//  Copyright © 2018年 kkxz. All rights reserved.
//时间转换基类

#import <Foundation/Foundation.h>
//Bundle资源库是静态的，我们包含到包中的资源文件作为一个资源包是不参加项目编译的。也就意味着，bundle包中不能包含可执行的文件。它仅仅是作为资源，被解析成为特定的二进制数据。
@interface LuckinBaseManager : NSObject
- (NSString *)changeToStandardTime:(NSTimeInterval)timeInterval;
@end
