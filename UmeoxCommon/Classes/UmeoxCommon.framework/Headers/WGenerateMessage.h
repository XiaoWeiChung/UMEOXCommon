//
//  WGenerateMessage.h
//  Wherecom
//
//  Created by Umeox_Wherecom on 15-4-9.
//  Copyright (c) 2015年 umeox. All rights reserved.
//

//================短信命令生成==============

#import <Foundation/Foundation.h>


@interface WGenerateMessage : NSObject
//服务器配置
+ (NSString *)sendServiceAccessories:(UrlBean *)urlBean registeCode:(NSString *)code imei:(NSString *)imei;
//设置定位频率
+ (NSString *)sendFrequency:(NSString *)fre username:(NSString *)username channelSms:(NSString *)channelSms;
//定位频率
+ (NSString *)sendLocate:(NSString *)locateStr username:(NSString *)username channelSms:(NSString *)channelSms;
//设置亲情号码
+ (NSString *)sendSosNumber:(NSInteger)sort username:(NSString *)username sosMobile:(NSString *)mobile channelSms:(NSString *)channelSms;
//绑定账号
+ (NSString *)sendCode:(NSString *)code username:(NSString *)username channelSms:(NSString *)channelSms;

@end
