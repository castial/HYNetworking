//
//  NSURLRequest+HYNetworkingMethods.h
//  HYNetworking
//
//  Created by work on 16/8/30.
//  Copyright © 2016年 hyyy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSURLRequest (HYNetworkingMethods)

/**
 *  @author hyyy, 16-08-30 17:08:26
 *
 *  @brief 增加一个requestParams属性
 */
@property (copy, nonatomic) NSDictionary *hy_requestParams;

@end
