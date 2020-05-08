//
//  AppDelegate.h
//  Location-International
//
//  Created by tiger fly on 2020/5/8.
//  Copyright © 2020 tiger fly. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

@property (nonatomic, strong) UIWindow *window;

- (void)saveContext;


@end

