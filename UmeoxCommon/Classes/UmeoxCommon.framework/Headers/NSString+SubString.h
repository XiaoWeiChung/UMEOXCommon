//
//  NSString+SubString.h
//  Wherecom
//
//  Created by Umeox_Wherecom on 15/6/4.
//  Copyright (c) 2015年 umeox. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (SubString)

//字符长度限制
- (BOOL)stringLengthValidateWithLimitLength:(NSInteger)maxLength;
//中英字符截取
- (NSString *)substringWithLength:(NSInteger)maxLength;
@end
