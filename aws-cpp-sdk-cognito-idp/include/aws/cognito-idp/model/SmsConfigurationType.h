﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The SMS configuration type that includes the settings the Amazon Cognito User
   * Pool must call for the Amazon Simple Notification Service service to send an SMS
   * message from your Amazon Web Services account. The Amazon Cognito User Pool
   * makes the request to the Amazon SNS Service by using an Identity and Access
   * Management role that you provide for your Amazon Web Services
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SmsConfigurationType">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API SmsConfigurationType
  {
  public:
    SmsConfigurationType();
    SmsConfigurationType(Aws::Utils::Json::JsonView jsonValue);
    SmsConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS caller. This is the ARN of
     * the IAM role in your Amazon Web Services account that Amazon Cognito will use to
     * send SMS messages. SMS messages are subject to a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-email-phone-verification.html">spending
     * limit</a>. </p>
     */
    inline const Aws::String& GetSnsCallerArn() const{ return m_snsCallerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS caller. This is the ARN of
     * the IAM role in your Amazon Web Services account that Amazon Cognito will use to
     * send SMS messages. SMS messages are subject to a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-email-phone-verification.html">spending
     * limit</a>. </p>
     */
    inline bool SnsCallerArnHasBeenSet() const { return m_snsCallerArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS caller. This is the ARN of
     * the IAM role in your Amazon Web Services account that Amazon Cognito will use to
     * send SMS messages. SMS messages are subject to a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-email-phone-verification.html">spending
     * limit</a>. </p>
     */
    inline void SetSnsCallerArn(const Aws::String& value) { m_snsCallerArnHasBeenSet = true; m_snsCallerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS caller. This is the ARN of
     * the IAM role in your Amazon Web Services account that Amazon Cognito will use to
     * send SMS messages. SMS messages are subject to a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-email-phone-verification.html">spending
     * limit</a>. </p>
     */
    inline void SetSnsCallerArn(Aws::String&& value) { m_snsCallerArnHasBeenSet = true; m_snsCallerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS caller. This is the ARN of
     * the IAM role in your Amazon Web Services account that Amazon Cognito will use to
     * send SMS messages. SMS messages are subject to a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-email-phone-verification.html">spending
     * limit</a>. </p>
     */
    inline void SetSnsCallerArn(const char* value) { m_snsCallerArnHasBeenSet = true; m_snsCallerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS caller. This is the ARN of
     * the IAM role in your Amazon Web Services account that Amazon Cognito will use to
     * send SMS messages. SMS messages are subject to a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-email-phone-verification.html">spending
     * limit</a>. </p>
     */
    inline SmsConfigurationType& WithSnsCallerArn(const Aws::String& value) { SetSnsCallerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS caller. This is the ARN of
     * the IAM role in your Amazon Web Services account that Amazon Cognito will use to
     * send SMS messages. SMS messages are subject to a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-email-phone-verification.html">spending
     * limit</a>. </p>
     */
    inline SmsConfigurationType& WithSnsCallerArn(Aws::String&& value) { SetSnsCallerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS caller. This is the ARN of
     * the IAM role in your Amazon Web Services account that Amazon Cognito will use to
     * send SMS messages. SMS messages are subject to a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-email-phone-verification.html">spending
     * limit</a>. </p>
     */
    inline SmsConfigurationType& WithSnsCallerArn(const char* value) { SetSnsCallerArn(value); return *this;}


    /**
     * <p>The external ID is a value that you should use to add security to your IAM
     * role that is used to call Amazon SNS to send SMS messages for your user pool. If
     * you provide an <code>ExternalId</code>, the Amazon Cognito User Pool will
     * include it when attempting to assume your IAM role so that you can set your
     * roles trust policy to require the <code>ExternalID</code>. If you use the Amazon
     * Cognito Management Console to create a role for SMS multi-factor authentication
     * (MFA), Amazon Cognito will create a role with the required permissions and a
     * trust policy that demonstrates use of the <code>ExternalId</code>.</p> <p>For
     * more information about the <code>ExternalId</code> of a role, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_create_for-user_externalid.html">How
     * to use an external ID when granting access to your Amazon Web Services resources
     * to a third party</a> </p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * <p>The external ID is a value that you should use to add security to your IAM
     * role that is used to call Amazon SNS to send SMS messages for your user pool. If
     * you provide an <code>ExternalId</code>, the Amazon Cognito User Pool will
     * include it when attempting to assume your IAM role so that you can set your
     * roles trust policy to require the <code>ExternalID</code>. If you use the Amazon
     * Cognito Management Console to create a role for SMS multi-factor authentication
     * (MFA), Amazon Cognito will create a role with the required permissions and a
     * trust policy that demonstrates use of the <code>ExternalId</code>.</p> <p>For
     * more information about the <code>ExternalId</code> of a role, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_create_for-user_externalid.html">How
     * to use an external ID when granting access to your Amazon Web Services resources
     * to a third party</a> </p>
     */
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }

    /**
     * <p>The external ID is a value that you should use to add security to your IAM
     * role that is used to call Amazon SNS to send SMS messages for your user pool. If
     * you provide an <code>ExternalId</code>, the Amazon Cognito User Pool will
     * include it when attempting to assume your IAM role so that you can set your
     * roles trust policy to require the <code>ExternalID</code>. If you use the Amazon
     * Cognito Management Console to create a role for SMS multi-factor authentication
     * (MFA), Amazon Cognito will create a role with the required permissions and a
     * trust policy that demonstrates use of the <code>ExternalId</code>.</p> <p>For
     * more information about the <code>ExternalId</code> of a role, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_create_for-user_externalid.html">How
     * to use an external ID when granting access to your Amazon Web Services resources
     * to a third party</a> </p>
     */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * <p>The external ID is a value that you should use to add security to your IAM
     * role that is used to call Amazon SNS to send SMS messages for your user pool. If
     * you provide an <code>ExternalId</code>, the Amazon Cognito User Pool will
     * include it when attempting to assume your IAM role so that you can set your
     * roles trust policy to require the <code>ExternalID</code>. If you use the Amazon
     * Cognito Management Console to create a role for SMS multi-factor authentication
     * (MFA), Amazon Cognito will create a role with the required permissions and a
     * trust policy that demonstrates use of the <code>ExternalId</code>.</p> <p>For
     * more information about the <code>ExternalId</code> of a role, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_create_for-user_externalid.html">How
     * to use an external ID when granting access to your Amazon Web Services resources
     * to a third party</a> </p>
     */
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * <p>The external ID is a value that you should use to add security to your IAM
     * role that is used to call Amazon SNS to send SMS messages for your user pool. If
     * you provide an <code>ExternalId</code>, the Amazon Cognito User Pool will
     * include it when attempting to assume your IAM role so that you can set your
     * roles trust policy to require the <code>ExternalID</code>. If you use the Amazon
     * Cognito Management Console to create a role for SMS multi-factor authentication
     * (MFA), Amazon Cognito will create a role with the required permissions and a
     * trust policy that demonstrates use of the <code>ExternalId</code>.</p> <p>For
     * more information about the <code>ExternalId</code> of a role, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_create_for-user_externalid.html">How
     * to use an external ID when granting access to your Amazon Web Services resources
     * to a third party</a> </p>
     */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /**
     * <p>The external ID is a value that you should use to add security to your IAM
     * role that is used to call Amazon SNS to send SMS messages for your user pool. If
     * you provide an <code>ExternalId</code>, the Amazon Cognito User Pool will
     * include it when attempting to assume your IAM role so that you can set your
     * roles trust policy to require the <code>ExternalID</code>. If you use the Amazon
     * Cognito Management Console to create a role for SMS multi-factor authentication
     * (MFA), Amazon Cognito will create a role with the required permissions and a
     * trust policy that demonstrates use of the <code>ExternalId</code>.</p> <p>For
     * more information about the <code>ExternalId</code> of a role, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_create_for-user_externalid.html">How
     * to use an external ID when granting access to your Amazon Web Services resources
     * to a third party</a> </p>
     */
    inline SmsConfigurationType& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * <p>The external ID is a value that you should use to add security to your IAM
     * role that is used to call Amazon SNS to send SMS messages for your user pool. If
     * you provide an <code>ExternalId</code>, the Amazon Cognito User Pool will
     * include it when attempting to assume your IAM role so that you can set your
     * roles trust policy to require the <code>ExternalID</code>. If you use the Amazon
     * Cognito Management Console to create a role for SMS multi-factor authentication
     * (MFA), Amazon Cognito will create a role with the required permissions and a
     * trust policy that demonstrates use of the <code>ExternalId</code>.</p> <p>For
     * more information about the <code>ExternalId</code> of a role, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_create_for-user_externalid.html">How
     * to use an external ID when granting access to your Amazon Web Services resources
     * to a third party</a> </p>
     */
    inline SmsConfigurationType& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * <p>The external ID is a value that you should use to add security to your IAM
     * role that is used to call Amazon SNS to send SMS messages for your user pool. If
     * you provide an <code>ExternalId</code>, the Amazon Cognito User Pool will
     * include it when attempting to assume your IAM role so that you can set your
     * roles trust policy to require the <code>ExternalID</code>. If you use the Amazon
     * Cognito Management Console to create a role for SMS multi-factor authentication
     * (MFA), Amazon Cognito will create a role with the required permissions and a
     * trust policy that demonstrates use of the <code>ExternalId</code>.</p> <p>For
     * more information about the <code>ExternalId</code> of a role, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_create_for-user_externalid.html">How
     * to use an external ID when granting access to your Amazon Web Services resources
     * to a third party</a> </p>
     */
    inline SmsConfigurationType& WithExternalId(const char* value) { SetExternalId(value); return *this;}

  private:

    Aws::String m_snsCallerArn;
    bool m_snsCallerArnHasBeenSet;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
