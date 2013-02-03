/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSConditionLock, NSMutableDictionary;

@interface MFGenericAttachmentStore : MFWebAttachmentSource {
    NSMutableDictionary *_attachmentsByURL;
    BOOL _didCancelImageScalingOperations;
    NSUInteger _imagesSize;
    BOOL _outgoing;
    NSInteger _priority;
    struct dispatch_queue_s { } *_scalingQueue;
    NSConditionLock *_scalingThrottle;
    NSUInteger _size;
}

- (void)_delayedSetScalingEnabled;
- (void)_enqueueAttachment:(id)arg1 forScalingCalculationFromImageSource:(struct CGImageSource { }*)arg2 withFlags:(NSUInteger)arg3;
- (BOOL)addAttachment:(id)arg1 renamingContentID:(BOOL)arg2;
- (id)attachmentForURL:(id)arg1;
- (id)attachments;
- (void)cancelImageScalingOperations;
- (void)dealloc;
- (BOOL)didCancelImageScalingOperations;
- (id)initOutgoing;
- (NSInteger)priority;
- (void)removeAttachmentsForURLs:(id)arg1;
- (void)setPriority:(NSInteger)arg1;
- (void)setScalingThrottled:(BOOL)arg1;
- (unsigned long)totalSizeForScale:(NSInteger)arg1;

@end