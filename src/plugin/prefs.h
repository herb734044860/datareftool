#pragma once

#include <boost/filesystem/path.hpp>

#include <json.hpp>

bool getAutoReloadPlugins();
void setAutoReloadPlugins(bool reload_automatically);

bool getImpersonateDRE();
bool getLoggingEnabled();
void setImpersonateDRE(bool impersonate);

bool loadPrefs(const boost::filesystem::path & path);
bool savePrefs(const boost::filesystem::path & path, const nlohmann::json & windows);
