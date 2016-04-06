//
//  FXJSortView.h
//  标签排序Demo
//
//  Created by 冯学杰 on 16/4/5.
//  Copyright © 2016年 冯学杰. All rights reserved.
//

#import <UIKit/UIKit.h>

//屏幕相关
#define  SCREEN_WIDTH   [UIScreen mainScreen].bounds.size.width
#define  SCREEN_HEIGHT  [UIScreen mainScreen].bounds.size.height

#define defaultCount 9

@interface FXJSortView : UIView

-(void)numOfTitleBtns:(NSArray *)arr;//创建Button

@property (nonatomic , strong) NSMutableArray *newtitleArr;

@property (nonatomic , strong) UIView *headView;

@property (nonatomic , strong) UIView *secondView;
@end

@interface MyButton : UIButton

@property (nonatomic , assign) BOOL isDown;

@end