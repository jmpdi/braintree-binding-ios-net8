#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.9 (swiftlang-5.9.0.128.108 clang-1500.0.40.1)
#ifndef BRAINTREEVENMO_SWIFT_H
#define BRAINTREEVENMO_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
// SJM 240815 @import BraintreeCore;
#import "BraintreeCore-Swift.h"
@import Foundation;
@import ObjectiveC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="BraintreeVenmo",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

@interface BTConfiguration (SWIFT_EXTENSION(BraintreeVenmo))
/// :nodoc: This method is exposed for internal Braintree use only. Do not use. It is not covered by Semantic Versioning and may change or be removed at any time.
/// Indicates whether Venmo is enabled for the merchant account.
@property (nonatomic, readonly) BOOL isVenmoEnabled;
@end

@class NSString;
@class BTPostalAddress;

/// Contains information about a Venmo Account payment method
SWIFT_RESILIENT_CLASS("_TtC14BraintreeVenmo19BTVenmoAccountNonce")
@interface BTVenmoAccountNonce : BTPaymentMethodNonce
/// The email associated with the Venmo account
@property (nonatomic, copy) NSString * _Nullable email;
/// The external ID associated with the Venmo account
@property (nonatomic, copy) NSString * _Nullable externalID;
/// The first name associated with the Venmo account
@property (nonatomic, copy) NSString * _Nullable firstName;
/// The last name associated with the Venmo account
@property (nonatomic, copy) NSString * _Nullable lastName;
/// The phone number associated with the Venmo account
@property (nonatomic, copy) NSString * _Nullable phoneNumber;
/// The username associated with the Venmo account
@property (nonatomic, copy) NSString * _Nullable username;
/// The primary billing address associated with the Venmo account
@property (nonatomic, strong) BTPostalAddress * _Nullable billingAddress;
/// The primary shipping address associated with the Venmo account
@property (nonatomic, strong) BTPostalAddress * _Nullable shippingAddress;
- (nonnull instancetype)initWithNonce:(NSString * _Nonnull)nonce SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithNonce:(NSString * _Nonnull)nonce type:(NSString * _Nonnull)type SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithNonce:(NSString * _Nonnull)nonce type:(NSString * _Nonnull)type isDefault:(BOOL)isDefault SWIFT_UNAVAILABLE;
@end

@class BTAPIClient;
@class BTVenmoRequest;

/// Used to process Venmo payments
SWIFT_CLASS("_TtC14BraintreeVenmo13BTVenmoClient")
@interface BTVenmoClient : NSObject
/// Creates an Apple Pay client
/// \param apiClient An API client
///
- (nonnull instancetype)initWithAPIClient:(BTAPIClient * _Nonnull)apiClient OBJC_DESIGNATED_INITIALIZER;
/// Initiates Venmo login via app switch, which returns a BTVenmoAccountNonce when successful.
/// \param request A Venmo request.
///
/// \param completion This completion will be invoked when app switch is complete or an error occurs. On success, you will receive
/// an instance of <code>BTVenmoAccountNonce</code>; on failure or user cancelation you will receive an error.
/// If the user cancels out of the flow, the error code will be <code>.canceled</code>.
///
- (void)tokenizeWithVenmoRequest:(BTVenmoRequest * _Nonnull)request completion:(void (^ _Nonnull)(BTVenmoAccountNonce * _Nullable, NSError * _Nullable))completion;
/// Returns true if the proper Venmo app is installed and configured correctly, returns false otherwise.
- (BOOL)isVenmoAppInstalled SWIFT_WARN_UNUSED_RESULT;
/// Switches to the App Store to download the Venmo application.
- (void)openVenmoAppPageInAppStore;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSURL;

@interface BTVenmoClient (SWIFT_EXTENSION(BraintreeVenmo)) <BTAppContextSwitchClient>
/// :nodoc:
+ (void)handleReturnURL:(NSURL * _Nonnull)url;
/// :nodoc:
+ (BOOL)canHandleReturnURL:(NSURL * _Nonnull)url SWIFT_WARN_UNUSED_RESULT;
@end

enum BTVenmoLineItemKind : NSInteger;

/// A Venmo line item to be displayed in the Venmo Paysheet.
SWIFT_CLASS("_TtC14BraintreeVenmo15BTVenmoLineItem")
@interface BTVenmoLineItem : NSObject
/// Number of units of the item purchased. This value must be a whole number and can’t be negative or zero.
@property (nonatomic) NSInteger quantity;
/// Per-unit price of the item. Can include up to 2 decimal places. This value can’t be negative or zero.
@property (nonatomic, copy) NSString * _Nonnull unitAmount;
/// Item name. Maximum 127 characters.
@property (nonatomic, copy) NSString * _Nonnull name;
/// Indicates whether the line item is a debit (sale) or credit (refund) to the customer.
@property (nonatomic) enum BTVenmoLineItemKind kind;
/// Optional: Per-unit tax price of the item. Can include up to 2 decimal places. This value can’t be negative or zero.
@property (nonatomic, copy) NSString * _Nullable unitTaxAmount;
/// Optional: Item description. Maximum 127 characters.
@property (nonatomic, copy) NSString * _Nullable itemDescription;
/// Optional: Product or UPC code for the item. Maximum 127 characters.
@property (nonatomic, copy) NSString * _Nullable productCode;
/// Optional: The URL to product information.
@property (nonatomic, copy) NSURL * _Nullable url;
/// Initialize a BTVenmoLineItem
/// \param quantity Number of units of the item purchased. Can include up to 4 decimal places. This value can’t be negative or zero.
///
/// \param unitAmount Per-unit price of the item. Can include up to 4 decimal places. This value can’t be negative or zero.
///
/// \param name Item name. Maximum 127 characters.
///
/// \param kind Indicates whether the line item is a debit (sale) or credit (refund) to the customer.
///
- (nonnull instancetype)initWithQuantity:(NSInteger)quantity unitAmount:(NSString * _Nonnull)unitAmount name:(NSString * _Nonnull)name kind:(enum BTVenmoLineItemKind)kind OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// Use this option to specify whether a line item is a debit (sale) or credit (refund) to the customer.
typedef SWIFT_ENUM(NSInteger, BTVenmoLineItemKind, open) {
/// Debit
  BTVenmoLineItemKindDebit = 0,
/// Credit
  BTVenmoLineItemKindCredit = 1,
};

/// Usage type for the tokenized Venmo account
typedef SWIFT_ENUM(NSInteger, BTVenmoPaymentMethodUsage, open) {
/// The Venmo payment will be authorized for future payments and can be vaulted.
  BTVenmoPaymentMethodUsageMultiUse = 0,
/// The Venmo payment will be authorized for a one-time payment and cannot be vaulted.
  BTVenmoPaymentMethodUsageSingleUse = 1,
};


/// A BTVenmoRequest specifies options that contribute to the Venmo flow
SWIFT_CLASS("_TtC14BraintreeVenmo14BTVenmoRequest")
@interface BTVenmoRequest : NSObject
/// Optional. The Venmo profile ID to be used during payment authorization. Customers will see the business name and logo associated with this Venmo profile, and it may show up in the
/// Venmo app as a “Connected Merchant”. Venmo profile IDs can be found in the Braintree Control Panel. Leaving this <code>nil</code> will use the default Venmo profile.
@property (nonatomic, copy) NSString * _Nullable profileID;
/// Whether to automatically vault the Venmo account on the client. For client-side vaulting, you must initialize BTAPIClient with a client token that was created with a customer ID.
/// Also, <code>paymentMethodUsage</code> on the BTVenmoRequest must be set to <code>.multiUse</code>.
/// If this property is set to <code>false</code>, you can still vault the Venmo account on your server, provided that <code>paymentMethodUsage</code> is not set to <code>.singleUse</code>.
/// Defaults to <code>false</code>
@property (nonatomic) BOOL vault;
/// If set to <code>.multiUse</code>, the Venmo payment will be authorized for future payments and can be vaulted.
/// If set to <code>.singleUse</code>, the Venmo payment will be authorized for a one-time payment and cannot be vaulted.
@property (nonatomic) enum BTVenmoPaymentMethodUsage paymentMethodUsage;
/// Optional. The business name that will be displayed in the Venmo app payment approval screen. Only used by merchants onboarded as PayFast channel partners.
@property (nonatomic, copy) NSString * _Nullable displayName;
/// Whether the customer’s billing address should be collected and displayed on the Venmo paysheet.
/// Defaults to <code>false</code>
@property (nonatomic) BOOL collectCustomerBillingAddress;
/// Whether the customer’s shipping address should be collected and displayed on the Venmo paysheet.
/// Defaults to <code>false</code>
@property (nonatomic) BOOL collectCustomerShippingAddress;
/// Indicates whether the purchase amount is the final amount.
/// Removes “subject to change” notice in Venmo app paysheet UI.
/// Defaults to <code>false</code>
@property (nonatomic) BOOL isFinalAmount;
/// Optional. The subtotal amount of the transaction to be displayed on the paysheet. Excludes taxes, discounts, and shipping amounts.
/// If this value is set, <code>totalAmount</code> must also be set.
@property (nonatomic, copy) NSString * _Nullable subTotalAmount;
/// Optional. The total discount amount applied on the transaction to be displayed on the paysheet.
/// If this value is set, <code>totalAmount</code> must also be set.
@property (nonatomic, copy) NSString * _Nullable discountAmount;
/// Optional. The total tax amount for the transaction to be displayed on the paysheet.
/// If this value is set, <code>totalAmount</code> must also be set.
@property (nonatomic, copy) NSString * _Nullable taxAmount;
/// Optional. The shipping amount for the transaction to be displayed on the paysheet.
/// If this value is set, <code>totalAmount</code> must also be set.
@property (nonatomic, copy) NSString * _Nullable shippingAmount;
/// Optional. The grand total amount on the transaction that should be displayed on the paysheet.
@property (nonatomic, copy) NSString * _Nullable totalAmount;
/// Optional. The line items for this transaction. It can include up to 249 line items.
/// If this value is set, <code>totalAmount</code> must also be set.
@property (nonatomic, copy) NSArray<BTVenmoLineItem *> * _Nullable lineItems;
/// Optional. Used to determine if the customer should fallback to the web flow if Venmo app is not installed.
/// Defaults to <code>false</code>
@property (nonatomic) BOOL fallbackToWeb;
/// Initialize a Venmo request with a payment method usage.
/// \param paymentMethodUsage a <code>BTVenmoPaymentMethodUsage</code>
///
- (nonnull instancetype)initWithPaymentMethodUsage:(enum BTVenmoPaymentMethodUsage)paymentMethodUsage OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
