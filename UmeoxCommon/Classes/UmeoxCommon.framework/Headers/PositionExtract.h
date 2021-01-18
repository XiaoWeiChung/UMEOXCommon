//
//  PositionExtract.h
//  Capsule
//
//  Created by rogers on 14-7-8.
//  Copyright (c) 2014年 umeox. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PositionExtract : NSObject
{
    int x;
    int y;
    int buf;
}


- (id)initWithValue:(int)valueX valueY:(int)valueY bufValue:(int)bufValue;

@end
