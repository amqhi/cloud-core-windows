// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include "Win32SecureStorageProvider.h"

#include <utility>

Win32SecureStorageProvider::Win32SecureStorageProvider(std::string storage_directory)
    : m_strStorageDirectory(std::move(storage_directory))
{
}

bool Win32SecureStorageProvider::set_secure_string(const std::string_view& key, const std::string& value)
{
    return SetSecureString(m_strStorageDirectory, L"Amqhi Cloud", key, value);
}

std::string Win32SecureStorageProvider::get_secure_string(
    const std::string_view& key,
    const std::string& default_value)
{
    return GetSecureString(m_strStorageDirectory, key, default_value);
}

void Win32SecureStorageProvider::remove_secure_string(const std::string_view& key)
{
    RemoveSecureString(m_strStorageDirectory, key);
}
