//
//  NSMutableArray+Desc.h
//  Capsule
//
//  Created by saluman on 14-7-26.
//  Copyright (c) 2014年 umeox. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableArray (Desc)

+(NSMutableArray*)descArray:(NSArray*)array;

+ (NSMutableArray*)PositionExtract:(NSArray *)positionArr;

@end