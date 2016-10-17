//
//  GridListCollectionViewCell.h
//  Grid-List
//
//  Created by LeeJay on 16/10/17.
//  Copyright © 2016年 Mob. All rights reserved.
//  代码下载地址https://github.com/leejayID/List2Grid

#import <UIKit/UIKit.h>

#define kCellIdentifier_CollectionViewCell @"GridListCollectionViewCell"

@class GridListModel;

@interface GridListCollectionViewCell : UICollectionViewCell

/**
 0：列表视图，1：格子视图
 */
@property (nonatomic, assign) BOOL isGrid;

@property (nonatomic, strong) GridListModel *model;

@end
