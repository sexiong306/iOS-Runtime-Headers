/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEUtilConfigurationClient : NSObject <NEConfigurationCommandHandling> {
    NSString *_clientName;
    NSString *_configFile;
    NSString *_configFileLast;
    NSMutableArray *_createdConfigurations;
    NEConfiguration *_currentConfiguration;
    NSMutableArray *_currentConfigurations;
    NSMutableArray *_identities;
    BOOL _isAlwaysOn;
    NEConfigurationManager *_manager;
}

@property (readonly) NSString *clientName;
@property (copy) NSString *configFile;
@property (copy) NSString *configFileLast;
@property (retain) NSMutableArray *createdConfigurations;
@property (retain) NEConfiguration *currentConfiguration;
@property (retain) NSMutableArray *currentConfigurations;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL enabled;
@property (readonly) unsigned int hash;
@property (retain) NSMutableArray *identities;
@property (readonly) BOOL isAlwaysOn;
@property (readonly) NEConfigurationManager *manager;
@property BOOL onDemandEnabled;
@property (copy) NSArray *onDemandRules;
@property (readonly) Class superclass;

+ (id)allClients;
+ (id)clientWithName:(id)arg1;
+ (void)removeClientWithName:(id)arg1;

- (void).cxx_destruct;
- (BOOL)addAppRuleWithParameters:(id)arg1 errorStr:(id*)arg2;
- (void)addIdentityProperties:(id)arg1 withDomain:(int)arg2;
- (BOOL)addOnDemandRuleWithParameters:(id)arg1 errorStr:(id*)arg2;
- (BOOL)addPathRuleWithParameters:(id)arg1 errorStr:(id*)arg2;
- (id)clientName;
- (id)configFile;
- (id)configFileLast;
- (BOOL)createConfigurationWithParameters:(id)arg1 errorStr:(id*)arg2;
- (id)createdConfigurations;
- (id)currentConfiguration;
- (id)currentConfigurations;
- (void)dealloc;
- (BOOL)enabled;
- (void)handleCommand:(int)arg1 forConfigWithName:(id)arg2 withParameters:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)identities;
- (id)initInternalWithClientName:(id)arg1;
- (id)initWithClientName:(id)arg1;
- (BOOL)isAlwaysOn;
- (BOOL)isIsAlwaysOn;
- (void)loadConfigurationWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadConfigurationsForceRefresh:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (id)manager;
- (BOOL)onDemandEnabled;
- (id)onDemandRules;
- (id)protocolForParameters:(id)arg1;
- (void)reloadIdentityListWithCompletionHandler:(id /* block */)arg1;
- (BOOL)removeAppRuleWithParameters:(id)arg1 errorStr:(id*)arg2;
- (BOOL)removeOnDemandRuleWithParameters:(id)arg1 errorStr:(id*)arg2;
- (BOOL)removePathRuleWithParameters:(id)arg1 errorStr:(id*)arg2;
- (BOOL)setAlwaysOnParameters:(id)arg1 errorStr:(id*)arg2;
- (BOOL)setCommonParameters:(id)arg1 errorStr:(id*)arg2;
- (void)setConfigFile:(id)arg1;
- (void)setConfigFileLast:(id)arg1;
- (void)setCreatedConfigurations:(id)arg1;
- (void)setCurrentConfiguration:(id)arg1;
- (void)setCurrentConfigurations:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)setFilterPluginWithParameters:(id)arg1 errorStr:(id*)arg2;
- (BOOL)setIPSecParameters:(id)arg1 errorStr:(id*)arg2;
- (void)setIdentities:(id)arg1;
- (void)setOnDemandEnabled:(BOOL)arg1;
- (void)setOnDemandRules:(id)arg1;
- (BOOL)setPPPParameters:(id)arg1 errorStr:(id*)arg2;
- (BOOL)setPasswordWithParameters:(id)arg1 errorStr:(id*)arg2;
- (BOOL)setPathControllerWithParameters:(id)arg1 errorStr:(id*)arg2;
- (BOOL)setProtocolWithParameters:(id)arg1 errorStr:(id*)arg2;
- (BOOL)setProviderTypeWithParameters:(id)arg1 errorStr:(id*)arg2;
- (BOOL)setProxyParameters:(id)arg1 errorStr:(id*)arg2;
- (BOOL)setProxyServer:(id)arg1 errorStr:(id*)arg2;
- (BOOL)setSharedSecretWithParameters:(id)arg1 errorStr:(id*)arg2;
- (BOOL)swapConfigurationTypeWithParameters:(id)arg1 errorStr:(id*)arg2;
- (BOOL)unsetAlwaysOnParameters:(id)arg1 errorStr:(id*)arg2;
- (BOOL)unsetCommonParameters:(id)arg1 errorStr:(id*)arg2;
- (BOOL)unsetIPSecParameters:(id)arg1 errorStr:(id*)arg2;
- (BOOL)unsetPPPParameters:(id)arg1 errorStr:(id*)arg2;
- (BOOL)unsetPasswordWithParameters:(id)arg1 errorStr:(id*)arg2;
- (BOOL)unsetProxyParameters:(id)arg1 errorStr:(id*)arg2;
- (BOOL)unsetProxyServer:(id)arg1 errorStr:(id*)arg2;
- (BOOL)unsetSharedSecretWithParameters:(id)arg1 errorStr:(id*)arg2;

@end
