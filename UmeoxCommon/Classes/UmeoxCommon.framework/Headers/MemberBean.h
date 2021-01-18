//
//  MemberBean.h
//  Capsule
//
//  Created by rogers on 14-6-20.
//  Copyright (c) 2014年 umeox. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MemberBean : NSObject

@property(retain,nonatomic) NSString* holderName;//
@property(retain,nonatomic) NSString* nickName;// 
@property(retain,nonatomic) NSString* relation;// 关系
@property(retain,nonatomic) NSString* mobile;//号码
@property(retain,nonatomic) NSString* isAdmin;//是否为管理

@end
