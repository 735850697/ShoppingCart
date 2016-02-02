//
//  ShopCartCell.h
//  购物车
//
//  Created by beijingduanluo on 16/1/7.
//  Copyright © 2016年 beijingduanluo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ShopModel.h"
@class ShopCartCell;
@protocol shopCartDelegate <NSObject>

/**
 *  选择或取消商品
 *
 *  @param cell 当前cell
 *  @param btn  当前按钮
 */
-(void)shopCartDelegate:(ShopCartCell *)cell WithBtn:(UIButton *)btn;

/**
 *  选择数量
 *
 *  @param cell 当前cell
 *  @param btn  当前按钮
 */
-(void)shopCartDelegateNum:(ShopCartCell *)cell WithBtn:(UIButton *)btn;

@end
@interface ShopCartCell : UITableViewCell

/**
 *  商品名字
 */
@property(nonatomic,strong)UILabel *titleLabel;
/**
 *  商品图片
 */
@property(nonatomic,strong)UIImageView *headImgV;
/**
 *  数量增加按钮
 */
@property(nonatomic,strong)UIButton *addNumBtn;
/**
 *  数量减少按钮
 */
@property(nonatomic,strong)UIButton *cutNumBtn;

/**
 *  商品数量
 */
@property(nonatomic,strong)UILabel *numLabel;
/**
 *  选择按钮
 */
@property(nonatomic,strong)UIButton *selectBtn;
/**
 *  价格
 */
@property(nonatomic,strong)UILabel *priceLabel;
/**
 *  数量增加按钮
 */
@property(nonatomic,strong)UIButton *addShopBtn;
@property(nonatomic,strong)ShopModel *model;
@property(nonatomic,assign)id<shopCartDelegate>delegate;
@end
