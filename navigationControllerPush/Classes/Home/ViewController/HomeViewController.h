//
//  HomeViewController.h
//  navigationControllerPush
//
//  Created by lujh on 2017/7/11.
//  Copyright © 2017年 lujh. All rights reserved.
//

#import "BaseViewController.h"

@interface HomeViewController : BaseViewController
// 导航栏背景view
@property(nonatomic,strong)UIView *navigationBackView;
// tableView
@property(nonatomic,strong)UITableView *tableView;
// 记录tableView偏移量
@property (nonatomic, assign) CGFloat tableViewOffsetY;
// 定位view
@property (nonatomic, strong) UIView *locationView;
// navigationBar左侧按钮
@property (nonatomic, strong) UIButton *searchButton;
// navigationBar右侧按钮
@property (nonatomic, strong) UIButton *emailButton;
// 定位lable
@property(nonatomic,strong)UILabel *locationLabel;
// 定位地址size
@property(nonatomic,assign)CGSize locationSize;
// 定位地址
@property(nonatomic,copy)NSString *locationStr;
// tablev的头视图
@property (nonatomic, strong) UIView *headerView;
@end
