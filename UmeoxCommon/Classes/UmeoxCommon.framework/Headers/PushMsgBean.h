//
//  PushMsgBean.h
//  Capsule
//
//  Created by rogers on 14-7-8.
//  Copyright (c) 2014年 umeox. All rights reserved.
//

#import <Foundation/Foundation.h>

// type
#define TYPE_INVITE_FOLLOW  5;// 邀请关注
#define TYPE_CURRENT_POSITION  12;// 当前位置
#define TYPE_RECORD  13;// 实时录音
#define TYPE_SOS  14;// sos提醒
#define TYPE_RANGE  15;// 超出围栏提醒
#define TYPE_APPLY_FOLLOW  4;// 申请关注
#define TYPE_ELECTRIC  17;// 低电量提醒
#define TYPE_UNBOUND  19;// 解除绑定
#define TYPE_POWEROFF_LOCATION  26;// 关机上报位置
#define TYPE_REPORTED_LOCATION  25;// 通话上报位置
@interface PushMsgBean : NSObject

@property(nonatomic,assign) long id;
@property(nonatomic,assign) int isRead;          // 记录是否已读 0未读 1已读;
@property(nonatomic,assign) int holderId;        // 设备Id
@property(nonatomic,assign) int type;            // 消息类型
@property(retain,nonatomic) NSString* nickName;  // 设备昵称
@property(retain,nonatomic) NSString* sim;       // 设备的sim号，即手机号码
@property(retain,nonatomic) NSString* imei;      // 设备imei号
@property(nonatomic,retain) NSString* longitude; // 经度
@property(nonatomic,retain) NSString* latitude;  // 纬度
@property(retain,nonatomic) NSString* date;      // 定位时间
@property(retain,nonatomic) NSString* msg;       // 消息描述
@property(retain,nonatomic) NSString* address;   // 地址信息
@property(retain,nonatomic) NSString* messageId; // 消息Id
@property(retain,nonatomic) NSString* tapurl;    // 录音地址没有就返回空
@property(retain,nonatomic) NSString* fullTapUrl;// 新版本的SOS录音文件不需要拼接，直接从服务器获取
@end
