//
//  DTableViewController.h
//  InterstellarNotes
//
//  Created by DUCHENGWEN on 2019/1/9.
//  Copyright © 2019年 liujiliu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MJRefresh.h"
#import "DPageModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface DTableViewController : DViewController

@property (nonatomic, strong) UITableView         *tableView;
@property (nonatomic, strong) DPageModel          *pageModel;

@property (nonatomic, strong)  MJRefreshHeader    *header;
@property (nonatomic, strong)  MJRefreshFooter    *footer;


/** 触发bottom刷新的距离，默认为TCTableViewDefaultBottmRefreshingMargin:800 */
@property (nonatomic) CGFloat footerRefresingBeginBottmMarign;
/** 结束网络刷新动画 */
-(void)endNetworkRequest;
/** 上啦加载 */
- (void)onFooterRefreshing;
/** 下拉刷新 */
- (void)onHeaderRefreshing;
/** 加载 广告 */
-(void)GDTadvertising;



@end

NS_ASSUME_NONNULL_END
