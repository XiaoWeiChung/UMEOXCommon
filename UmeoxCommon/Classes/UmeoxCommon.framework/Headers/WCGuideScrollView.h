//
//  WCGuideScrollView.h
//  Wherecom
//
//  Created by Umeox_Wherecom on 15-3-23.
//  Copyright (c) 2015年 umeox. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol WCGuideScrollView <NSObject>

- (void)beginExperence;

@end


@interface WCGuideScrollView : UIScrollView

@property (nonatomic,assign)id <WCGuideScrollView> guDelegate;

- (id)initWithFrame:(CGRect)frame andGuideArray:(NSArray *)arr;

@end
