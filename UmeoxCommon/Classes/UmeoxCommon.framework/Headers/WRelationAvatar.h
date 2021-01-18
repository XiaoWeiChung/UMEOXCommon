//
//  WRelationAvatar.h
//  Wherecom
//
//  Created by Umeox_Wherecom on 15-2-3.
//  Copyright (c) 2015年 umeox. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WRelationAvatar;

@protocol WRelationAvatarDelegate <NSObject>

- (void)relationAvatarSelectRelationOfView:(WRelationAvatar *)view;

@end

@interface WRelationAvatar : UIView

@property (nonatomic, assign) id <WRelationAvatarDelegate> delegate;

@property (nonatomic, assign) BOOL isEdit;

@property (nonatomic, retain) UIImageView *avatar;

@property (nonatomic, retain) UITextField *relationTextField;

@property (nonatomic, retain) UILabel *relationLabel;

@property (nonatomic, assign) BOOL isSelected;

@property (nonatomic, retain) NSString *relation;

@property (nonatomic, assign) NSInteger rel;

- (instancetype)initWithFrame:(CGRect)frame andIsEdit:(BOOL)aEdit andRelation:(NSInteger)relation;

- (void)initWithIsEdit:(BOOL)aEdit andRelation:(NSInteger)relation;

@end
