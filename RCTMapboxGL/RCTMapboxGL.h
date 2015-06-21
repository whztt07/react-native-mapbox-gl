//
//  RCTMapboxGL.h
//  RCTMapboxGL
//
//  Created by Bobby Sudekum on 4/30/15.
//  Copyright (c) 2015 Mapbox. All rights reserved.
//

#import "MapboxGL.h"
#import "MGLMapView.h"
#import "RCTView.h"
#import "RCTEventDispatcher.h"
#import "RCTBridgeModule.h"

@interface RCTMapboxGL : RCTView <MGLMapViewDelegate, RCTBridgeModule>

- (instancetype)initWithEventDispatcher:(RCTEventDispatcher *)eventDispatcher;

- (void)setAccessToken:(NSString *)accessToken;
- (void)setAnnotations:(NSArray *)annotations;
- (void)setCenterCoordinate:(CLLocationCoordinate2D)centerCoordinate;
- (void)setClipsToBounds:(BOOL)clipsToBounds;
- (void)setDebugActive:(BOOL)debugActive;
- (void)setDirection:(double)direction;
- (void)setRotateEnabled:(BOOL)rotateEnabled;
- (void)setShowsUserLocation:(BOOL)showsUserLocation;
- (void)setStyleURL:(NSURL *)styleURL;
- (void)setZoomLevel:(double)zoomLevel;
- (void)setZoomLevelAnimated:(double)zoomLevel;
- (void)setDirectionAnimated:(int)heading;
- (void)setCenterCoordinateAnimated:(CLLocationCoordinate2D)coordinates;
- (void)setCenterCoordinateZoomLevelAnimated:(CLLocationCoordinate2D)coordinates zoomLevel:(double)zoomLevel;
- (void)selectAnnotationAnimated:(NSUInteger)annotationInArray;
- (void)removeAnnotation:(NSUInteger)annotationInArray;

@end



@interface RCTMGLAnnotation : NSObject <MGLAnnotation>

@property (nonatomic, strong) UIButton *rightCalloutAccessory;
@property (nonatomic) NSString *id;
@property (nonatomic) CLLocationCoordinate2D *coordinates;
@property (nonatomic) NSString *fillColor;
@property (nonatomic) NSString *strokeColor;
@property (nonatomic) double *strokeWidth;
@property (nonatomic) double *alpha;
@property (nonatomic) NSString *type;
@property (nonatomic) NSUInteger *count;

+ (instancetype)annotationWithLocation:(CLLocationCoordinate2D)coordinate title:(NSString *)title subtitle:(NSString *)subtitle id:(NSString *)id;

+ (instancetype)annotationWithLocationRightCallout:(CLLocationCoordinate2D)coordinate title:(NSString *)title subtitle:(NSString *)subtitle id:(NSString *)id rightCalloutAccessory:(UIButton *)rightCalloutAccessory;

+ (instancetype)shapeAnnotation:(CLLocationCoordinate2D *)coordinates fillColor:(NSString *)fillColor strokeColor:(NSString *)strokeColor strokeWidth:(double)strokeWidth alpha:(double)alpha id:(NSString *)id type:(NSString *)type count:(NSUInteger)count;


- (instancetype)initWithLocation:(CLLocationCoordinate2D)coordinate title:(NSString *)title subtitle:(NSString *)subtitle id:(NSString *)id;

- (instancetype)initWithLocationRightCallout:(CLLocationCoordinate2D)coordinate title:(NSString *)title subtitle:(NSString *)subtitle id:(NSString *)id rightCalloutAccessory:(UIButton *)rightCalloutAccessory;

- (instancetype)initShapeAnnotation:(CLLocationCoordinate2D *)coordinates fillColor:(NSString *)fillColor strokeColor:(NSString *)strokeColor strokeWidth:(double)strokeWidth alpha:(double)alpha id:(NSString *)id type:(NSString *)type count:(NSUInteger)count;


@end
