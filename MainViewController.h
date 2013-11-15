//
//  MainViewController.h
//  Sonora
//
//  Created by Keys on 11/15/13.
//  Copyright (c) 2013 Sonora. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface MainViewController : NSViewController

@property (unsafe_unretained) IBOutlet NSTextView *logTextView;

- (IBAction)onChatEnter:(NSTextField*)sender;

@end
