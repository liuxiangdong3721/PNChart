//
//  PNChartDelegate.h
//  PNChartDemo
//
//  Created by kevinzhow on 13-12-11.
//  Copyright (c) 2013年 kevinzhow. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol PNChartDelegate <NSObject>

/**
 * Callback method that gets invoked when the user taps on the chart line.
 */
- (void)userClickedOnLinePoint:(CGPoint)point lineIndex:(NSInteger)lineIndex;

/**
 * Callback method that gets invoked when the user taps on a chart line key point.
 */
- (void)userClickedOnLineKeyPoint:(CGPoint)point lineIndex:(NSInteger)lineIndex andPointIndex:(NSInteger)pointIndex;

/**
 * Callback method that gets invoked when the user taps on a chart bar.
 */
- (void)userClickedOnBarCharIndex:(NSInteger)barIndex;

@end