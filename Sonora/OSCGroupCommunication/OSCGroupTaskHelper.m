//
//  OSCGroupTaskHelper.m
//  Artsmesh
//
//  Created by Sky Jia on 8/26/10.
//  Copyright 2010 Farefore. All rights reserved.
//

#import "OSCGroupTaskHelper.h"


@implementation OSCGroupTaskHelper

+(NSString*) OSCGroupClientGUIApplicationLaunchPath
{
	// "./OSCGroupClientGUI.app/Contents/MacOS/OSCGroupClientGUI";
//	NSString * path=[NSString stringWithFormat:@"%@/Contents/MacOS/%@",
//					 [[[NSBundle mainBundle] bundlePath] stringByReplacingOccurrencesOfString:@"/Artsmesh2.app" withString:[NSString stringWithFormat:@"/%@.app",kOSCGroupClientApplicationName]],
//					 kOSCGroupClientApplicationName];
    
    NSString *path=[NSString stringWithFormat:@"/Applications/Artsmesh Suite/%@.app/Contents/MacOS/%@",
kOSCGroupClientApplicationName,kOSCGroupClientApplicationName];
    
    NSLog(@"Path: %@",path);
	
	return path;
}

+(void) launchOSCGroupClientApplication{
	NSTask *task=[[NSTask alloc] init];
	
	// OSCGroupClientGUI.app/Contents/MacOS/OSCGroupClientGUI 
	
	[task setLaunchPath:[OSCGroupTaskHelper OSCGroupClientGUIApplicationLaunchPath]];
	
	[task setArguments:
	 [NSArray arrayWithObjects:	
	  @"xujian",
	  nil]];
	 
	[task launch];
}

+(void) quitOSCGroupClientApplication{
	// osascript -e 'quit app "OSCGroupClientGUI"
	
	NSTask *task=[[NSTask alloc] init];
	
	[task setLaunchPath:@"/usr/bin/osascript"];
	
	[task setArguments:
	 [NSArray arrayWithObjects:	
	  @"-e",
	  [NSString stringWithFormat:@"quit app \"%@\"", kOSCGroupClientApplicationName],
	  nil]];
	 
	[task launch];
}

@end
