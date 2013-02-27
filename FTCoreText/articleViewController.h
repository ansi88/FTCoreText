//
//  articleViewController.h
//  FTCoreText
//
//  Created by Francesco Frison on 18/08/2011.
//  Copyright 2011 Fuerte International. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FTCoreTextView.h"

@interface articleViewController : UIViewController <FTCoreTextViewDelegate>

@property (nonatomic) UIScrollView *scrollView;
@property (nonatomic) FTCoreTextView *coreTextView;

@end
