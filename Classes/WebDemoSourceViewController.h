//
//  WebDemoSourceViewController.h
//  ViewControllerDemo
//
//  Created by Johannes Fahrenkrug on 28.10.09.
//  Copyright 2009 Springenwerk. All rights reserved.
//

#import <UIKit/UIKit.h>
@class WebDemo;


@interface WebDemoSourceViewController : UIViewController {
	WebDemo *webDemo;
	IBOutlet UITextView *textView;
}

- (id)initWithWebDemo:(WebDemo *)aWebDemo;

@end
