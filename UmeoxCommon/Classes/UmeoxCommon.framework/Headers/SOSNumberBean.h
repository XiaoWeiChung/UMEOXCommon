//
//  SOSNumberBean.h
//  Wherecom
//
//  Created by umeox on 14-11-6.
//  Copyright (c) 2014年 umeox. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SOSNumberBean : NSObject

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *mobile;
@property (nonatomic, assign) NSInteger sort;           // 亲情键类型，1 为亲情键1， 2 为亲情键2
@property (nonatomic, assign) NSInteger origin;         // 0为非卫小宝用户，1为监护人，2为非监护人
@property (nonatomic, retain) NSString *familyNumberId;
@property (nonatomic, assign) NSInteger relation;       // 和小宝的关系

- (instancetype)initWithAttributes:(NSDictionary*)attributes;



@end
