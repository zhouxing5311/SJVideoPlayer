//
//  CollectionViewCellHasCollectionView.h
//  SJVideoPlayer
//
//  Created by 畅三江 on 2018/9/30.
//  Copyright © 2018 畅三江. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SJHasCollectionView.h"

NS_ASSUME_NONNULL_BEGIN

@interface CollectionViewCellHasCollectionView : UICollectionViewCell
+ (void)registerWithCollectionView:(UICollectionView *)collectionView;
+ (CollectionViewCellHasCollectionView *)cellWithCollectionView:(UICollectionView *)collectionView indexPath:(NSIndexPath *)indexPath;

@property (nonatomic, strong, readonly) SJHasCollectionView *view;
@end

NS_ASSUME_NONNULL_END
