/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLCompileOptionsInternal : MTLCompileOptions {
    BOOL  _debuggingEnabled;
    BOOL  _fastMathEnabled;
    BOOL  _glBufferBindPoints;
    unsigned int  _languageVersion;
    NSDictionary * _preprocessorMacros;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)debuggingEnabled;
- (id)description;
- (BOOL)fastMathEnabled;
- (BOOL)glBufferBindPoints;
- (unsigned int)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)languageVersion;
- (id)preprocessorMacros;
- (void)setDebuggingEnabled:(BOOL)arg1;
- (void)setFastMathEnabled:(BOOL)arg1;
- (void)setGlBufferBindPoints:(BOOL)arg1;
- (void)setLanguageVersion:(unsigned int)arg1;
- (void)setPreprocessorMacros:(id)arg1;

@end
