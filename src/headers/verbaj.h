#ifndef VERBAJ_H
#define VERBAJ_H

// OS Specific
#ifdef _WIN64
  #include <os_specific/windows_headers.h>
#elif __APPLE__
  #include <os_specific/mac_headers.h>
#elif __posix
  #include <os_specific/posix_headers.h>
#endif

// Std Library
#include <iostream>
#include <vector>

// Tools
#include <tools/nomoveorcopy.h>
#include <types/types.h>

// Startup
#include <startup/Startup.h>

// Main Headers
#include <jit/jit.h>
#include <lit/lit.h>

#endif