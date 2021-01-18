//
//  HolderBean.h
//  Capsule
//
//  Created by rogers on 14-6-4.
//  Copyright (c) 2014年 umeox. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface HolderBean : NSObject<NSCopying>

@property(nonatomic,assign) int holderId;                   //设备Id
@property(nonatomic,assign) int frequency;                  //0:省电 1:正常 2:高 3:追踪模式
@property(nonatomic,assign) int monitorId;                  //监护者id
@property(nonatomic,assign) int choose;                     //0未选择、1选中
@property(nonatomic,assign) int isAdmin;                    //0为非主监护人，1为监护人
@property(nonatomic,assign) int audioTypes;                 //1:代表正常 2：代表震动 3：代表静音
@property(assign,nonatomic) int answer;                     //自动接听

@property(retain,nonatomic) NSString *holderName;           //用户的名称
@property(retain,nonatomic) NSString *avatar;               //头像地址
@property(retain,nonatomic) NSString *sim;                  //设备的sim号，即手机号码
@property(retain,nonatomic) NSString *imei;                 //胶囊imei号
@property(retain,nonatomic) NSString *deviceType;           //设备类型  1：代表定位糖一代  2：代表儿童手表
@property(retain,nonatomic) NSString *gender;               //性别
@property(retain,nonatomic) NSString *relation;             //与设备关系
@property(retain,nonatomic) NSString *height;               //身高
@property(retain,nonatomic) NSString *weight;               //体重
@property(retain,nonatomic) NSString *grade;                //年级
@property(retain,nonatomic) NSString *isMoveRemind;         //运动提醒
@property(retain,nonatomic) NSString *birthday;             //生日
@property(retain,nonatomic) NSString *staticOpen;           //静态提醒开关
@property(retain,nonatomic) NSString *startHours;           //静态提醒开始时间
@property(retain,nonatomic) NSString *endHours;             //静态提醒结束提醒时间
@property(retain,nonatomic) NSString *channelSms;           //设备是否兼容后缀广告短信 0:无需处理 1:需要处理
@property(retain,nonatomic) NSString *timeZone;             //时区设置
 
@property(retain,nonatomic) NSString *saleChannel;          //销售渠道号
@property(retain,nonatomic) NSString *fullAvatar;           //头像全地址

@property(retain,nonatomic) NSString *familyGroupId;        //家庭群组id
@property(retain,nonatomic) NSString *familyGroupName;      //家庭群组名称
@property(retain,nonatomic) NSString *familyGroupAvatar;    //家庭群组头像地址

- (void) fromJSON:(NSString*)json;
- (void) fromDictionary:(NSDictionary*)valueDic;
+(UIImage*)getHolderImage:(HolderBean*)holder;
+(UIImage*)getDefaultImageName:(HolderBean*)holder;


@end
