//
//  FlashlightViewController.h
//  Flashlight
//
//  Created by luowei on 14-5-21.
//  Copyright (c) 2014年 rootls. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FlashlightViewController : UIViewController

@property(readwrite) BOOL onOff;

- (IBAction)buttonClicked:(id)sender;

@end
