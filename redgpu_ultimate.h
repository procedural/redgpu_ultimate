#pragma once

#ifdef _WIN32
#include "C:/RedGpuSDK/redgpu.h"
#include "C:/RedGpuSDK/redgpu_wsi.h"
#include "C:/RedGpuSDK/redgpu_array_timestamp.h"
#include "C:/RedGpuSDK/redgpu_computing_language.h"
#include "C:/RedGpuSDK/redgpu_debug.h"
#include "C:/RedGpuSDK/redgpu_gpuvis.h"
#include "C:/RedGpuSDK/redgpu_print.h"
#include "C:/RedGpuSDK/redgpu_context_from_vk.h"
#include "C:/RedGpuSDK/radeonrays.h"
#include "C:/RedGpuSDK/radeonrays_redgpu.h"
#endif

#ifdef __linux__
#include "/opt/RedGpuSDK/redgpu.h"
#include "/opt/RedGpuSDK/redgpu_wsi.h"
#include "/opt/RedGpuSDK/redgpu_array_timestamp.h"
#include "/opt/RedGpuSDK/redgpu_computing_language.h"
#include "/opt/RedGpuSDK/redgpu_debug.h"
#include "/opt/RedGpuSDK/redgpu_gpuvis.h"
#include "/opt/RedGpuSDK/redgpu_print.h"
#include "/opt/RedGpuSDK/redgpu_context_from_vk.h"
#include "/opt/RedGpuSDK/radeonrays.h"
#include "/opt/RedGpuSDK/radeonrays_redgpu.h"
#endif

#ifdef _WIN32
#include "C:/github/procedural/redgpu_helper/redgpu_helper.h"
#include "C:/github/procedural/redgpu_memory_allocator_vma/redgpu_memory_allocator.h"
#include "C:/github/procedural/redgpu_memory_allocator_vma/redgpu_memory_allocator_functions.h"
#include "C:/github/procedural/redgpu_green_struct/redgpu_green_struct.h"
#include "C:/github/procedural/redgpu_inline_procedure/redgpu_inline_procedure.h"
#endif

#ifdef __linux__
#include "/opt/github/procedural/redgpu_helper/redgpu_helper.h"
#include "/opt/github/procedural/redgpu_memory_allocator_vma/redgpu_memory_allocator.h"
#include "/opt/github/procedural/redgpu_memory_allocator_vma/redgpu_memory_allocator_functions.h"
#include "/opt/github/procedural/redgpu_green_struct/redgpu_green_struct.h"
#include "/opt/github/procedural/redgpu_inline_procedure/redgpu_inline_procedure.h"
#endif
