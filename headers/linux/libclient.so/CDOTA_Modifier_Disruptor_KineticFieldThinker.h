#pragma once

class CDOTA_Modifier_Disruptor_KineticFieldThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 radius; // offset 0x1A58, size 0x4, align 4
    float32 formation_time; // offset 0x1A5C, size 0x4, align 4
    bool m_bActive; // offset 0x1A60, size 0x1, align 1
    char _pad_1A61[0x17]; // offset 0x1A61
    int32 m_nFXIndex; // offset 0x1A78, size 0x4, align 4
    char _pad_1A7C[0x4]; // offset 0x1A7C
};
