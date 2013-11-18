//
//  Preferences.h
//  Artsmesh
//
//  Created by WANG Hailei on 8/10/10.
//  Copyright 2010 Farefore Co. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <CoreAudio/CoreAudio.h>
#import "ArtsmeshConstDefinition.h"
//#import "ChatTaskHelper.h"

@interface PreferencesDataSource : NSObject

@property (weak) NSArray * driverOptions;
@property (weak) NSArray * jackServerSampleRatePreferenceOptions;
@property (weak) NSArray * jackServerBufferSizePreferenceOptions;
@property (weak) NSArray * ipAddressVersionPreferenceOptions;
@property (weak) NSArray * iChatJabberAccountPreferenceOptions;
@property (weak) NSArray * coreAudioInputDeviceOptions;
@property (weak) NSArray * coreAudioOutputDeviceOptions;

- (void) prepareDriverOptions;
- (void) prepareJackServerSampleRatePreferenceOptions;
- (void) prepareJackServerBufferSizePreferenceOptions;
- (void) prepareIPAddressVersionPreferenceOptions;
//- (void) prepareiChatJabberAccountPreferenceOptions;
- (void) prepareCoreAudioDeviceOptions;

UInt32 GetVolumeDeviceCanBeDefaultDevice(AudioDeviceID inDevice, bool inIsInput);

@end
