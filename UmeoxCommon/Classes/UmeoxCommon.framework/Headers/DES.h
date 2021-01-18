//
//  DES.h
//  HessianTest3
//
//  Created by feiniao on 13-6-5.
//  Copyright (c) 2013年 feiniao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonCryptor.h>

@interface DES : NSObject
//DES加密
+(NSString *) encrypt:(NSString *)plainText;

//DES解密
+(NSString *) decrypt:(NSString *)plainText;
@end
