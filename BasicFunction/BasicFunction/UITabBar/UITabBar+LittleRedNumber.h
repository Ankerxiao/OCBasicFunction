//
//  UITabBar+LittleRedNumber.h
//  BasicFunction
//
//  Created by 斯盛123 on 2018/5/9.
//  Copyright © 2018年 Anker. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITabBar (LittleRedNumber)

- (void)showBadgeOnItmIndex:(int)index tabBarNum:(int)tabbarNum unReadMessageCount:(NSInteger)count;
- (void)hideBadgeOnItemIndex:(int)index;

@end
