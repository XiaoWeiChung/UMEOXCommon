//
//  AppData.h
//  BirdTalk
//
//  Created by feiniao on 13-6-26.
//  Copyright (c) 2013年 FlyingBirds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BTUser.h"

@interface AppData : NSObject

@property (strong, nonatomic) NSMutableArray *holderList;
@property (strong, nonatomic) BTUser *user;
@property (strong, nonatomic) HolderBean *holder;
@property (strong, nonatomic) UINavigationController *rootNavController;

@end
