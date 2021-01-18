//
//  UrlBean.h
//  Capsule
//
//  Created by rogers on 14-6-27.
//  Copyright (c) 2014年 umeox. All rights reserved.
//

// 绑定设备配置

#import <Foundation/Foundation.h>

@interface UrlBean : NSObject


@property(retain,nonatomic) NSString *channel; //渠道号
@property(retain,nonatomic) NSString *code;   //随机码
@property(retain,nonatomic) NSString *country; //国家
@property(retain,nonatomic) NSString *ip;  //配置服务IP
@property(retain,nonatomic) NSString *port; //配置端口号
@property(retain,nonatomic) NSString *deviceType; //设备类别 1.胶囊 2.卫小宝 3.二代胶囊 4.二代卫小宝
@property(retain,nonatomic) NSString *channelSms;//是否为移动定制设备

@end
