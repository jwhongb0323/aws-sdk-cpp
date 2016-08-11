/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/JobState.h>
#include <aws/snowball/model/JobType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/snowball/model/JobResource.h>
#include <aws/snowball/model/ShippingDetails.h>
#include <aws/snowball/model/SnowballCapacity.h>
#include <aws/snowball/model/Notification.h>
#include <aws/snowball/model/DataTransfer.h>
#include <aws/snowball/model/JobLogs.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Snowball
{
namespace Model
{

  /**
   * <p>Contains information about a specific job including shipping information, job
   * status, and other important metadata. This information is returned as a part of
   * the response syntax of the <code>DescribeJob</code> action.</p>
   */
  class AWS_SNOWBALL_API JobMetadata
  {
  public:
    JobMetadata();
    JobMetadata(const Aws::Utils::Json::JsonValue& jsonValue);
    JobMetadata& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The automatically generated ID for a job, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The automatically generated ID for a job, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The automatically generated ID for a job, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The automatically generated ID for a job, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The automatically generated ID for a job, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline JobMetadata& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The automatically generated ID for a job, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline JobMetadata& WithJobId(Aws::String&& value) { SetJobId(value); return *this;}

    /**
     * <p>The automatically generated ID for a job, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline JobMetadata& WithJobId(const char* value) { SetJobId(value); return *this;}

    /**
     * <p>The current state of the jobs.</p>
     */
    inline const JobState& GetJobState() const{ return m_jobState; }

    /**
     * <p>The current state of the jobs.</p>
     */
    inline void SetJobState(const JobState& value) { m_jobStateHasBeenSet = true; m_jobState = value; }

    /**
     * <p>The current state of the jobs.</p>
     */
    inline void SetJobState(JobState&& value) { m_jobStateHasBeenSet = true; m_jobState = value; }

    /**
     * <p>The current state of the jobs.</p>
     */
    inline JobMetadata& WithJobState(const JobState& value) { SetJobState(value); return *this;}

    /**
     * <p>The current state of the jobs.</p>
     */
    inline JobMetadata& WithJobState(JobState&& value) { SetJobState(value); return *this;}

    /**
     * <p>The type of job.</p>
     */
    inline const JobType& GetJobType() const{ return m_jobType; }

    /**
     * <p>The type of job.</p>
     */
    inline void SetJobType(const JobType& value) { m_jobTypeHasBeenSet = true; m_jobType = value; }

    /**
     * <p>The type of job.</p>
     */
    inline void SetJobType(JobType&& value) { m_jobTypeHasBeenSet = true; m_jobType = value; }

    /**
     * <p>The type of job.</p>
     */
    inline JobMetadata& WithJobType(const JobType& value) { SetJobType(value); return *this;}

    /**
     * <p>The type of job.</p>
     */
    inline JobMetadata& WithJobType(JobType&& value) { SetJobType(value); return *this;}

    /**
     * <p>The creation date for this job.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The creation date for this job.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The creation date for this job.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The creation date for this job.</p>
     */
    inline JobMetadata& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The creation date for this job.</p>
     */
    inline JobMetadata& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(value); return *this;}

    /**
     * <p>An array of <code>S3Resource</code> objects. Each <code>S3Resource</code>
     * object represents an Amazon S3 bucket that your transferred data will be
     * exported from or imported into.</p>
     */
    inline const JobResource& GetResources() const{ return m_resources; }

    /**
     * <p>An array of <code>S3Resource</code> objects. Each <code>S3Resource</code>
     * object represents an Amazon S3 bucket that your transferred data will be
     * exported from or imported into.</p>
     */
    inline void SetResources(const JobResource& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>An array of <code>S3Resource</code> objects. Each <code>S3Resource</code>
     * object represents an Amazon S3 bucket that your transferred data will be
     * exported from or imported into.</p>
     */
    inline void SetResources(JobResource&& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>An array of <code>S3Resource</code> objects. Each <code>S3Resource</code>
     * object represents an Amazon S3 bucket that your transferred data will be
     * exported from or imported into.</p>
     */
    inline JobMetadata& WithResources(const JobResource& value) { SetResources(value); return *this;}

    /**
     * <p>An array of <code>S3Resource</code> objects. Each <code>S3Resource</code>
     * object represents an Amazon S3 bucket that your transferred data will be
     * exported from or imported into.</p>
     */
    inline JobMetadata& WithResources(JobResource&& value) { SetResources(value); return *this;}

    /**
     * <p>The description of the job, provided at job creation.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the job, provided at job creation.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the job, provided at job creation.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the job, provided at job creation.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the job, provided at job creation.</p>
     */
    inline JobMetadata& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the job, provided at job creation.</p>
     */
    inline JobMetadata& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the job, provided at job creation.</p>
     */
    inline JobMetadata& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the AWS Key Management Service (AWS KMS)
     * key associated with this job. This ARN was created using the
     * <code>CreateKey</code> API action in AWS KMS.</p>
     */
    inline const Aws::String& GetKmsKeyARN() const{ return m_kmsKeyARN; }

    /**
     * <p>The Amazon Resource Name (ARN) for the AWS Key Management Service (AWS KMS)
     * key associated with this job. This ARN was created using the
     * <code>CreateKey</code> API action in AWS KMS.</p>
     */
    inline void SetKmsKeyARN(const Aws::String& value) { m_kmsKeyARNHasBeenSet = true; m_kmsKeyARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the AWS Key Management Service (AWS KMS)
     * key associated with this job. This ARN was created using the
     * <code>CreateKey</code> API action in AWS KMS.</p>
     */
    inline void SetKmsKeyARN(Aws::String&& value) { m_kmsKeyARNHasBeenSet = true; m_kmsKeyARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the AWS Key Management Service (AWS KMS)
     * key associated with this job. This ARN was created using the
     * <code>CreateKey</code> API action in AWS KMS.</p>
     */
    inline void SetKmsKeyARN(const char* value) { m_kmsKeyARNHasBeenSet = true; m_kmsKeyARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the AWS Key Management Service (AWS KMS)
     * key associated with this job. This ARN was created using the
     * <code>CreateKey</code> API action in AWS KMS.</p>
     */
    inline JobMetadata& WithKmsKeyARN(const Aws::String& value) { SetKmsKeyARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the AWS Key Management Service (AWS KMS)
     * key associated with this job. This ARN was created using the
     * <code>CreateKey</code> API action in AWS KMS.</p>
     */
    inline JobMetadata& WithKmsKeyARN(Aws::String&& value) { SetKmsKeyARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the AWS Key Management Service (AWS KMS)
     * key associated with this job. This ARN was created using the
     * <code>CreateKey</code> API action in AWS KMS.</p>
     */
    inline JobMetadata& WithKmsKeyARN(const char* value) { SetKmsKeyARN(value); return *this;}

    /**
     * <p>The role ARN associated with this job. This ARN was created using the
     * <code>CreateRole</code> API action in AWS Identity and Access Management
     * (IAM).</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The role ARN associated with this job. This ARN was created using the
     * <code>CreateRole</code> API action in AWS Identity and Access Management
     * (IAM).</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The role ARN associated with this job. This ARN was created using the
     * <code>CreateRole</code> API action in AWS Identity and Access Management
     * (IAM).</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The role ARN associated with this job. This ARN was created using the
     * <code>CreateRole</code> API action in AWS Identity and Access Management
     * (IAM).</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The role ARN associated with this job. This ARN was created using the
     * <code>CreateRole</code> API action in AWS Identity and Access Management
     * (IAM).</p>
     */
    inline JobMetadata& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The role ARN associated with this job. This ARN was created using the
     * <code>CreateRole</code> API action in AWS Identity and Access Management
     * (IAM).</p>
     */
    inline JobMetadata& WithRoleARN(Aws::String&& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The role ARN associated with this job. This ARN was created using the
     * <code>CreateRole</code> API action in AWS Identity and Access Management
     * (IAM).</p>
     */
    inline JobMetadata& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}

    /**
     * <p>The ID for the address that you want the Snowball shipped to.</p>
     */
    inline const Aws::String& GetAddressId() const{ return m_addressId; }

    /**
     * <p>The ID for the address that you want the Snowball shipped to.</p>
     */
    inline void SetAddressId(const Aws::String& value) { m_addressIdHasBeenSet = true; m_addressId = value; }

    /**
     * <p>The ID for the address that you want the Snowball shipped to.</p>
     */
    inline void SetAddressId(Aws::String&& value) { m_addressIdHasBeenSet = true; m_addressId = value; }

    /**
     * <p>The ID for the address that you want the Snowball shipped to.</p>
     */
    inline void SetAddressId(const char* value) { m_addressIdHasBeenSet = true; m_addressId.assign(value); }

    /**
     * <p>The ID for the address that you want the Snowball shipped to.</p>
     */
    inline JobMetadata& WithAddressId(const Aws::String& value) { SetAddressId(value); return *this;}

    /**
     * <p>The ID for the address that you want the Snowball shipped to.</p>
     */
    inline JobMetadata& WithAddressId(Aws::String&& value) { SetAddressId(value); return *this;}

    /**
     * <p>The ID for the address that you want the Snowball shipped to.</p>
     */
    inline JobMetadata& WithAddressId(const char* value) { SetAddressId(value); return *this;}

    /**
     * <p>A job's shipping information, including inbound and outbound tracking numbers
     * and shipping speed options.</p>
     */
    inline const ShippingDetails& GetShippingDetails() const{ return m_shippingDetails; }

    /**
     * <p>A job's shipping information, including inbound and outbound tracking numbers
     * and shipping speed options.</p>
     */
    inline void SetShippingDetails(const ShippingDetails& value) { m_shippingDetailsHasBeenSet = true; m_shippingDetails = value; }

    /**
     * <p>A job's shipping information, including inbound and outbound tracking numbers
     * and shipping speed options.</p>
     */
    inline void SetShippingDetails(ShippingDetails&& value) { m_shippingDetailsHasBeenSet = true; m_shippingDetails = value; }

    /**
     * <p>A job's shipping information, including inbound and outbound tracking numbers
     * and shipping speed options.</p>
     */
    inline JobMetadata& WithShippingDetails(const ShippingDetails& value) { SetShippingDetails(value); return *this;}

    /**
     * <p>A job's shipping information, including inbound and outbound tracking numbers
     * and shipping speed options.</p>
     */
    inline JobMetadata& WithShippingDetails(ShippingDetails&& value) { SetShippingDetails(value); return *this;}

    /**
     * <p>The Snowball capacity preference for this job, specified at job creation. In
     * US regions, you can choose between 50 TB and 80 TB Snowballs. All other regions
     * use 80 TB capacity Snowballs.</p>
     */
    inline const SnowballCapacity& GetSnowballCapacityPreference() const{ return m_snowballCapacityPreference; }

    /**
     * <p>The Snowball capacity preference for this job, specified at job creation. In
     * US regions, you can choose between 50 TB and 80 TB Snowballs. All other regions
     * use 80 TB capacity Snowballs.</p>
     */
    inline void SetSnowballCapacityPreference(const SnowballCapacity& value) { m_snowballCapacityPreferenceHasBeenSet = true; m_snowballCapacityPreference = value; }

    /**
     * <p>The Snowball capacity preference for this job, specified at job creation. In
     * US regions, you can choose between 50 TB and 80 TB Snowballs. All other regions
     * use 80 TB capacity Snowballs.</p>
     */
    inline void SetSnowballCapacityPreference(SnowballCapacity&& value) { m_snowballCapacityPreferenceHasBeenSet = true; m_snowballCapacityPreference = value; }

    /**
     * <p>The Snowball capacity preference for this job, specified at job creation. In
     * US regions, you can choose between 50 TB and 80 TB Snowballs. All other regions
     * use 80 TB capacity Snowballs.</p>
     */
    inline JobMetadata& WithSnowballCapacityPreference(const SnowballCapacity& value) { SetSnowballCapacityPreference(value); return *this;}

    /**
     * <p>The Snowball capacity preference for this job, specified at job creation. In
     * US regions, you can choose between 50 TB and 80 TB Snowballs. All other regions
     * use 80 TB capacity Snowballs.</p>
     */
    inline JobMetadata& WithSnowballCapacityPreference(SnowballCapacity&& value) { SetSnowballCapacityPreference(value); return *this;}

    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) notification settings
     * associated with a specific job. The <code>Notification</code> object is returned
     * as a part of the response syntax of the <code>DescribeJob</code> action in the
     * <code>JobMetadata</code> data type.</p>
     */
    inline const Notification& GetNotification() const{ return m_notification; }

    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) notification settings
     * associated with a specific job. The <code>Notification</code> object is returned
     * as a part of the response syntax of the <code>DescribeJob</code> action in the
     * <code>JobMetadata</code> data type.</p>
     */
    inline void SetNotification(const Notification& value) { m_notificationHasBeenSet = true; m_notification = value; }

    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) notification settings
     * associated with a specific job. The <code>Notification</code> object is returned
     * as a part of the response syntax of the <code>DescribeJob</code> action in the
     * <code>JobMetadata</code> data type.</p>
     */
    inline void SetNotification(Notification&& value) { m_notificationHasBeenSet = true; m_notification = value; }

    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) notification settings
     * associated with a specific job. The <code>Notification</code> object is returned
     * as a part of the response syntax of the <code>DescribeJob</code> action in the
     * <code>JobMetadata</code> data type.</p>
     */
    inline JobMetadata& WithNotification(const Notification& value) { SetNotification(value); return *this;}

    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) notification settings
     * associated with a specific job. The <code>Notification</code> object is returned
     * as a part of the response syntax of the <code>DescribeJob</code> action in the
     * <code>JobMetadata</code> data type.</p>
     */
    inline JobMetadata& WithNotification(Notification&& value) { SetNotification(value); return *this;}

    /**
     * <p>A value that defines the real-time status of a Snowball's data transfer while
     * the appliance is at AWS. Note that this data is only available while a job has a
     * <code>JobState</code> value of <code>InProgress</code>, for both import and
     * export jobs.</p>
     */
    inline const DataTransfer& GetDataTransferProgress() const{ return m_dataTransferProgress; }

    /**
     * <p>A value that defines the real-time status of a Snowball's data transfer while
     * the appliance is at AWS. Note that this data is only available while a job has a
     * <code>JobState</code> value of <code>InProgress</code>, for both import and
     * export jobs.</p>
     */
    inline void SetDataTransferProgress(const DataTransfer& value) { m_dataTransferProgressHasBeenSet = true; m_dataTransferProgress = value; }

    /**
     * <p>A value that defines the real-time status of a Snowball's data transfer while
     * the appliance is at AWS. Note that this data is only available while a job has a
     * <code>JobState</code> value of <code>InProgress</code>, for both import and
     * export jobs.</p>
     */
    inline void SetDataTransferProgress(DataTransfer&& value) { m_dataTransferProgressHasBeenSet = true; m_dataTransferProgress = value; }

    /**
     * <p>A value that defines the real-time status of a Snowball's data transfer while
     * the appliance is at AWS. Note that this data is only available while a job has a
     * <code>JobState</code> value of <code>InProgress</code>, for both import and
     * export jobs.</p>
     */
    inline JobMetadata& WithDataTransferProgress(const DataTransfer& value) { SetDataTransferProgress(value); return *this;}

    /**
     * <p>A value that defines the real-time status of a Snowball's data transfer while
     * the appliance is at AWS. Note that this data is only available while a job has a
     * <code>JobState</code> value of <code>InProgress</code>, for both import and
     * export jobs.</p>
     */
    inline JobMetadata& WithDataTransferProgress(DataTransfer&& value) { SetDataTransferProgress(value); return *this;}

    /**
     * <p>Links to Amazon S3 presigned URLs for the job report and logs. For import
     * jobs, the PDF job report becomes available at the end of the import process. For
     * export jobs, your job report typically becomes available while the Snowball for
     * your job part is being delivered to you.</p>
     */
    inline const JobLogs& GetJobLogInfo() const{ return m_jobLogInfo; }

    /**
     * <p>Links to Amazon S3 presigned URLs for the job report and logs. For import
     * jobs, the PDF job report becomes available at the end of the import process. For
     * export jobs, your job report typically becomes available while the Snowball for
     * your job part is being delivered to you.</p>
     */
    inline void SetJobLogInfo(const JobLogs& value) { m_jobLogInfoHasBeenSet = true; m_jobLogInfo = value; }

    /**
     * <p>Links to Amazon S3 presigned URLs for the job report and logs. For import
     * jobs, the PDF job report becomes available at the end of the import process. For
     * export jobs, your job report typically becomes available while the Snowball for
     * your job part is being delivered to you.</p>
     */
    inline void SetJobLogInfo(JobLogs&& value) { m_jobLogInfoHasBeenSet = true; m_jobLogInfo = value; }

    /**
     * <p>Links to Amazon S3 presigned URLs for the job report and logs. For import
     * jobs, the PDF job report becomes available at the end of the import process. For
     * export jobs, your job report typically becomes available while the Snowball for
     * your job part is being delivered to you.</p>
     */
    inline JobMetadata& WithJobLogInfo(const JobLogs& value) { SetJobLogInfo(value); return *this;}

    /**
     * <p>Links to Amazon S3 presigned URLs for the job report and logs. For import
     * jobs, the PDF job report becomes available at the end of the import process. For
     * export jobs, your job report typically becomes available while the Snowball for
     * your job part is being delivered to you.</p>
     */
    inline JobMetadata& WithJobLogInfo(JobLogs&& value) { SetJobLogInfo(value); return *this;}

  private:
    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;
    JobState m_jobState;
    bool m_jobStateHasBeenSet;
    JobType m_jobType;
    bool m_jobTypeHasBeenSet;
    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;
    JobResource m_resources;
    bool m_resourcesHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_kmsKeyARN;
    bool m_kmsKeyARNHasBeenSet;
    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;
    Aws::String m_addressId;
    bool m_addressIdHasBeenSet;
    ShippingDetails m_shippingDetails;
    bool m_shippingDetailsHasBeenSet;
    SnowballCapacity m_snowballCapacityPreference;
    bool m_snowballCapacityPreferenceHasBeenSet;
    Notification m_notification;
    bool m_notificationHasBeenSet;
    DataTransfer m_dataTransferProgress;
    bool m_dataTransferProgressHasBeenSet;
    JobLogs m_jobLogInfo;
    bool m_jobLogInfoHasBeenSet;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
