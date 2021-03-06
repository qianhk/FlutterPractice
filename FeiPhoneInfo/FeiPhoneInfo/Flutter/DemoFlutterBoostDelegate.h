//
//  DemoBoostDelegate.h
//  FeiPhoneInfo
//
//  Created by KaiKai on 2021/8/1.
//  Copyright © 2021 TTPod. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <flutter_boost/FlutterBoost.h>

NS_ASSUME_NONNULL_BEGIN

@interface DemoFlutterBoostDelegate : NSObject <FlutterBoostDelegate>

@property (nonatomic, weak) UINavigationController *navController;

@end

NS_ASSUME_NONNULL_END
