//
//  SystemMsgBean.h
//  Capsule
//
//  Created by rogers on 14-7-11.
//  Copyright (c) 2014年 umeox. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SystemMsgBean : NSObject

@property(nonatomic,assign) long id; //数据库id
@property(nonatomic,assign) int memberId;//记录是否已读 0未读 1已读;
@property(nonatomic,assign) int type;//消息类型
@property(nonatomic,assign) int messageId;//消息ID
@property(nonatomic,assign) int adminId;
@property(nonatomic,assign) int state;//默认状态0未处理 1 已同意或者已接受 -1 已拒绝忽略
@property(retain,nonatomic) NSString* remark;// 附加信息
@property(retain,nonatomic) NSString* address;// 地址
@property(retain,nonatomic) NSString* date;// 时间
@property(retain,nonatomic) NSString* imei;// imei
@property(retain,nonatomic) NSString* memberMobile;//
@property(retain,nonatomic) NSString* adminMobile;//监护人账号
@property(retain,nonatomic) NSString* barrierId;//监护id
@property(retain,nonatomic) NSString* latitude;//纬度
@property(retain,nonatomic) NSString* longitude;//经度
@property(retain,nonatomic) NSString* radius;//半径

@end
