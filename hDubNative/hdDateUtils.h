//
//  hdDateUtils.h
//  hDubNative
//
//  Created by printfn on 9/02/13.
//  Copyright (c) 2013 Kwiius. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface hdDateUtils : NSObject

+ (NSDate *)correctDate:(NSDate *)date;
+ (NSDate *)correctDateInverted:(NSDate *)date;
+ (BOOL)isWeekend:(NSDate *)date;
+ (NSString *)formatDate:(NSDate *)date;
+ (NSDate *)dateAtMidnight:(NSDate *)date;

@end
