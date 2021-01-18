//
//  UITextField+ChangePlaceholderColor.h
//  WherecomOversea
//
//  Created by 陈晓伟 on 2019/10/12.
//  Copyright © 2019 umeox. All rights reserved.
//

//#import <AppKit/AppKit.h>


#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UITextField (ChangePlaceholderColor)
- (void)setPlaceholderColor:(UIColor *)color placeText:(NSString *)placeText;
@end

NS_ASSUME_NONNULL_END
