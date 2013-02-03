/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSString, UIImage;

@interface EKEventOccurrenceListItem : UIView {
    unsigned int _isAllDay : 1;
    unsigned int _isBirthday : 1;
    unsigned int _tentative : 1;
    unsigned int _cancelled : 1;
    unsigned int _isEndDate : 1;
    unsigned int _indentsWithoutDot : 1;
    unsigned int _showsColors : 1;
    unsigned int _designator : 2;
    UIImage *_dot;
    BOOL _isSelected;
    NSString *_location;
    NSString *_timeString;
    NSString *_title;
}

@property(getter=isHighlighted) BOOL highlighted;

+ (void)_calculateWidths;
+ (void)_invalidateWidths;
+ (float)defaultHeight;
+ (float)hourWidth;
+ (float)timeWidthIncludingDots:(BOOL)arg1;

- (id)_selectedBackgroundImage;
- (void)dealloc;
- (unsigned int)designator;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)init;
- (id)initWithEvent:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 title:(id)arg2 location:(id)arg3 startDate:(double)arg4 allDay:(BOOL)arg5 tentative:(BOOL)arg6;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAllDay;
- (BOOL)isCancelled;
- (BOOL)isHighlighted;
- (void)setCancelled:(BOOL)arg1;
- (void)setDotColor:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setIndentsForMissingDot:(BOOL)arg1;
- (void)setIsAllDay:(BOOL)arg1;
- (void)setIsBirthday:(BOOL)arg1;
- (void)setIsEndDate:(BOOL)arg1;
- (void)setLocation:(id)arg1;
- (void)setShowsColors:(BOOL)arg1;
- (void)setStartDate:(double)arg1;
- (void)setTentative:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (BOOL)showDisclosure;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)title;
- (void)updateWithEvent:(id)arg1;

@end