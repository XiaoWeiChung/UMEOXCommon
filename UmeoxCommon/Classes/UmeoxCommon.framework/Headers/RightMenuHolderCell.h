//
//  RightMenuHolderCell.h
//  Wherecom
//
//  Created by Umeox_Wherecom on 15/6/17.
//  Copyright (c) 2015年 umeox. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RightMenuHolderCell : UITableViewCell

@property (nonatomic, strong) UIImageView *avatarImage;
@property (nonatomic, strong) UILabel *nameLabel;

- (void)hasNewMessage:(BOOL)has;
- (void)isSelected:(BOOL)sel;

@end
