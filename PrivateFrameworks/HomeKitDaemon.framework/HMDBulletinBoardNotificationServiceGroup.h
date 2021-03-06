/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBulletinBoardNotificationServiceGroup : NSObject <HMFDumpState, HMFLogging, HMFMessageReceiver, NSSecureCoding> {
    NSSet * _associatedServiceUUIDs;
    NSArray * _associatedServices;
    NSHashTable * _associatedServicesTable;
    BOOL  _associationEvaluatedFirstTime;
    HMDBulletinBoardNotification * _bulletinBoardNotification;
    NSSet * _cameraProfileUUIDs;
    NSArray * _cameraProfiles;
    NSHashTable * _cameraProfilesTable;
    HMFMessageDispatcher * _msgDispatcher;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSUUID * _targetUUID;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSDictionary *actionContext;
@property (nonatomic, retain) NSSet *associatedServiceUUIDs;
@property (nonatomic, retain) NSArray *associatedServices;
@property (nonatomic, readonly, copy) NSHashTable *associatedServicesTable;
@property (nonatomic) BOOL associationEvaluatedFirstTime;
@property (nonatomic, readonly) HMDBulletinBoardNotification *bulletinBoardNotification;
@property (nonatomic, retain) NSSet *cameraProfileUUIDs;
@property (nonatomic, retain) NSArray *cameraProfiles;
@property (nonatomic, readonly, copy) NSHashTable *cameraProfilesTable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *targetUUID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_gatherServices:(BOOL)arg1;
- (void)_handleBulletinBoardNotificationServiceGroupRequest:(id)arg1;
- (BOOL)_isAlarmService:(id)arg1;
- (BOOL)_isNotificationGeneratingService:(id)arg1;
- (BOOL)_isSupportedAssociationService:(id)arg1;
- (id)_prepareServiceGroupPayload;
- (void)_registerNotificationHandlers;
- (void)_sendNotification:(id)arg1;
- (void)_updateAssociatedService:(id)arg1 associatedCameras:(id)arg2 forceGather:(BOOL)arg3;
- (void)_updateAssociatedServicesTable:(id)arg1;
- (void)_updateCameraProfilesTable:(id)arg1;
- (id)actionContext;
- (id)associatedServiceUUIDs;
- (id)associatedServices;
- (id)associatedServicesTable;
- (BOOL)associationEvaluatedFirstTime;
- (id)bulletinBoardNotification;
- (id)cameraProfileUUIDs;
- (id)cameraProfiles;
- (id)cameraProfilesTable;
- (void)configureBulletinBoardNotification:(id)arg1;
- (void)configureMsgDispatcher:(id)arg1;
- (void)dealloc;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (void)gatherServices;
- (id)init;
- (id)initWithBulletinBoardNotification:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)propertyQueue;
- (void)setAssociatedServiceUUIDs:(id)arg1;
- (void)setAssociatedServices:(id)arg1;
- (void)setAssociatedServicesTable:(id)arg1;
- (void)setAssociationEvaluatedFirstTime:(BOOL)arg1;
- (void)setCameraProfileUUIDs:(id)arg1;
- (void)setCameraProfiles:(id)arg1;
- (void)setCameraProfilesTable:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setPropertyQueue:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)targetUUID;
- (id)workQueue;

@end
