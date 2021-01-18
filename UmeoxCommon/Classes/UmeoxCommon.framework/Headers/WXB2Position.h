//
//  WXB2Position.h
//  Wherecom
//
//  Created by shun on 15/10/9.
//  Copyright © 2015年 umeox. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WXB2Position : NSObject

@property (nonatomic) long holderId;
@property (nonatomic) double longitude;                     // 经度
@property (nonatomic) double latitude;                      // 纬度
@property (nonatomic) int64_t locationTimeStamp;            // 日期
@property (nonatomic) NSInteger electric;                   // 电量
@property (nonatomic) NSInteger signalStrength;             // 信号强度
@property (nonatomic, copy) NSString* address;              // 地址
@property (nonatomic) NSInteger locationMode;               // 定位方式： 0 开启GPS定位 1 基站定位 2 WiFi定位
@property (nonatomic) NSInteger stepValue;                  // 计步值
@property (nonatomic) NSInteger calory;                     // 卡路里
@property (nonatomic) NSInteger distance;                   // 运动里程
@property (nonatomic) CGFloat radius;                       // 精确度
@property (nonatomic) NSString *rank;                       // 超越全国小朋友比例
@property (nonatomic) NSString *onlineStatus;               // 是否在线
@end
