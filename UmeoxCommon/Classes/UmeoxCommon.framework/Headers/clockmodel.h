//
//  clockmodel.h
//  Wherecom
//
//  Created by Umeox_Wherecom on 15/9/1.
//  Copyright (c) 2015年 umeox. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface clockmodel : NSObject
@property (nonatomic,strong) NSString *alarmName;
@property (nonatomic,strong) NSString *repeatFlag;
@property (nonatomic,strong) NSString *repeatExpression;
@property (nonatomic,strong) NSString *alarmId;
@property (nonatomic,strong) NSString *alarmTime;
@property (nonatomic,strong) NSString *alarmEnabled;
@property (nonatomic,strong) NSString *iconId;
@end
