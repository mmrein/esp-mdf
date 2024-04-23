// Copyright 2017 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// Do not edit this file because it is autogenerated by gen_mdf_err_to_name.py

#include <string.h>
#include "esp_err.h"
#if __has_include("soc/soc.h")
#include "soc/soc.h"
#endif
#if __has_include("mdf_err.h")
#include "mdf_err.h"
#endif
#if __has_include("mupgrade.h")
#include "mupgrade.h"
#endif
#if __has_include("mwifi.h")
#include "mwifi.h"
#endif

#ifdef CONFIG_MDF_ERR_TO_NAME_LOOKUP
#define ERR_TBL_IT(err)    {err, #err}

typedef struct {
    mdf_err_t code;
    const char *msg;
} mdf_err_msg_t;

static const mdf_err_msg_t mdf_err_msg_table[] = {
    // components/mcommon/include/mdf_err.h
#   ifdef      MDF_FAIL
    ERR_TBL_IT(MDF_FAIL),                             /**<      -1 Generic mdf_err_t code indicating failure */
#   endif
#   ifdef      MDF_OK
    ERR_TBL_IT(MDF_OK),                               /**<       0 mdf_err_t value indicating success (no error) */
#   endif
#   ifdef      MDF_ERR_NO_MEM
    ERR_TBL_IT(MDF_ERR_NO_MEM),                       /**< 1048577 0x100001 Out of memory */
#   endif
#   ifdef      MDF_ERR_INVALID_ARG
    ERR_TBL_IT(MDF_ERR_INVALID_ARG),                  /**< 1048578 0x100002 Invalid argument */
#   endif
#   ifdef      MDF_ERR_INVALID_STATE
    ERR_TBL_IT(MDF_ERR_INVALID_STATE),                /**< 1048579 0x100003 Invalid state */
#   endif
#   ifdef      MDF_ERR_INVALID_SIZE
    ERR_TBL_IT(MDF_ERR_INVALID_SIZE),                 /**< 1048580 0x100004 Invalid size */
#   endif
#   ifdef      MDF_ERR_NOT_FOUND
    ERR_TBL_IT(MDF_ERR_NOT_FOUND),                    /**< 1048581 0x100005 Requested resource not found */
#   endif
#   ifdef      MDF_ERR_NOT_SUPPORTED
    ERR_TBL_IT(MDF_ERR_NOT_SUPPORTED),                /**< 1048582 0x100006 Operation or feature not supported */
#   endif
#   ifdef      MDF_ERR_TIMEOUT
    ERR_TBL_IT(MDF_ERR_TIMEOUT),                      /**< 1048583 0x100007 Operation timed out */
#   endif
#   ifdef      MDF_ERR_INVALID_RESPONSE
    ERR_TBL_IT(MDF_ERR_INVALID_RESPONSE),             /**< 1048584 0x100008 Received response was invalid */
#   endif
#   ifdef      MDF_ERR_INVALID_CRC
    ERR_TBL_IT(MDF_ERR_INVALID_CRC),                  /**< 1048585 0x100009 CRC or checksum was invalid */
#   endif
#   ifdef      MDF_ERR_INVALID_VERSION
    ERR_TBL_IT(MDF_ERR_INVALID_VERSION),              /**< 1048586 0x10000a Version was invalid */
#   endif
#   ifdef      MDF_ERR_INVALID_MAC
    ERR_TBL_IT(MDF_ERR_INVALID_MAC),                  /**< 1048587 0x10000b MAC address was invalid */
#   endif
#   ifdef      MDF_ERR_NOT_INIT
    ERR_TBL_IT(MDF_ERR_NOT_INIT),                     /**< 1048588 0x10000c MAC address was invalid */
#   endif
#   ifdef      MDF_ERR_BUF
    ERR_TBL_IT(MDF_ERR_BUF),                          /**< 1048589 0x10000d The buffer is too small */
#   endif
#   ifdef      MDF_ERR_MWIFI_BASE
    ERR_TBL_IT(MDF_ERR_MWIFI_BASE),                   /**< 2097152 0x200000 Starting number of MWIFI error codes */
#   endif
    // components/mwifi/include/mwifi.h
#   ifdef      MDF_ERR_MWIFI_NOT_INIT
    ERR_TBL_IT(MDF_ERR_MWIFI_NOT_INIT),               /**< 2097153 0x200001 Mwifi isn't initialized */
#   endif
#   ifdef      MDF_ERR_MWIFI_INITED
    ERR_TBL_IT(MDF_ERR_MWIFI_INITED),                 /**< 2097154 0x200002 Mwifi has been initialized */
#   endif
#   ifdef      MDF_ERR_MWIFI_NOT_START
    ERR_TBL_IT(MDF_ERR_MWIFI_NOT_START),              /**< 2097155 0x200003 Mwifi isn't started */
#   endif
#   ifdef      MDF_ERR_MWIFI_ARGUMENT
    ERR_TBL_IT(MDF_ERR_MWIFI_ARGUMENT),               /**< 2097156 0x200004 Illegal argument */
#   endif
#   ifdef      MDF_ERR_MWIFI_EXCEED_PAYLOAD
    ERR_TBL_IT(MDF_ERR_MWIFI_EXCEED_PAYLOAD),         /**< 2097157 0x200005 Packet size exceeds payload */
#   endif
#   ifdef      MDF_ERR_MWIFI_TIMEOUT
    ERR_TBL_IT(MDF_ERR_MWIFI_TIMEOUT),                /**< 2097158 0x200006 Timeout */
#   endif
#   ifdef      MDF_ERR_MWIFI_DISCONNECTED
    ERR_TBL_IT(MDF_ERR_MWIFI_DISCONNECTED),           /**< 2097159 0x200007 Disconnected with parent on station interface */
#   endif
#   ifdef      MDF_ERR_MWIFI_NO_CONFIG
    ERR_TBL_IT(MDF_ERR_MWIFI_NO_CONFIG),              /**< 2097160 0x200008 Router not configured */
#   endif
#   ifdef      MDF_ERR_MWIFI_NO_FOUND
    ERR_TBL_IT(MDF_ERR_MWIFI_NO_FOUND),               /**< 2097161 0x200009 Routes or devices not found */
#   endif
#   ifdef      MDF_ERR_MWIFI_NO_ROOT
    ERR_TBL_IT(MDF_ERR_MWIFI_NO_ROOT),                /**< 2097162 0x20000a Routes or devices not found */
#   endif
    // components/mcommon/include/mdf_err.h
#   ifdef      MDF_ERR_MESPNOW_BASE
    ERR_TBL_IT(MDF_ERR_MESPNOW_BASE),                 /**< 3145728 0x300000 Starting number of MESPNOW error codes */
#   endif
#   ifdef      MDF_ERR_MCONFIG_BASE
    ERR_TBL_IT(MDF_ERR_MCONFIG_BASE),                 /**< 4194304 0x400000 Starting number of MCONFIG error codes */
#   endif
#   ifdef      MDF_ERR_MUPGRADE_BASE
    ERR_TBL_IT(MDF_ERR_MUPGRADE_BASE),                /**< 5242880 0x500000 Starting number of MUPGRADE error codes */
#   endif
    // components/mupgrade/include/mupgrade.h
#   ifdef      MDF_ERR_MUPGRADE_FIRMWARE_NOT_INIT
    ERR_TBL_IT(MDF_ERR_MUPGRADE_FIRMWARE_NOT_INIT),   /**< 5242881 0x500001 Uninitialized firmware configuration */
#   endif
#   ifdef      MDF_ERR_MUPGRADE_FIRMWARE_PARTITION
    ERR_TBL_IT(MDF_ERR_MUPGRADE_FIRMWARE_PARTITION),  /**< 5242882 0x500002 Partition table error */
#   endif
#   ifdef      MDF_ERR_MUPGRADE_FIRMWARE_INVALID
    ERR_TBL_IT(MDF_ERR_MUPGRADE_FIRMWARE_INVALID),    /**< 5242883 0x500003 Non-project generated firmware */
#   endif
#   ifdef      MDF_ERR_MUPGRADE_FIRMWARE_INCOMPLETE
    ERR_TBL_IT(MDF_ERR_MUPGRADE_FIRMWARE_INCOMPLETE), /**< 5242884 0x500004 The firmware received by the device is incomplete */
#   endif
#   ifdef      MDF_ERR_MUPGRADE_FIRMWARE_DOWNLOAD
    ERR_TBL_IT(MDF_ERR_MUPGRADE_FIRMWARE_DOWNLOAD),   /**< 5242885 0x500005 Firmware write flash error */
#   endif
#   ifdef      MDF_ERR_MUPGRADE_FIRMWARE_FINISH
    ERR_TBL_IT(MDF_ERR_MUPGRADE_FIRMWARE_FINISH),     /**< 5242886 0x500006 The firmware has been written to completion */
#   endif
#   ifdef      MDF_ERR_MUPGRADE_DEVICE_NO_EXIST
    ERR_TBL_IT(MDF_ERR_MUPGRADE_DEVICE_NO_EXIST),     /**< 5242887 0x500007 The device that needs to be upgraded does
                                                                            not exist */
#   endif
#   ifdef      MDF_ERR_MUPGRADE_SEND_PACKET_LOSS
    ERR_TBL_IT(MDF_ERR_MUPGRADE_SEND_PACKET_LOSS),    /**< 5242888 0x500008 Request device upgrade status failed */
#   endif
#   ifdef      MDF_ERR_MUPGRADE_NOT_INIT
    ERR_TBL_IT(MDF_ERR_MUPGRADE_NOT_INIT),            /**< 5242889 0x500009 Upgrade configuration is not initialized */
#   endif
#   ifdef      MDF_ERR_MUPGRADE_STOP
    ERR_TBL_IT(MDF_ERR_MUPGRADE_STOP),                /**< 5242890 0x50000a Upgrade configuration is not initialized */
#   endif
    // components/mcommon/include/mdf_err.h
#   ifdef      MDF_ERR_MDEBUG_BASE
    ERR_TBL_IT(MDF_ERR_MDEBUG_BASE),                  /**< 6291456 0x600000 Starting number of MDEBUG error codes */
#   endif
#   ifdef      MDF_ERR_MLINK_BASE
    ERR_TBL_IT(MDF_ERR_MLINK_BASE),                   /**< 7340032 0x700000 Starting number of MLINK error codes */
#   endif
#   ifdef      MDF_ERR_CUSTOM_BASE
    ERR_TBL_IT(MDF_ERR_CUSTOM_BASE),                  /**< 8388608 0x800000 Starting number of COUSTOM error codes */
#   endif
};
#endif //CONFIG_MDF_ERR_TO_NAME_LOOKUP

static const char mdf_unknown_msg[] =
#ifdef CONFIG_MDF_ERR_TO_NAME_LOOKUP
    "ERROR";
#else
    "UNKNOWN ERROR";
#endif //CONFIG_MDF_ERR_TO_NAME_LOOKUP

const char *mdf_err_to_name(mdf_err_t code)
{
    if (code > 0 && code < 0x100) {
        return strerror(code);
    } else if (code < 0x100000 && code != ESP_OK && code != ESP_FAIL) {
        return esp_err_to_name(code);
    }

#ifdef CONFIG_MDF_ERR_TO_NAME_LOOKUP
    int i;

    for (i = 0; i < sizeof(mdf_err_msg_table) / sizeof(mdf_err_msg_table[0]); ++i) {
        if (mdf_err_msg_table[i].code == code) {
            return mdf_err_msg_table[i].msg;
        }
    }

#endif //CONFIG_MDF_ERR_TO_NAME_LOOKUP

    return mdf_unknown_msg;
}
