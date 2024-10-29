#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.9 (swiftlang-5.9.0.128.108 clang-1500.0.40.1)
#ifndef BRAINTREEPAYPAL_SWIFT_H
#define BRAINTREEPAYPAL_SWIFT_H
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="BraintreePayPal",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

@interface BTConfiguration (SWIFT_EXTENSION(BraintreePayPal))
/// :nodoc: This method is exposed for internal Braintree use only. Do not use. It is not covered by Semantic Versioning and may change or be removed at any time.
/// Indicates whether PayPal is enabled for the merchant account.
@property (nonatomic, readonly) BOOL isPayPalEnabled;
@end


@class NSString;
@class BTPostalAddress;
@class BTPayPalCreditFinancing;

/// Contains information about a PayPal payment method
SWIFT_RESILIENT_CLASS("_TtC15BraintreePayPal20BTPayPalAccountNonce")
@interface BTPayPalAccountNonce : BTPaymentMethodNonce
/// Payer’s email address.
@property (nonatomic, readonly, copy) NSString * _Nullable email;
/// Payer’s first name.
@property (nonatomic, readonly, copy) NSString * _Nullable firstName;
/// Payer’s last name.
@property (nonatomic, readonly, copy) NSString * _Nullable lastName;
/// Payer’s phone number.
@property (nonatomic, readonly, copy) NSString * _Nullable phone;
/// The billing address.
@property (nonatomic, readonly, strong) BTPostalAddress * _Nullable billingAddress;
/// The shipping address.
@property (nonatomic, readonly, strong) BTPostalAddress * _Nullable shippingAddress;
/// Client metadata id associated with this transaction.
@property (nonatomic, readonly, copy) NSString * _Nullable clientMetadataID;
/// Optional. Payer id associated with this transaction.
/// Will be provided for Vault and Checkout.
@property (nonatomic, readonly, copy) NSString * _Nullable payerID;
/// Optional. Credit financing details if the customer pays with PayPal Credit.
/// Will be provided for Vault and Checkout.
@property (nonatomic, readonly, strong) BTPayPalCreditFinancing * _Nullable creditFinancing;
- (nonnull instancetype)initWithNonce:(NSString * _Nonnull)nonce SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithNonce:(NSString * _Nonnull)nonce type:(NSString * _Nonnull)type SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithNonce:(NSString * _Nonnull)nonce type:(NSString * _Nonnull)type isDefault:(BOOL)isDefault SWIFT_UNAVAILABLE;
@end

enum BTPayPalLocaleCode : NSInteger;
enum BTPayPalRequestLandingPageType : NSInteger;
@class BTPayPalLineItem;
enum BTPayPalPaymentType : NSInteger;
@class NSURL;

/// Base options for PayPal Checkout and PayPal Vault flows.
/// note:
/// Do not instantiate this class directly. Instead, use BTPayPalCheckoutRequest or BTPayPalVaultRequest.
SWIFT_CLASS("_TtC15BraintreePayPal15BTPayPalRequest")
@interface BTPayPalRequest : NSObject
/// Defaults to false. When set to true, the shipping address selector will be displayed.
@property (nonatomic) BOOL isShippingAddressRequired;
/// Defaults to false. Set to true to enable user editing of the shipping address.
/// note:
/// Only applies when <code>shippingAddressOverride</code> is set.
@property (nonatomic) BOOL isShippingAddressEditable;
/// Optional: A locale code to use for the transaction.
@property (nonatomic) enum BTPayPalLocaleCode localeCode;
/// Optional: A valid shipping address to be displayed in the transaction flow. An error will occur if this address is not valid.
@property (nonatomic, strong) BTPostalAddress * _Nullable shippingAddressOverride;
/// Optional: Landing page type. Defaults to <code>.none</code>.
/// note:
/// Setting the BTPayPalRequest’s landingPageType changes the PayPal page to display when a user lands on the PayPal site to complete the payment.
/// <code>.login</code> specifies a PayPal account login page is used.
/// <code>.billing</code> specifies a non-PayPal account landing page is used.
@property (nonatomic) enum BTPayPalRequestLandingPageType landingPageType;
/// Optional: The merchant name displayed inside of the PayPal flow; defaults to the company name on your Braintree account
@property (nonatomic, copy) NSString * _Nullable displayName;
/// Optional: A non-default merchant account to use for tokenization.
@property (nonatomic, copy) NSString * _Nullable merchantAccountID;
/// Optional: The line items for this transaction. It can include up to 249 line items.
@property (nonatomic, copy) NSArray<BTPayPalLineItem *> * _Nullable lineItems;
/// Optional: Display a custom description to the user for a billing agreement. For Checkout with Vault flows, you must also set
/// <code>requestBillingAgreement</code> to <code>true</code> on your <code>BTPayPalCheckoutRequest</code>.
@property (nonatomic, copy) NSString * _Nullable billingAgreementDescription;
/// Optional: A risk correlation ID created with Set Transaction Context on your server.
@property (nonatomic, copy) NSString * _Nullable riskCorrelationID;
/// :nodoc: Exposed publicly for use by PayPal Native Checkout module. This property is not covered by semantic versioning.
@property (nonatomic, copy) NSString * _Nonnull hermesPath;
/// :nodoc: Exposed publicly for use by PayPal Native Checkout module. This property is not covered by semantic versioning.
@property (nonatomic) enum BTPayPalPaymentType paymentType;
/// :nodoc: Exposed publicly for use by PayPal Native Checkout module. This method is not covered by semantic versioning.
- (NSDictionary<NSString *, id> * _Nonnull)parametersWith:(BTConfiguration * _Nonnull)configuration universalLink:(NSURL * _Nullable)universalLink isPayPalAppInstalled:(BOOL)isPayPalAppInstalled SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

enum BTPayPalRequestIntent : NSInteger;
enum BTPayPalRequestUserAction : NSInteger;

/// Options for the PayPal Checkout flow.
SWIFT_CLASS("_TtC15BraintreePayPal23BTPayPalCheckoutRequest")
@interface BTPayPalCheckoutRequest : BTPayPalRequest
/// Used for a one-time payment.
/// Amount must be greater than or equal to zero, may optionally contain exactly 2 decimal places separated by ‘.’ and is limited to 7 digits before the decimal point.
@property (nonatomic, copy) NSString * _Nonnull amount;
/// Optional: Payment intent. Defaults to <code>.authorize</code>. Only applies to PayPal Checkout.
@property (nonatomic) enum BTPayPalRequestIntent intent;
/// Optional: Changes the call-to-action in the PayPal Checkout flow. Defaults to <code>.none</code>.
@property (nonatomic) enum BTPayPalRequestUserAction userAction;
/// Optional: Offers PayPal Pay Later if the customer qualifies. Defaults to <code>false</code>. Only available with PayPal Checkout.
@property (nonatomic) BOOL offerPayLater;
/// Optional: A three-character ISO-4217 ISO currency code to use for the transaction. Defaults to merchant currency code if not set.
/// note:
/// See https://developer.paypal.com/docs/api/reference/currency-codes/ for a list of supported currency codes.
@property (nonatomic, copy) NSString * _Nullable currencyCode;
/// Optional: If set to <code>true</code>, this enables the Checkout with Vault flow, where the customer will be prompted to consent to a billing agreement during checkout. Defaults to <code>false</code>.
@property (nonatomic) BOOL requestBillingAgreement;
/// Optional: User email to initiate a quicker authentication flow in cases where the user has a PayPal Account with the same email.
@property (nonatomic, copy) NSString * _Nullable userAuthenticationEmail;
/// Initializes a PayPal Native Checkout request
/// \param amount Used for a one-time payment. Amount must be greater than or equal to zero, may optionally contain exactly 2 decimal places separated by ‘.’
///
/// \param intent Optional: Payment intent. Defaults to <code>.authorize</code>. Only applies to PayPal Checkout.
/// and is limited to 7 digits before the decimal point.
///
/// \param userAction Optional: Changes the call-to-action in the PayPal Checkout flow. Defaults to <code>.none</code>.
///
/// \param offerPayLater Optional: Offers PayPal Pay Later if the customer qualifies. Defaults to <code>false</code>. Only available with PayPal Checkout.
///
/// \param currencyCode Optional: A three-character ISO-4217 ISO currency code to use for the transaction. Defaults to merchant currency code if not set.
/// See https://developer.paypal.com/docs/api/reference/currency-codes/ for a list of supported currency codes.
///
/// \param requestBillingAgreement Optional: If set to <code>true</code>, this enables the Checkout with Vault flow, where the customer will be prompted to consent to a billing agreement
/// during checkout. Defaults to <code>false</code>.
///
- (nonnull instancetype)initWithAmount:(NSString * _Nonnull)amount intent:(enum BTPayPalRequestIntent)intent userAction:(enum BTPayPalRequestUserAction)userAction offerPayLater:(BOOL)offerPayLater currencyCode:(NSString * _Nullable)currencyCode requestBillingAgreement:(BOOL)requestBillingAgreement OBJC_DESIGNATED_INITIALIZER;
/// :nodoc: Exposed publicly for use by PayPal Native Checkout module. This method is not covered by semantic versioning.
- (NSDictionary<NSString *, id> * _Nonnull)parametersWith:(BTConfiguration * _Nonnull)configuration universalLink:(NSURL * _Nullable)universalLink isPayPalAppInstalled:(BOOL)isPayPalAppInstalled SWIFT_WARN_UNUSED_RESULT;
@end

@class BTAPIClient;
@class BTPayPalVaultRequest;

SWIFT_RESILIENT_CLASS("_TtC15BraintreePayPal14BTPayPalClient")
@interface BTPayPalClient : BTWebAuthenticationSessionClient
/// Initialize a new PayPal client instance.
/// \param apiClient The API Client
///
- (nonnull instancetype)initWithAPIClient:(BTAPIClient * _Nonnull)apiClient OBJC_DESIGNATED_INITIALIZER;
/// Initialize a new PayPal client instance for the PayPal App Switch flow.
/// warning:
/// This initializer should be used for merchants using the PayPal App Switch flow. This feature is currently in beta and may change or be removed in future releases.
/// \param apiClient The API Client
///
/// \param universalLink The URL to use for the PayPal app switch flow. Must be a valid HTTPS URL dedicated to Braintree app switch returns. This URL must be allow-listed in your Braintree Control Panel.
///
- (nonnull instancetype)initWithAPIClient:(BTAPIClient * _Nonnull)apiClient universalLink:(NSURL * _Nonnull)universalLink;
/// Tokenize a PayPal request to be used with the PayPal Vault flow.
/// note:
/// You can use this as the final step in your order/checkout flow. If you want, you may create a transaction from your
/// server when this method completes without any additional user interaction.
/// On success, you will receive an instance of <code>BTPayPalAccountNonce</code>; on failure or user cancelation you will receive an error.
/// If the user cancels out of the flow, the error code will be <code>.canceled</code>.
/// \param request A <code>BTPayPalVaultRequest</code>
///
/// \param completion This completion will be invoked exactly once when tokenization is complete or an error occurs.
///
- (void)tokenizeWithVaultRequest:(BTPayPalVaultRequest * _Nonnull)request completion:(void (^ _Nonnull)(BTPayPalAccountNonce * _Nullable, NSError * _Nullable))completion;
/// Tokenize a PayPal request to be used with the PayPal Checkout or Pay Later flow.
/// note:
/// You can use this as the final step in your order/checkout flow. If you want, you may create a transaction from your
/// server when this method completes without any additional user interaction.
/// On success, you will receive an instance of <code>BTPayPalAccountNonce</code>; on failure or user cancelation you will receive an error.
/// If the user cancels out of the flow, the error code will be <code>.canceled</code>.
/// \param request A <code>BTPayPalCheckoutRequest</code>
///
/// \param completion This completion will be invoked exactly once when tokenization is complete or an error occurs.
///
- (void)tokenizeWithCheckoutRequest:(BTPayPalCheckoutRequest * _Nonnull)request completion:(void (^ _Nonnull)(BTPayPalAccountNonce * _Nullable, NSError * _Nullable))completion;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface BTPayPalClient (SWIFT_EXTENSION(BraintreePayPal)) <BTAppContextSwitchClient>
/// :nodoc:
+ (void)handleReturnURL:(NSURL * _Nonnull)url;
/// :nodoc:
+ (BOOL)canHandleReturnURL:(NSURL * _Nonnull)url SWIFT_WARN_UNUSED_RESULT;
@end

@class BTPayPalCreditFinancingAmount;

/// Contains information about a PayPal credit financing option
SWIFT_CLASS("_TtC15BraintreePayPal23BTPayPalCreditFinancing")
@interface BTPayPalCreditFinancing : NSObject
/// Indicates whether the card amount is editable after payer’s acceptance on PayPal side.
@property (nonatomic, readonly) BOOL cardAmountImmutable;
/// Estimated amount per month that the customer will need to pay including fees and interest.
@property (nonatomic, readonly, strong) BTPayPalCreditFinancingAmount * _Nullable monthlyPayment;
/// Status of whether the customer ultimately was approved for and chose to make the payment using the approved installment credit.
@property (nonatomic, readonly) BOOL payerAcceptance;
/// Length of financing terms in months.
@property (nonatomic, readonly) NSInteger term;
/// Estimated total payment amount including interest and fees the user will pay during the lifetime of the loan.
@property (nonatomic, readonly, strong) BTPayPalCreditFinancingAmount * _Nullable totalCost;
/// Estimated interest or fees amount the payer will have to pay during the lifetime of the loan.
@property (nonatomic, readonly, strong) BTPayPalCreditFinancingAmount * _Nullable totalInterest;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Contains information about a PayPal credit amount
SWIFT_CLASS("_TtC15BraintreePayPal29BTPayPalCreditFinancingAmount")
@interface BTPayPalCreditFinancingAmount : NSObject
/// 3 letter currency code as defined by <a href="http://www.iso.org/iso/home/standards/currency_codes.htm">ISO 4217</a>.
@property (nonatomic, readonly, copy) NSString * _Nonnull currency;
/// An amount defined by <a href="http://www.iso.org/iso/home/standards/currency_codes.htm">ISO 4217</a> for the given currency.
@property (nonatomic, readonly, copy) NSString * _Nonnull value;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

enum BTPayPalLineItemKind : NSInteger;
enum BTPayPalLineItemUPCType : NSInteger;

/// A PayPal line item to be displayed in the PayPal checkout flow.
SWIFT_CLASS("_TtC15BraintreePayPal16BTPayPalLineItem")
@interface BTPayPalLineItem : NSObject
/// Number of units of the item purchased. This value must be a whole number and can’t be negative or zero.
@property (nonatomic, readonly, copy) NSString * _Nonnull quantity;
/// Per-unit price of the item. Can include up to 2 decimal places. This value can’t be negative or zero.
@property (nonatomic, readonly, copy) NSString * _Nonnull unitAmount;
/// Item name. Maximum 127 characters.
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
/// Indicates whether the line item is a debit (sale) or credit (refund) to the customer.
@property (nonatomic, readonly) enum BTPayPalLineItemKind kind;
/// Optional: Per-unit tax price of the item. Can include up to 2 decimal places. This value can’t be negative or zero.
@property (nonatomic, readonly, copy) NSString * _Nullable unitTaxAmount;
/// Optional: Item description. Maximum 127 characters.
@property (nonatomic, readonly, copy) NSString * _Nullable itemDescription;
/// Optional: The URL to product information.
@property (nonatomic, readonly, copy) NSURL * _Nullable url;
/// Optional: Product or UPC code for the item. Maximum 127 characters.
@property (nonatomic, readonly, copy) NSString * _Nullable productCode;
/// Optional: The URL to product image information.
@property (nonatomic, copy) NSURL * _Nullable imageURL;
/// Optional: UPC code for the item.
@property (nonatomic, copy) NSString * _Nullable upcCode;
/// Optional: UPC type for the item.
@property (nonatomic) enum BTPayPalLineItemUPCType upcType;
/// Initialize a PayPayLineItem
/// \param quantity Number of units of the item purchased. Can include up to 4 decimal places. This value can’t be negative or zero.
///
/// \param unitAmount Per-unit price of the item. Can include up to 4 decimal places. This value can’t be negative or zero.
///
/// \param name Item name. Maximum 127 characters.
///
/// \param kind Indicates whether the line item is a debit (sale) or credit (refund) to the customer.
///
- (nonnull instancetype)initWithQuantity:(NSString * _Nonnull)quantity unitAmount:(NSString * _Nonnull)unitAmount name:(NSString * _Nonnull)name kind:(enum BTPayPalLineItemKind)kind OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// Use this option to specify whether a line item is a debit (sale) or credit (refund) to the customer.
typedef SWIFT_ENUM(NSInteger, BTPayPalLineItemKind, open) {
/// Debit
  BTPayPalLineItemKindDebit = 0,
/// Credit
  BTPayPalLineItemKindCredit = 1,
};

/// Use this option to specify  the UPC type of the line item.
typedef SWIFT_ENUM(NSInteger, BTPayPalLineItemUPCType, open) {
/// Default
  BTPayPalLineItemUPCTypeNone = 0,
/// Upc Type A
  BTPayPalLineItemUPCTypeUPC_A = 1,
/// Upc Type B
  BTPayPalLineItemUPCTypeUPC_B = 2,
/// Upc Type C
  BTPayPalLineItemUPCTypeUPC_C = 3,
/// Upc Type D
  BTPayPalLineItemUPCTypeUPC_D = 4,
/// Upc Type E
  BTPayPalLineItemUPCTypeUPC_E = 5,
/// Upc Type 2
  BTPayPalLineItemUPCTypeUPC_2 = 6,
/// Upc Type 5
  BTPayPalLineItemUPCTypeUPC_5 = 7,
};

/// A locale code to use for a transaction.
typedef SWIFT_ENUM(NSInteger, BTPayPalLocaleCode, open) {
  BTPayPalLocaleCodeNone = 0,
  BTPayPalLocaleCodeDa_DK = 1,
  BTPayPalLocaleCodeDe_DE = 2,
  BTPayPalLocaleCodeEn_AU = 3,
  BTPayPalLocaleCodeEn_GB = 4,
  BTPayPalLocaleCodeEn_US = 5,
  BTPayPalLocaleCodeEs_ES = 6,
  BTPayPalLocaleCodeEs_XC = 7,
  BTPayPalLocaleCodeFr_CA = 8,
  BTPayPalLocaleCodeFr_FR = 9,
  BTPayPalLocaleCodeFr_XC = 10,
  BTPayPalLocaleCodeId_ID = 11,
  BTPayPalLocaleCodeIt_IT = 12,
  BTPayPalLocaleCodeJa_JP = 13,
  BTPayPalLocaleCodeKo_KR = 14,
  BTPayPalLocaleCodeNl_NL = 15,
  BTPayPalLocaleCodeNo_NO = 16,
  BTPayPalLocaleCodePl_PL = 17,
  BTPayPalLocaleCodePt_BR = 18,
  BTPayPalLocaleCodePt_PT = 19,
  BTPayPalLocaleCodeRu_RU = 20,
  BTPayPalLocaleCodeSv_SE = 21,
  BTPayPalLocaleCodeTh_TH = 22,
  BTPayPalLocaleCodeTr_TR = 23,
  BTPayPalLocaleCodeZh_CN = 24,
  BTPayPalLocaleCodeZh_HK = 25,
  BTPayPalLocaleCodeZh_TW = 26,
  BTPayPalLocaleCodeZh_XC = 27,
};

typedef SWIFT_ENUM(NSInteger, BTPayPalPaymentType, open) {
/// Checkout
  BTPayPalPaymentTypeCheckout = 0,
/// Vault
  BTPayPalPaymentTypeVault = 1,
};


/// Payment intent.
/// note:
/// Must be set to BTPayPalRequestIntentSale for immediate payment, <code>.authorize</code> to authorize a payment for capture later, or <code>.order</code> to create an order. Defaults to <code>.authorize</code>. Only applies to PayPal Checkout.
/// <a href="https://developer.paypal.com/docs/integration/direct/payments/capture-payment/">Capture payments later reference</a>
/// <a href="https://developer.paypal.com/docs/integration/direct/payments/create-process-order/">Create and process orders reference</a>
typedef SWIFT_ENUM(NSInteger, BTPayPalRequestIntent, open) {
/// Authorize
  BTPayPalRequestIntentAuthorize = 0,
/// Sale
  BTPayPalRequestIntentSale = 1,
/// Order
  BTPayPalRequestIntentOrder = 2,
};

/// Use this option to specify the PayPal page to display when a user lands on the PayPal site to complete the payment.
typedef SWIFT_ENUM(NSInteger, BTPayPalRequestLandingPageType, open) {
/// Default
  BTPayPalRequestLandingPageTypeNone = 0,
/// Login
  BTPayPalRequestLandingPageTypeLogin = 1,
/// Billing
  BTPayPalRequestLandingPageTypeBilling = 2,
};

/// The call-to-action in the PayPal Checkout flow.
/// note:
/// By default the final button will show the localized word for “Continue” and implies that the final amount billed is not yet known.
/// Setting the BTPayPalRequest’s userAction to <code>.payNow</code> changes the button text to “Pay Now”, conveying to
/// the user that billing will take place immediately.
typedef SWIFT_ENUM(NSInteger, BTPayPalRequestUserAction, open) {
/// Default
  BTPayPalRequestUserActionNone = 0,
/// Pay Now
  BTPayPalRequestUserActionPayNow = 1,
};


/// Options for the PayPal Vault flow.
SWIFT_CLASS("_TtC15BraintreePayPal24BTPayPalVaultBaseRequest")
@interface BTPayPalVaultBaseRequest : BTPayPalRequest
/// Optional: Offers PayPal Credit if the customer qualifies. Defaults to <code>false</code>.
@property (nonatomic) BOOL offerCredit;
/// Initializes a PayPal Native Vault request
/// \param offerCredit Optional: Offers PayPal Credit if the customer qualifies. Defaults to <code>false</code>.
///
- (nonnull instancetype)initWithOfferCredit:(BOOL)offerCredit OBJC_DESIGNATED_INITIALIZER;
/// :nodoc: Exposed publicly for use by PayPal Native Checkout module. This method is not covered by semantic versioning.
- (NSDictionary<NSString *, id> * _Nonnull)parametersWith:(BTConfiguration * _Nonnull)configuration universalLink:(NSURL * _Nullable)universalLink isPayPalAppInstalled:(BOOL)isPayPalAppInstalled SWIFT_WARN_UNUSED_RESULT;
@end


/// Options for the PayPal Vault flow.
SWIFT_CLASS("_TtC15BraintreePayPal20BTPayPalVaultRequest")
@interface BTPayPalVaultRequest : BTPayPalVaultBaseRequest
/// Optional: User email to initiate a quicker authentication flow in cases where the user has a PayPal Account with the same email.
@property (nonatomic, copy) NSString * _Nullable userAuthenticationEmail;
/// Initializes a PayPal Vault request for the PayPal App Switch flow
/// warning:
/// This initializer should be used for merchants using the PayPal App Switch flow. This feature is currently in beta and may change or be removed in future releases.
/// note:
/// The PayPal App Switch flow currently only supports the production environment.
/// \param userAuthenticationEmail Required: User email to initiate a quicker authentication flow in cases where the user has a PayPal Account with the same email.
///
/// \param enablePayPalAppSwitch Required: Used to determine if the customer will use the PayPal app switch flow.
///
/// \param offerCredit Optional: Offers PayPal Credit if the customer qualifies. Defaults to <code>false</code>.
///
- (nonnull instancetype)initWithUserAuthenticationEmail:(NSString * _Nonnull)userAuthenticationEmail enablePayPalAppSwitch:(BOOL)enablePayPalAppSwitch offerCredit:(BOOL)offerCredit;
/// Initializes a PayPal Vault request
/// \param offerCredit Optional: Offers PayPal Credit if the customer qualifies. Defaults to <code>false</code>.
///
/// \param userAuthenticationEmail Optional: User email to initiate a quicker authentication flow in cases where the user has a PayPal Account with the same email.
///
- (nonnull instancetype)initWithOfferCredit:(BOOL)offerCredit userAuthenticationEmail:(NSString * _Nullable)userAuthenticationEmail OBJC_DESIGNATED_INITIALIZER;
- (NSDictionary<NSString *, id> * _Nonnull)parametersWith:(BTConfiguration * _Nonnull)configuration universalLink:(NSURL * _Nullable)universalLink isPayPalAppInstalled:(BOOL)isPayPalAppInstalled SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithOfferCredit:(BOOL)offerCredit SWIFT_UNAVAILABLE;
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