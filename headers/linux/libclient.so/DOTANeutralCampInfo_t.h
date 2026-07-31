#pragma once

struct DOTANeutralCampInfo_t  // sizeof 0x38, align 0xFF [vtable] (client)
{
    char _pad_0000[0x30]; // offset 0x0
    CHandle< C_BaseEntity > m_hNeutralSpawner; // offset 0x30, size 0x4, align 4
    int32 m_nStackCount; // offset 0x34, size 0x4, align 4
};
