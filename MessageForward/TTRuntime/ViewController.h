//
//  ViewController.h
//  TTRuntime
//
//  Created by 黑花白花 on 2017/2/25.
//  Copyright © 2017年 黑花白花. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol ViewController <NSObject>

@optional
- (void)doAnything;
- (void)doSomething;

@end

@interface ViewController : UIViewController


@end

