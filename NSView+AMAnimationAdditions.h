//
//  NSView+AMAnimationAdditions.h
//  MovingView
//
//  Created by Rohan Shah on 11/6/12.
//  Copyright 2012 Rohan Shah. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface NSView (AMAnimationAdditions) <NSAnimationDelegate>
- (IBAction)fadeOut:sender;
- (IBAction)fadeIn:sender;
- (void)animateToFrame:(NSRect)rect;
- (void)fadeToFrame:(NSRect)rect; // animates to supplied frame; fades in if view is hidden; fades out if view is visible

+ (void)setDefaultDuration:(NSTimeInterval)duration;
+ (void)setDefaultBlockingMode:(NSAnimationBlockingMode)mode;
+ (void)setDefaultAnimationCurve:(NSAnimationCurve)curve;
@end
