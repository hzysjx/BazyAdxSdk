#
# Be sure to run `pod lib lint BazyAdxSdk.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'BazyAdxSdk'
  s.version          = '2.2.9'
  s.summary          = 'BazyAdx iOS 聚合广告'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/hzysjx/BazyAdxSdk'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'jinwanhuijiama@foxmail.com' => 'jinwanhuijiama@foxmail.com' }
  s.source           = { :git => 'https://github.com/hzysjx/BazyAdxSdk.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

   s.ios.deployment_target = '11.0'
  s.swift_versions = ['5.0']

  s.source_files = 'BazyAdxSdk/Classes/**/*'
  s.public_header_files = ['BazyAdxSdk/Classes/**/BazyAdxSdk_iOS.h', 'BazyAdxSdk/Classes/**/BazyAdxAdRequest.h', 'BazyAdxSdk/Classes/**/BazyAdxSplashAd.h', 'BazyAdxSdk/Classes/**/BazyAdxInterstitialAd.h', 'BazyAdxSdk/Classes/**/BazyAdxRewardedAd.h', 'BazyAdxSdk/Classes/**/BazyAdxSdk.h', 'BazyAdxSdk/Classes/**/BazyAdxBannerView.h', 'BazyAdxSdk/Classes/**/BazyAdxNativeAdView.h', 'BazyAdxSdk/Classes/**/BazyAdxNativeAd.h', 'BazyAdxSdk/Classes/**/BazyAdxNativeAdManager.h']
  s.vendored_frameworks = 'BazyAdxSdk/Libraries/BazyAdxSdk.xcframework'
  s.preserve_paths = 'BazyAdxSdk/Libraries/BazyAdxSdk.xcframework/**/*'

  s.frameworks = "Foundation","UIKit","MobileCoreServices","CoreGraphics","Security","SystemConfiguration","CoreTelephony","AdSupport","CoreData","StoreKit","AVFoundation","MediaPlayer","CoreMedia","WebKit","Accelerate","CoreLocation","AVKit","MessageUI","QuickLook","AudioToolBox","JavaScriptCore","CoreMotion","Photos"
  s.libraries = "z","resolv.9","sqlite3","c++","c++abi"
  s.dependency 'ToBid-iOS-RC/GDTAdapter','5.5.6'
  s.dependency 'ToBid-iOS-RC/BaiduAdapter','5.5.6'
  s.dependency 'ToBid-iOS-RC/KSAdapter','5.5.6'
  s.dependency 'ToBid-iOS-RC/CSJAdapter','5.5.6'
  s.dependency 'ToBid-iOS-RC/GromoreAdapter','5.5.6'
  s.dependency 'ToBid-iOS-RC/AdScopeAdapter','5.5.6'
  s.static_framework = true
end
