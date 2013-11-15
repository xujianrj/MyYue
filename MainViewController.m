//
//  MainViewController.m
//  Sonora
//
//  Created by Keys on 11/15/13.
//  Copyright (c) 2013 Sonora. All rights reserved.
//

#import "MainViewController.h"

@interface MainViewController ()

@end

@implementation MainViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Initialization code here.
    }
    return self;
}

- (IBAction)onChatEnter:(NSTextField*)sender {
    NSString * inputString=[sender stringValue];
    if ([inputString isEqualTo:@""]) {
        return;
    }
    NSString * content=[NSString stringWithFormat:@"%@\r\n",inputString ];
    [[[self.logTextView textStorage] mutableString] appendString:content];
    [(NSTextField *)sender setStringValue: @""];

}
@end
