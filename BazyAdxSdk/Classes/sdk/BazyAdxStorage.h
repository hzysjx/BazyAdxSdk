//
//  BazyAdxStorage.h
//  BazyAdxSdk-iOS
//
//  BazyAdx Ads Aggregation SDK - Strategy Storage
//

#import "BazyAdxAdStrategy.h"
#import <Foundation/Foundation.h>

@interface BazyAdxStorage : NSObject

/// 当前计点数
@property (nonatomic) int cps;

+ (instancetype)sharedInstance;

/// 保存广告位对应的策略
- (void)saveStrategy:(BazyAdxAdStrategy *)strategy forAdId:(NSString *)adId;

/// 获取广告位对应的策略
- (BazyAdxAdStrategy *)strategyForAdId:(NSString *)adId;

@end
