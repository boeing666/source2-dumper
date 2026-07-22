#pragma once

struct FootstepSound_t  // sizeof 0x18, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CSoundEventName m_sFootstepSound; // offset 0x0, size 0x10, align 8
    int32 m_nFootstepPriority; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
};
