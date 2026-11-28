// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#ifndef CLOUD_CORE_WIN32_PLATFORM_UTILS_H
#define CLOUD_CORE_WIN32_PLATFORM_UTILS_H

#include "platform_utils.h"
#include "Win32PlatformUtilsShared.h"

class Win32PlatformUtils : public IPlatformUtils, public Win32PlatformUtilsShared
{
public:
    [[nodiscard]] std::string get_file_sha256_checksum(const std::string& file_path) const override;
    [[nodiscard]] std::string get_device_name() const override;
};

#endif // CLOUD_CORE_WIN32_PLATFORM_UTILS_H
