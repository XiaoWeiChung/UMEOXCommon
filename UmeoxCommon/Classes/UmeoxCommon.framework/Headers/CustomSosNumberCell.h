//
//  CustomSosNumberCell.h
//  Wherecom
//
//  Created by umeox on 14-11-6.
//  Copyright (c) 2014年 umeox. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CustomSosNumberCell : UITableViewCell

@property (nonatomic, retain) SOSNumberBean *sosBean;
@property (nonatomic, retain) MemberBean *memBean;

//@property (weak, nonatomic) IBOutlet UIImageView *typeImage;
@property (weak, nonatomic) IBOutlet UILabel *nickname;
@property (weak, nonatomic) IBOutlet UILabel *mobile;
@property (weak, nonatomic) IBOutlet UIImageView *relationAvatar;
@property (weak, nonatomic) IBOutlet UIImageView *isFollowImage;
@property (weak, nonatomic) IBOutlet UIImageView *familyImage;
@property (weak, nonatomic) IBOutlet UIImageView *isFollowImageTwo;
@property (weak, nonatomic) IBOutlet UIImageView *isFollowImageThree;

@end
