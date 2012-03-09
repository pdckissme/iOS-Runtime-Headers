/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerAccessItem : CoreDAVItem  {
    CoreDAVItemWithNoChildren *_accessLevel;
}

@property(retain) CoreDAVItemWithNoChildren * accessLevel;


- (id)description;
- (id)init;
- (void)dealloc;
- (id)copyParseRules;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)initWithAccess:(int)arg1;
- (void)setAccessLevel:(id)arg1;
- (id)accessLevel;

@end