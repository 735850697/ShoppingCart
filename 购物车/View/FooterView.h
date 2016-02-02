//
//  FooterView.h
//  购物车
//
//  Created by beijingduanluo on 16/1/7.
//  Copyright © 2016年 beijingduanluo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ShopModel.h"
@class FooterView;
@protocol footerViewDelegate <NSObject>

/**
 *  点击全选按钮
 *
 *  @param footer 当前区的foot
 *  @param btn    全选按钮
 */
-(void)footerViewdelegate:(FooterView *)footer AndBtn:(UIButton *)btn;

@end

@interface FooterView : UITableViewHeaderFooterView
@property(nonatomic,strong)UIButton *allSelectBtn;
@property(nonatomic,strong)UILabel *totalPriceLabel;
@property(nonatomic,assign)BOOL ison;
@property(nonatomic,assign)id<footerViewDelegate>delegate;
@property(nonatomic,strong)ShopModel *model;

@end
