#pragma once

struct EventPostDataUpdate_t  // sizeof 0x10, align 0xFF [trivial_ctor trivial_dtor] (engine2)
{
    int32 m_nCount; // offset 0x0, size 0x4, align 4
    char _pad_0004[0xC]; // offset 0x4
};
