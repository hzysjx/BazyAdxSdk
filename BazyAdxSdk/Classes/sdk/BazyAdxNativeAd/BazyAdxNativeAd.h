//
//  BazyAdxNativeAd.h
//  BazyAdxSdk-iOS
//
//  BazyAdx Ads Aggregation SDK - Native Ad
//

#import <Foundation/Foundation.h>
#import <WindMillSDK/WindMillSDK.h>

@interface BazyAdxNativeAd : NSObject

- (instancetype)initWithNativeAd:(WindMillNativeAd *)ad;
- (WindMillNativeAd *)underlyingNativeAd;

@end
