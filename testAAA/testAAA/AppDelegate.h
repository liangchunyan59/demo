//
//  AppDelegate.h
//  testAAA
//
//  Created by liang chunyan on 2021/11/13.
//  我就是要来试一下

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

