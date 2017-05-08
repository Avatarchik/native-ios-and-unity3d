#import <UIKit/UIKit.h>
#import "UnityAppController.h"
#import "UI/UnityView.h"
#import "UI/UnityViewControllerBase.h"

#import "HelloViewController.h"

@interface TNAppController : UnityAppController

@property (nonatomic, strong) UINavigationController *navController;

@end

@implementation TNAppController

- (void)willStartWithViewController:(UIViewController*)controller {

	_rootView		= [[UIView alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    controller.view = _rootView;
    
    HelloViewController *helloVC = [[HelloViewController alloc] initWithNibName:nil bundle:nil];
    
    self.navController = [[UINavigationController alloc] initWithRootViewController:helloVC];
    [_rootView addSubview:self.navController.view];
}

@end

IMPL_APP_CONTROLLER_SUBCLASS(TNAppController)
