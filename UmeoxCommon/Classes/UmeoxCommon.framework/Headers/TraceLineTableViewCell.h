//
//  TraceLineTableViewCell.h
//  Wherecom
//
//  Created by umeox on 14-10-11.
//  Copyright (c) 2014年 umeox. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TraceLineTableViewCell;
@protocol TraceLineTableViewCellDelegate <NSObject>

- (void)TraceLineChangedSuccess:(TraceLineTableViewCell*)cell isOn:(BOOL)on;
@optional
- (void)cantSetRunNotification:(TraceLineTableViewCell*)cell;
@end


@interface TraceLineTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UIImageView *sepImage;
@property (weak, nonatomic) IBOutlet UISwitch *SwitchTracLine;
@property (assign, nonatomic) BOOL isRun_isntAdmin;
@property (assign, nonatomic) id <TraceLineTableViewCellDelegate>delegate;

@end
