#pragma once

struct CreatureStateData_t  // sizeof 0x18, align 0xFF [trivial_ctor trivial_dtor] (server)
{
    char* pszName; // offset 0x0, size 0x8, align 8
    float32 flAggression; // offset 0x8, size 0x4, align 4
    float32 flAvoidance; // offset 0xC, size 0x4, align 4
    float32 flSupport; // offset 0x10, size 0x4, align 4
    float32 flRoamDistance; // offset 0x14, size 0x4, align 4
};
