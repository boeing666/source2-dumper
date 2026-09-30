#pragma once

struct EventPreDataUpdate_t  // sizeof 0x10, align 0xFF [trivial_ctor trivial_dtor] (soundsystem)
{
    int32 m_nCount; // offset 0x0, size 0x4, align 4
    char _pad_0004[0xC]; // offset 0x4
};
