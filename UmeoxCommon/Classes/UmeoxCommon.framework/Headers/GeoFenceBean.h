//
//  SecurityZoneBean.h
//  Capsule
//
//  Created by rogers on 14-6-20.
//  Copyright (c) 2014年 umeox. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GeoFenceBean : NSObject

@property(nonatomic,assign) int open;
@property(nonatomic,assign) double longitude;//经度
@property(nonatomic,assign) double latitude;//纬度
@property(nonatomic,assign) double radius;//半径
@property(retain,nonatomic) NSString *address;// 地址
@property(retain,nonatomic) NSString *relation;// 关系
@property(nonatomic,assign) long barrierId;//监护ID
@property(nonatomic,retain) NSString *railName;//区域名称
@property(nonatomic,retain) NSString *startHours;//进入区域时间
@property(nonatomic,retain) NSString *endHours;//离开区域时间
@property(nonatomic,retain) NSString *weekTime;//开启区域时期

@end
