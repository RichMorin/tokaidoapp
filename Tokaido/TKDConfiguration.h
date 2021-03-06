#import <Foundation/Foundation.h>

@interface TKDConfiguration : NSObject

+(NSString *) rubyVersion;
+(NSString *) rubyNamespace;
+(NSString *) applicationName;
+(NSString *) bundlePath;
+(NSString *) applicationSupportDirectoryPath;
+(NSString *) tokaidoApplicationsConfigurations;
+(NSString *) assetsDirectoryInstalledPath;
+(NSString *) tokaidoLocalHomeDirectoryPath;

+(NSString *) temporalWorkingSpace;

@end

@interface TKDConfiguration(BundledFilesAndPaths)
+(NSArray *) rubiesBundled;
+(NSString *) rubyExecutableInstalledFile;
+(NSString *) bundledGemsFile;
+(NSString *) bundledBinariesFile;
+(NSString *) setupScriptGemsInstalledFile;
+(NSString *) bundledBootstrapFile;
+(NSString *) gemsBundlerInstalledDirectoryPath;

+(NSString *) rubiesBundledDirectoryPath;
@end

@interface TKDConfiguration(Firewall)
+(NSString *) firewallStandardOutInstalledFile;
+(NSString *) firewallStandardErrorInstalledFile;
+(NSString *) firewallInstallScriptInstalledFile;
+(NSString *) firewallInstalledDirectoryPath;
@end

@interface TKDConfiguration(Bootstrap)
+(NSString *) bootstrapLaunchDaemonPlistFile;

+(NSString *) terminalSetupScriptInstalledDirectoryPath;
+(NSString *) bootstrapGemsInstalledFile;
+(NSString *) bootstrapFirewallPlistInstalledFile;
+(NSString *) bootstrapFirewallScriptInstalledFile;
+(NSString *) boostrapScriptInstalledFile;
+(NSString *) bootstrapInstalledDirectoryPath;
+(NSString *) cubalogInstalledDirectoryPath;

+(NSString *) temporalBootstrapInstalledDirectoryPath;
+(NSString *) temporalBootstrapFirewallScriptInstalledFile;
@end

@interface TKDConfiguration(InstalledPaths)
+(NSArray *) rubiesInstalled;
+(NSString *) rubyConfigInstalledFile;
+(NSString *) compilerExecutableInstalledFile;

+(NSString *) rubiesInstalledDirectoryPath;
+(NSString *) gemsGlobalInstalledDirectoryPath;
+(NSString *) gemsInstalledDirectoryPath;
+(NSString *) gemsBinaryInstalledDirectoryPath;
+(NSString *) magickInstalledDirectoryPath;

+(NSString *) binariesInstalledDirectoryPath;

+(NSString *) compilerInstalledDirectoryPath;

+(NSString *) muxrSocketPath;
@end
