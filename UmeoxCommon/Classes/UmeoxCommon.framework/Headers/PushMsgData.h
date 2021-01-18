//
//  PushMsgData.h
//  Capsule
//
//  Created by rogers on 14-6-20.
//  Copyright (c) 2014年 umeox. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PushMsgData : NSObject

@property(retain,nonatomic) NSString* sim;// 胶囊sim卡号
@property(retain,nonatomic) NSString* name;// 胶囊昵称
@property(nonatomic,assign) double longitude;//经度
@property(nonatomic,assign) double latitude;//纬度
@property(retain,nonatomic) NSString* datatime;// 定位时间
@property(retain,nonatomic) NSString* address;// 地址
@property(retain,nonatomic) NSString* tapeurl;// 录音地址
@property(nonatomic,assign) long holderId;//
@property(nonatomic,assign) NSString* msgType;//消息类型

@end
