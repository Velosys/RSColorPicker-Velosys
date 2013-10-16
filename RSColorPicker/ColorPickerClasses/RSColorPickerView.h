//
//  RSColorPickerView.h
//  RSColorPicker
//
//  Created by Ryan Sullivan on 8/12/11.
//  Copyright 2011 Freelance Web Developer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import <Accelerate/Accelerate.h>
#import "ANImageBitmapRep.h"

@class RSColorPickerView, BGRSLoupeLayer;

@protocol RSColorPickerViewDelegate <NSObject>
-(void)colorPickerDidChangeSelection:(RSColorPickerView*)cp;

@optional
-(void)colorPicker:(RSColorPickerView *)cp willChangeSelectionFromCurrentColor:(UIColor *)color; // fires just before the user begins picking a different color, sending the current color before a new selection.
-(void)colorPickerDidFinalizeSelection:(RSColorPickerView*)cp; // Fires when the user's finger lifts off.
@end

@interface RSColorPickerView : UIView

@property (nonatomic) BOOL cropToCircle;
@property (nonatomic) CGFloat brightness;
@property (nonatomic) CGFloat opacity;
@property (nonatomic) UIColor *selectionColor;
@property (nonatomic, weak) id <RSColorPickerViewDelegate> delegate;
@property (nonatomic, readonly) CGPoint selection;

-(UIColor*)colorAtPoint:(CGPoint)point; // Returns UIColor at a point in the RSColorPickerView

+(void)prepareForDiameter:(CGFloat)diameter;
+(void)prepareForDiameter:(CGFloat)diameter padding:(CGFloat)padding;
+(void)prepareForDiameter:(CGFloat)diameter scale:(CGFloat)scale;
+(void)prepareForDiameter:(CGFloat)diameter scale:(CGFloat)scale padding:(CGFloat)padding;
+(void)prepareForDiameter:(CGFloat)diameter scale:(CGFloat)scale padding:(CGFloat)padding inBackground:(BOOL)bg;
@end
