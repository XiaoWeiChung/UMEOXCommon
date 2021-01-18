//
//  CustomDetailViewCell.h
//  Wherecom
//
//  Created by umeox on 14-11-15.
//  Copyright (c) 2014年 umeox. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CustomDetailViewCell;

@protocol CustomDetailViewCellDelegate <NSObject>

- (void)exchangeGrade:(CustomDetailViewCell*)cell isBoy:(BOOL)boy;

@end

@interface CustomDetailViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (nonatomic,assign) BOOL isBoy;
@property (weak, nonatomic) IBOutlet UIButton *boyGrade;
@property (weak, nonatomic) IBOutlet UIButton *girlGrade;

@property (nonatomic,assign)id <CustomDetailViewCellDelegate>delegate;

@end
