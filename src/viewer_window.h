#pragma once
#include <boost/property_tree/ptree.hpp>

class DatarefViewerWindow;

DatarefViewerWindow * showViewerWindow();
DatarefViewerWindow * showViewerWindow(const boost::property_tree::ptree & window_details);
boost::property_tree::ptree getViewerWindowsDetails();

void updateWindowsAsDatarefsAdded();
void closeViewerWindow(DatarefViewerWindow * window);
void closeViewerWindows();
