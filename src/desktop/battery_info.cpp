/*
 Copyright (C) 2018 by Martin Hrubý <hrubymar10@gmail.com>
 Part of the Battle for Wesnoth Project https://www.wesnoth.org/
 
 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY.
 
 See the COPYING file for more details.
 */

#include "battery_info.hpp"

#ifdef __APPLE__
#include "apple_battery_info.hpp"
#endif

namespace desktop {
    
namespace battery_info {
        
bool does_device_have_battery()
{
#if defined(__APPLE__)
    return apple_battery_info::does_device_have_battery();
#else
    return false;
#endif
}

double get_battery_percentage()
{
#if defined(__APPLE__)
    return apple_battery_info::get_battery_percentage();
#else
    return -1;
#endif
}
        
} // end namespace battery_info
    
} // end namespace desktop
