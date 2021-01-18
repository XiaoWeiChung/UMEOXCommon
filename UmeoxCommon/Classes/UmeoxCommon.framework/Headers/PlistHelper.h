//
//  PlistHelper.h
//  Wherecom
//
//  Created by umeox on 14-11-8.
//  Copyright (c) 2014年 umeox. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PlistHelper : NSObject

// get plist path
+ (NSString *)getPlistPath;
//write to plist
+ (void)writeToPlistWithKeys:(NSString *)keys and:(id)value;
//get data from plist
+ (id)getDataFromPlistWith:(NSString *)keys;

@end
