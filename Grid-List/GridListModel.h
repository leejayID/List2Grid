//
//  GridListModel.h
//  Grid-List
//
//  Created by LeeJay on 16/10/17.
//  Copyright © 2016年 Mob. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GridListModel : NSObject

@property (nonatomic, strong) NSString *imageurl;
@property (nonatomic, strong) NSString *wname;
@property (nonatomic, assign) float jdPrice;
@property (nonatomic, assign) int totalCount;

@end
