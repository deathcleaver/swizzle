#ifndef VK_HPP
#define VK_HPP

#if defined(SW_WINDOWS)
#define VK_USE_PLATFORM_WIN32_KHR
#endif

#pragma warning( push )
#pragma warning( disable : 26495)
#pragma warning( disable : 26812)
#include <vulkan/vulkan.h>
#pragma warning( pop ) 

#endif