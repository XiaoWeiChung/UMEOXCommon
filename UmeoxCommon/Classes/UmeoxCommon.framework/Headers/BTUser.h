//
//  BTUser.h
//  BirdTalk
//
//  Created by feiniao on 13-6-26.
//  Copyright (c) 2013年 FlyingBirds. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BTUser : NSObject<NSCoding>
@property(retain,nonatomic) NSString *username;
@property(retain,nonatomic) NSString *password;
@property(retain,nonatomic) NSString *memberId;
@property(retain,nonatomic) NSString *nickName;
@property(retain,nonatomic) NSString *headImageUrl;
@property(retain,nonatomic) NSString *tel;

- (void) fromJSON:(NSString*)json;
- (void) fromDictionary:(NSDictionary*)valueDic;
@end
