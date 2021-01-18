//
//  HolderDetailBean.h
//  Capsule
//
//  Created by rogers on 14-7-3.
//  Copyright (c) 2014年 umeox. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HolderDetailBean : NSObject
@property(nonatomic,assign) int holderId;
@property(nonatomic,assign) int frequency;//0:省电 1:正常 2:高 3:追踪模式
@property(nonatomic,assign) int audioTypes;//1:代表正常 2：代表震动 3：代表静音
@property(retain,nonatomic) NSString* name;// 用户的名称
@property(retain,nonatomic) NSString* avatar;// 头像地址
@property(nonatomic,assign) int monitorId;
@property(nonatomic,assign) int choose;// 0未选择、1选中
@property(retain,nonatomic) NSString* sim;// 设备的sim号，即手机号码
@property(nonatomic,assign) int isAdmin;//0为非主监护人，1为监护人
@property(retain,nonatomic) NSString *imei;//胶囊imei号
@property(retain,nonatomic) NSString *birthday;//生日
@property(nonatomic,assign) int deviceId;//设备id
@property(retain,nonatomic) NSString *grade;//胶囊
@property(retain,nonatomic) NSString *qrcode;// 二维码
@property(retain,nonatomic) NSString *gender;//性别
@property(retain,nonatomic) NSString *weight;//体重
@property(retain,nonatomic) NSString *height;//身高
@end