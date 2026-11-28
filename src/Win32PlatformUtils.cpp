// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include "Win32PlatformUtils.h"

#include "Win32PlatformUtilsShared.h"

std::string Win32PlatformUtils::get_file_sha256_checksum(const std::string& file_path) const
{
    return GetFileSha256Checksum(file_path);
}

std::string Win32PlatformUtils::get_device_name() const
{
    return GetDeviceName();
}
