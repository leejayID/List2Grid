//
//  GridListModel.h
//  Grid-List
//
//  Created by LeeJay on 16/10/17.
//  Copyright © 2016年 Mob. All rights reserved.
//  代码下载地址https://github.com/leejayID/List2Grid

#import <Foundation/Foundation.h>

@interface GridListModel : NSObject

@property (nonatomic, strong) NSString *imageurl;
@property (nonatomic, strong) NSString *wname;
@property (nonatomic, assign) float jdPrice;
@property (nonatomic, assign) int totalCount;

@end
