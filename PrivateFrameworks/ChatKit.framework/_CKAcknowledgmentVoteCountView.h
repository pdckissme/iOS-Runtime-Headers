/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface _CKAcknowledgmentVoteCountView : UIView {
    UIImageView * _ackIconImageView;
    UILabel * _voteCountLabel;
}

@property (nonatomic, retain) UIImageView *ackIconImageView;
@property (nonatomic, retain) UILabel *voteCountLabel;

- (void).cxx_destruct;
- (id)ackIconImageView;
- (void)configureWithAcknowledgmentTally:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAckIconImageView:(id)arg1;
- (void)setVoteCountLabel:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)voteCountLabel;

@end
