//
//  NewClassTimeModel.h
//  WherecomOversea
//
//  Created by 刘侨池 on 2019/7/26.
//  Copyright © 2019 umeox. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NewClassTimeModel : NSObject

@property (nonatomic, assign) NSInteger cid; //禁用时段id
@property (nonatomic, strong) NSString *title; //标题
@property (nonatomic, strong) NSString *repeatStr; //重复周期
@property (nonatomic, assign) BOOL status; //开关
@property (nonatomic, assign) NSInteger holderId; //设备id
@property (nonatomic, strong) NSMutableArray *classTimes;

@end

//每一节课程
@interface ClassTimeItem : NSObject

@property (nonatomic, strong) NSString *tagName; //标签
@property (nonatomic, strong) NSString *startTime; //开始时间
@property (nonatomic, strong) NSString *endTime; //结束时间
@property (nonatomic, assign) BOOL status;

@end
