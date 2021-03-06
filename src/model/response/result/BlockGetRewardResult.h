//
//  BlockGetRewardResult.h
//  sdk-ios
//
//  Created by dxl on 2018/8/15.
//  Copyright © 2018 dxl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ValidatorRewardInfo.h"

@interface BlockGetRewardResult : NSObject
@property (nonatomic, assign) int64_t blockReward;
@property (nonatomic, strong) NSArray *rewardResults;
@end
