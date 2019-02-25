// Copyright 2017 Johan Henselmans. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
#import <Flutter/Flutter.h>
#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "BarcodeScannerViewControllerDelegate.h"

@interface QRCodeReaderPlugin : NSObject<FlutterPlugin, BarcodeScannerViewControllerDelegate>
@property (nonatomic, assign) UIViewController *hostViewController;
@property(nonatomic, retain) FlutterResult result;
@end
