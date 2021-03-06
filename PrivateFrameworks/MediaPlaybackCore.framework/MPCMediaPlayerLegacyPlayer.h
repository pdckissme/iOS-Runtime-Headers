/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCMediaPlayerLegacyPlayer : MPCPlayer <MPNowPlayingPlaybackQueueDataSource, MPRemoteCommandDelegate_Private> {
    NSMapTable * _avItemToPlayerItemWeakMap;
    MPCMediaPlayerLegacyItemContainer * _currentContainer;
    MPCMediaPlayerLegacyItem * _currentItem;
    MPCPlaybackIntent * _fallbackPlaybackIntent;
    BOOL  _hasReceivedAddPlaybackIntent;
    BOOL  _iAmTheiPod;
    BOOL  _isRestoringPlaybackState;
    BOOL  _mediaRemoteSync;
    MPCMediaPlayerLegacyAVController * _player;
    MPCMediaPlayerLegacyNowPlayingObserver * _playerObserver;
    MPCRadioPlaybackCoordinator * _radioPlaybackCoordinator;
    MPCMediaPlayerLegacyReportingController * _reportingController;
}

@property (nonatomic, readonly) MPAVController *avController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MPCPlaybackIntent *fallbackPlaybackIntent;
@property (nonatomic, readonly) unsigned int hardQueueItemCount;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL iAmTheiPod;
@property (getter=isMediaRemoteSyncing, nonatomic, readonly) BOOL mediaRemoteSync;
@property (nonatomic, retain) MPCMediaPlayerLegacyAVController *player;
@property (nonatomic, retain) MPCMediaPlayerLegacyNowPlayingObserver *playerObserver;
@property (nonatomic, retain) MPCRadioPlaybackCoordinator *radioPlaybackCoordinator;
@property (nonatomic, retain) RadioRecentStationsController *recentStationsController;
@property (nonatomic, retain) MPCMediaPlayerLegacyReportingController *reportingController;
@property (readonly) Class superclass;

+ (Class)queueRequestOperationClass;

- (void).cxx_destruct;
- (void)_availableRoutesDidChangeNotification:(id)arg1;
- (void)_contentsDidChangeNotification:(id)arg1;
- (void)_currentItemChangedNotification:(id)arg1;
- (void)_currentItemInvalidedCommandsNotification:(id)arg1;
- (void)_handleCreateRadioStationCommandEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_handleInsertIntoQueueCommandEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_handleSetQueueCommandEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_playbackStateChangedNotification:(id)arg1;
- (void)_playerDidPausePlaybackForLeaseEndNotification:(id)arg1;
- (id)_playerItemForAVItem:(id)arg1;
- (void)_playerPlaybackErrorNotification:(id)arg1;
- (void)_refreshIAmTheiPod;
- (void)_reloadPlayerWithPlaybackContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_repeatShuffleTypeChangedNotification:(id)arg1;
- (BOOL)_shouldVendContentItemForOffset:(int)arg1;
- (void)_soundCheckEnabledChangedNotification:(id)arg1;
- (void)_updateSupportedCommands;
- (id)activeRouteName;
- (void)addPlaybackIntent:(id)arg1 withOptions:(unsigned int)arg2 completion:(id /* block */)arg3;
- (id)avController;
- (void)clearPlaybackQueueWithCompletion:(id /* block */)arg1;
- (id)contentItemForOffset:(int)arg1;
- (id)contentItemIdentifierForOffset:(int)arg1;
- (id)currentContainer;
- (id)currentItem;
- (void)dealloc;
- (id)fallbackPlaybackIntent;
- (unsigned int)hardQueueItemCount;
- (BOOL)iAmTheiPod;
- (id)init;
- (BOOL)isMediaRemoteSyncing;
- (BOOL)isRestoringPlaybackState;
- (void)performCommandEvent:(id)arg1 completion:(id /* block */)arg2;
- (id)player;
- (id)playerObserver;
- (void)preservePlaybackStateImmediately;
- (id)radioPlaybackCoordinator;
- (id)recentStationsController;
- (void)recordLyricsViewEvent:(id)arg1;
- (void)registerWithPlaybackLeaseController:(id)arg1;
- (BOOL)remoteCommand:(id)arg1 isEnabledForContentItemIdentifier:(id)arg2;
- (BOOL)remoteCommand:(id)arg1 isSupportedForContentItemIdentifier:(id)arg2;
- (id)reportingController;
- (void)restorePlaybackStateCompletionHandler:(id /* block */)arg1;
- (void)schedulePlaybackStatePreservation;
- (void)setFallbackPlaybackIntent:(id)arg1;
- (void)setIAmTheiPod:(BOOL)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerObserver:(id)arg1;
- (void)setRadioPlaybackCoordinator:(id)arg1;
- (void)setRecentStationsController:(id)arg1;
- (void)setReportingController:(id)arg1;
- (void)startMediaRemoteSync;
- (int)state;
- (void)stopMediaRemoteSync;
- (id)videoLayer;

@end
