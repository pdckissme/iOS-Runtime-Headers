/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSDate, NSMutableData, DAVSession, NSDictionary, NSMutableSet, NSString, NSMutableDictionary, NSData;

@interface DAVRequest : AYOperation  {
    struct __CFHTTPMessage { } *_requestMessage;
    struct __CFHTTPMessage { } *_responseMessage;
    struct __CFReadStream { } *_readStream;
    struct __CFReadStream { } *_bodyStream;
    struct { 
        int version; 
        void *info; 
        int (*retain)(); 
        int (*release)(); 
        int (*copyDescription)(); 
    } _clientContext;
    DAVSession *_session;
    NSString *_method;
    NSString *_uri;
    NSMutableSet *_bodyReaders;
    NSMutableSet *_acceptingReaders;
    NSMutableDictionary *_requestHeaders;
    NSDictionary *_headers;
    NSString *_httpStatus;
    unsigned int _httpStatusCode;
    NSMutableData *_httpResponseBody;
    NSMutableDictionary *_attemptDictionary;
    NSData *_requestBodyData;
    long long _contentLength;
    long long _readLength;
    long long _requestLength;
    long long _putLength;
    id _delegate;
    void *_davReserved;
    int _certificatePolicy;
    BOOL _useKerberos;
    BOOL _checkedServerTrust;
    NSDate *_dispatchDate;
}

@property(retain) NSDate * dispatchDate;

+ (BOOL)logRequestSynopsis;
+ (void)setLogRequestSynopsis:(BOOL)arg1;
+ (BOOL)logHTTPActivity;
+ (void)setLogHTTPActivity:(BOOL)arg1;
+ (id)requestWithSession:(id)arg1 method:(id)arg2 URI:(id)arg3;
+ (void)setAllowsAnyHTTPSCertificateForHost:(id)arg1 value:(BOOL)arg2;
+ (int)defaultCertificatePolicy;
+ (void)setDefaultCertificatePolicy:(int)arg1;
+ (id)multiStatusRequestWithURL:(id)arg1 method:(id)arg2;
+ (id)multiStatusRequestWithSession:(id)arg1 method:(id)arg2 path:(id)arg3;
+ (id)multiStatusRequestWithURL:(id)arg1 method:(id)arg2 responseClass:(Class)arg3;
+ (id)multiStatusRequestWithSession:(id)arg1 method:(id)arg2 path:(id)arg3 responseClass:(Class)arg4;
+ (id)propFindRequestWithURL:(id)arg1 withDepth:(id)arg2 lookingForProps:(id)arg3;
+ (id)propFindRequestWithSession:(id)arg1 withDepth:(id)arg2 URI:(id)arg3 lookingForProps:(id)arg4 responseReader:(id)arg5;
+ (id)propPatchRequestWithURL:(id)arg1 patchProperties:(id)arg2 deleteProperties:(id)arg3;
+ (id)propPatchRequestWithSession:(id)arg1 path:(id)arg2 patchProperties:(id)arg3 deleteProperties:(id)arg4;
+ (id)requestWithURL:(id)arg1 method:(id)arg2;
+ (id)requestWithSession:(id)arg1 method:(id)arg2 path:(id)arg3;
+ (void)initialize;
+ (id)multiStatusRequestWithSession:(id)arg1 method:(id)arg2 URI:(id)arg3;
+ (id)multiStatusRequestWithSession:(id)arg1 method:(id)arg2 URI:(id)arg3 responseClass:(Class)arg4;
+ (id)propFindRequestWithSession:(id)arg1 withDepth:(id)arg2 path:(id)arg3 lookingForProps:(id)arg4;
+ (id)propFindRequestWithSession:(id)arg1 withDepth:(id)arg2 URI:(id)arg3 lookingForProps:(id)arg4;
+ (BOOL)allowsAnyHTTPSCertificateForHost:(id)arg1;

- (BOOL)isRunLoopBased;
- (void)_readStreamEvent:(unsigned long)arg1;
- (void)endOperationWithError:(id)arg1;
- (long long)operationTotal;
- (struct __CFHTTPMessage { }*)lastResponseMessage;
- (BOOL)supportsDigest;
- (id)initPropFindWithURL:(id)arg1 withDepth:(id)arg2 lookingForProps:(id)arg3;
- (id)initPropFindWithSession:(id)arg1 withDepth:(id)arg2 path:(id)arg3 lookingForProps:(id)arg4;
- (id)initWithSession:(id)arg1 method:(id)arg2 path:(id)arg3;
- (void)finalizeOperation;
- (void)grantRequestWithLockToken:(id)arg1;
- (void)grantRequestWithLockTokens:(id)arg1;
- (BOOL)isNegoHeader:(id)arg1;
- (BOOL)initAuthGSS;
- (BOOL)stepAuthGSS:(id)arg1;
- (void)initBeforeDispatch;
- (id)responseBody;
- (id)responseBodyString;
- (long long)responseContentLength;
- (long long)readLength;
- (long long)putLength;
- (BOOL)useKerberos;
- (char *)getToken;
- (id)acceptingReaders;
- (id)dispatchDate;
- (void)setDispatchDate:(id)arg1;
- (struct __CFHTTPMessage { }*)lastRequestMessage;
- (int)attemptForHTTPCode:(int)arg1;
- (BOOL)setCertificatePolicyOnStream:(struct __CFReadStream { }*)arg1;
- (struct __CFReadStream { }*)newStreamWithRequestMessage:(struct __CFHTTPMessage { }*)arg1;
- (unsigned char)_bodyStreamOpen:(struct { int x1; int x2; }*)arg1 openComplete:(char *)arg2;
- (long)_bodyStreamRead:(char *)arg1 bufferLength:(long)arg2 error:(struct { int x1; int x2; }*)arg3 atEOF:(char *)arg4;
- (unsigned char)_bodyStreamCanRead;
- (id)_nonceFromAuthHeader:(id)arg1;
- (BOOL)_nonceIsStale:(id)arg1;
- (BOOL)_computeHeaders;
- (id)retryOperationAfterSSLError:(int)arg1;
- (void)displayCertPanel:(id)arg1;
- (BOOL)shouldContinueAfterCheckingServerTrust;
- (BOOL)_initHTTPRequest;
- (id)getErrorFromHTTPStatus;
- (int)certificatePolicy;
- (void)setCertificatePolicy:(int)arg1;
- (void)setTrustedCertsOnReadStream:(id)arg1;
- (void)setSSLPropertiesOnReadStream;
- (void)setRequestBodyWithString:(id)arg1 encoding:(unsigned int)arg2;
- (void)_initReaderWithClass:(Class)arg1;
- (id)initMultiStatusRequestWithSession:(id)arg1 method:(id)arg2 URI:(id)arg3;
- (id)initMultiStatusRequestWithURL:(id)arg1 method:(id)arg2 responseClass:(Class)arg3;
- (id)initMultiStatusRequestWithSession:(id)arg1 method:(id)arg2 path:(id)arg3 responseClass:(Class)arg4;
- (id)initMultiStatusRequestWithSession:(id)arg1 method:(id)arg2 URI:(id)arg3 responseClass:(Class)arg4;
- (id)initMultiStatusRequestWithSession:(id)arg1 method:(id)arg2 URI:(id)arg3 responseReader:(id)arg4;
- (void)_initForPropFindWithDepth:(id)arg1 lookingForProps:(id)arg2;
- (id)initPropFindWithSession:(id)arg1 withDepth:(id)arg2 URI:(id)arg3 lookingForProps:(id)arg4;
- (id)initPropFindWithSession:(id)arg1 withDepth:(id)arg2 URI:(id)arg3 lookingForProps:(id)arg4 responseReader:(id)arg5;
- (void)_initForPropPatchWithPatchDict:(id)arg1 deleteProperties:(id)arg2;
- (id)initPropPatchWithURL:(id)arg1 patchProperties:(id)arg2 deleteProperties:(id)arg3;
- (id)initPropPatchWithSession:(id)arg1 path:(id)arg2 patchProperties:(id)arg3 deleteProperties:(id)arg4;
- (id)initMultiStatusRequestWithURL:(id)arg1 method:(id)arg2;
- (id)initMultiStatusRequestWithSession:(id)arg1 method:(id)arg2 path:(id)arg3;
- (long long)requestLength;
- (id)method;
- (id)url;
- (id)password;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (id)uri;
- (id)responses;
- (void)setUsername:(id)arg1 andPassword:(id)arg2;
- (int)httpStatusCode;
- (void)setHeader:(id)arg1 withValue:(id)arg2;
- (id)requestHeaders;
- (id)initWithSession:(id)arg1 method:(id)arg2 URI:(id)arg3;
- (void)setRequestBodyWithData:(id)arg1;
- (id)initPropPatchWithSession:(id)arg1 URI:(id)arg2 patchProperties:(id)arg3 deleteProperties:(id)arg4;
- (void)addResponseBodyReader:(id)arg1;
- (id)responseHeaders;
- (void)dispatch;
- (id)httpStatus;
- (id)initWithURL:(id)arg1 method:(id)arg2;
- (id)username;
- (id)session;
- (long long)operationProgress;
- (void)setError:(id)arg1;
- (id)requestBody;

@end