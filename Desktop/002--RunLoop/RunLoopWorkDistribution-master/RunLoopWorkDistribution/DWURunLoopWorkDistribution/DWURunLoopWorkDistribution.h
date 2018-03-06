//
//  DWURunLoopWorkDistribution.h
//  RunLoopWorkDistribution
//
//  Created by Song Guoxiang on 9/19/15.
//  Copyright © 2015 Song Guoxiang. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef BOOL(^DWURunLoopWorkDistributionUnit)(void);

@interface DWURunLoopWorkDistribution : NSObject

@property (nonatomic, assign) NSUInteger maximumQueueLength;

+ (instancetype)sharedRunLoopWorkDistribution;

- (void)addTask:(DWURunLoopWorkDistributionUnit)unit withKey:(id)key;

- (void)removeAllTasks;

@end

@interface UITableViewCell (DWURunLoopWorkDistribution)

@property (nonatomic, strong) NSIndexPath *currentIndexPath;

@end
