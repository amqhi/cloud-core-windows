// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#ifndef CLOUD_CORE_WIN32_SECURE_STORAGE_PROVIDER_H
#define CLOUD_CORE_WIN32_SECURE_STORAGE_PROVIDER_H

#include <string>
#include <string_view>

#include "secure_storage_provider.h"
#include "Win32SecureStorageProviderShared.h"

class Win32SecureStorageProvider : public ISecureStorageProvider, public Win32SecureStorageProviderShared
{
public:
    explicit Win32SecureStorageProvider(std::string storage_directory);

    bool set_secure_string(const std::string_view& key, const std::string& value) override;
    std::string get_secure_string(const std::string_view& key, const std::string& default_value) override;
    void remove_secure_string(const std::string_view& key) override;

private:
    std::string m_strStorageDirectory;
};

#endif // CLOUD_CORE_WIN32_SECURE_STORAGE_PROVIDER_H
