#pragma once

class CDOTA_Modifier_CrystalMaiden_IceRink_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 radius; // offset 0x1A58, size 0x4, align 4
    float32 rink_formation_time; // offset 0x1A5C, size 0x4, align 4
    bool m_bActive; // offset 0x1A60, size 0x1, align 1
    char _pad_1A61[0x7]; // offset 0x1A61
};
