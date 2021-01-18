//
//  ZYTextField.h
//  LMJS
//
//  Created by Huayra on 15/9/18.
//  Copyright © 2015年 Huayra. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZYTextField : UITextField

- (void)addWordsLimit:(NSInteger)limitCount;
- (NSInteger)countWordsWithoutSpace;

@end
