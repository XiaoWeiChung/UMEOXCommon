//
//  HolderPostionBean.h
//  Capsule
//
//  Created by rogers on 14-6-12.
//  Copyright (c) 2014年 umeox. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HolderPostionBean : NSObject

@property(nonatomic,assign) long id;
@property(nonatomic,assign) long holderId;
@property(nonatomic,assign) double longitude;//经度
@property(nonatomic,assign) double latitude;//纬度
@property(retain,nonatomic) NSString* date;// 日期
@property(retain,nonatomic) NSString* station;// 基站
@property(nonatomic,assign) int electric;// 电量
@property(nonatomic,assign) int outrange;// 是否超出范围
@property(retain,nonatomic) NSString* address;// 地址
@property(retain,nonatomic) NSString* locationMode;// 定位方式： 0 开启GPS定位 1 未开启GPS定位
@property(nonatomic,assign) int nearbyPosition;// 附近点数量
@property(retain,nonatomic) NSString* timeQuantum;// 时间段
@property(nonatomic,assign) long olderId;// 老位置id


//+ (BOOL)insertPostion:(HolderPostionBean *)position withHolderId:(long)holderId toDb:(NSString *)dbName;
//+ (BOOL)updatePostion:(HolderPostionBean *)position withHolderId:(long)holderId fromDb:(NSString *)dbName;
//+ (BOOL)deletePostion:(HolderPostionBean *)position withHolderId:(long)holderId fromDb:(NSString *)dbName;

@end
