﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/LoRaWANSendDataToDevice.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>The message in downlink queue.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DownlinkQueueMessage">AWS
   * API Reference</a></p>
   */
  class AWS_IOTWIRELESS_API DownlinkQueueMessage
  {
  public:
    DownlinkQueueMessage();
    DownlinkQueueMessage(Aws::Utils::Json::JsonView jsonValue);
    DownlinkQueueMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The messageId allocated by IoT Wireless for tracing purpose</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p> The messageId allocated by IoT Wireless for tracing purpose</p>
     */
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }

    /**
     * <p> The messageId allocated by IoT Wireless for tracing purpose</p>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }

    /**
     * <p> The messageId allocated by IoT Wireless for tracing purpose</p>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }

    /**
     * <p> The messageId allocated by IoT Wireless for tracing purpose</p>
     */
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }

    /**
     * <p> The messageId allocated by IoT Wireless for tracing purpose</p>
     */
    inline DownlinkQueueMessage& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p> The messageId allocated by IoT Wireless for tracing purpose</p>
     */
    inline DownlinkQueueMessage& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * <p> The messageId allocated by IoT Wireless for tracing purpose</p>
     */
    inline DownlinkQueueMessage& WithMessageId(const char* value) { SetMessageId(value); return *this;}


    /**
     * <p>The transmit mode to use to send data to the wireless device. Can be:
     * <code>0</code> for UM (unacknowledge mode) or <code>1</code> for AM (acknowledge
     * mode).</p>
     */
    inline int GetTransmitMode() const{ return m_transmitMode; }

    /**
     * <p>The transmit mode to use to send data to the wireless device. Can be:
     * <code>0</code> for UM (unacknowledge mode) or <code>1</code> for AM (acknowledge
     * mode).</p>
     */
    inline bool TransmitModeHasBeenSet() const { return m_transmitModeHasBeenSet; }

    /**
     * <p>The transmit mode to use to send data to the wireless device. Can be:
     * <code>0</code> for UM (unacknowledge mode) or <code>1</code> for AM (acknowledge
     * mode).</p>
     */
    inline void SetTransmitMode(int value) { m_transmitModeHasBeenSet = true; m_transmitMode = value; }

    /**
     * <p>The transmit mode to use to send data to the wireless device. Can be:
     * <code>0</code> for UM (unacknowledge mode) or <code>1</code> for AM (acknowledge
     * mode).</p>
     */
    inline DownlinkQueueMessage& WithTransmitMode(int value) { SetTransmitMode(value); return *this;}


    /**
     * <p>The timestamp that Iot Wireless received the message.</p>
     */
    inline const Aws::String& GetReceivedAt() const{ return m_receivedAt; }

    /**
     * <p>The timestamp that Iot Wireless received the message.</p>
     */
    inline bool ReceivedAtHasBeenSet() const { return m_receivedAtHasBeenSet; }

    /**
     * <p>The timestamp that Iot Wireless received the message.</p>
     */
    inline void SetReceivedAt(const Aws::String& value) { m_receivedAtHasBeenSet = true; m_receivedAt = value; }

    /**
     * <p>The timestamp that Iot Wireless received the message.</p>
     */
    inline void SetReceivedAt(Aws::String&& value) { m_receivedAtHasBeenSet = true; m_receivedAt = std::move(value); }

    /**
     * <p>The timestamp that Iot Wireless received the message.</p>
     */
    inline void SetReceivedAt(const char* value) { m_receivedAtHasBeenSet = true; m_receivedAt.assign(value); }

    /**
     * <p>The timestamp that Iot Wireless received the message.</p>
     */
    inline DownlinkQueueMessage& WithReceivedAt(const Aws::String& value) { SetReceivedAt(value); return *this;}

    /**
     * <p>The timestamp that Iot Wireless received the message.</p>
     */
    inline DownlinkQueueMessage& WithReceivedAt(Aws::String&& value) { SetReceivedAt(std::move(value)); return *this;}

    /**
     * <p>The timestamp that Iot Wireless received the message.</p>
     */
    inline DownlinkQueueMessage& WithReceivedAt(const char* value) { SetReceivedAt(value); return *this;}


    
    inline const LoRaWANSendDataToDevice& GetLoRaWAN() const{ return m_loRaWAN; }

    
    inline bool LoRaWANHasBeenSet() const { return m_loRaWANHasBeenSet; }

    
    inline void SetLoRaWAN(const LoRaWANSendDataToDevice& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = value; }

    
    inline void SetLoRaWAN(LoRaWANSendDataToDevice&& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = std::move(value); }

    
    inline DownlinkQueueMessage& WithLoRaWAN(const LoRaWANSendDataToDevice& value) { SetLoRaWAN(value); return *this;}

    
    inline DownlinkQueueMessage& WithLoRaWAN(LoRaWANSendDataToDevice&& value) { SetLoRaWAN(std::move(value)); return *this;}

  private:

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet;

    int m_transmitMode;
    bool m_transmitModeHasBeenSet;

    Aws::String m_receivedAt;
    bool m_receivedAtHasBeenSet;

    LoRaWANSendDataToDevice m_loRaWAN;
    bool m_loRaWANHasBeenSet;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
