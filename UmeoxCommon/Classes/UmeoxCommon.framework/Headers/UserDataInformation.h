//
//  UserDataInformation.h
//  test
//
//  Created by 陈晓伟 on 2021/1/12.
//  Copyright © 2021 陈晓伟. All rights reserved.
//

#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN

@interface UserDataInformation : NSObject
@property (nonatomic,strong) AppData *appData;
- (void)clearData;
+ (instancetype)sharedInstance;
@end

NS_ASSUME_NONNULL_END
