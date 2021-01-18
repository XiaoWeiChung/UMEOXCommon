//
//  NSURLContext.h
//  Wherecom
//
//  Created by Umeox_Wherecom on 15/4/17.
//  Copyright (c) 2015年 umeox. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSURLContext : NSObject


- (id)initURLContext:(NSString *)path oftype:(NSString *)type;

- (NSURLRequest *)getURLRequest;

@end
