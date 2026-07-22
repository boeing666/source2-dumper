#pragma once

class CDOTA_Modifier_Lycan_SummonWolves_Spirited : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A68]; // offset 0x0
    CHandle< C_BaseEntity > m_hOwner; // offset 0x1A68, size 0x4, align 4
    int32 wolf_index; // offset 0x1A6C, size 0x4, align 4
    int32 back_distance; // offset 0x1A70, size 0x4, align 4
    int32 side_distance; // offset 0x1A74, size 0x4, align 4
    VectorWS m_vecDesiredPosition; // offset 0x1A78, size 0xC, align 4
    int32 m_iBackOffsetFactor; // offset 0x1A84, size 0x4, align 4
    bool m_bRightWolf; // offset 0x1A88, size 0x1, align 1
    char _pad_1A89[0x3]; // offset 0x1A89
    float32 invis_level; // offset 0x1A8C, size 0x4, align 4
    int32 model_scale; // offset 0x1A90, size 0x4, align 4
    bool m_bInitialized; // offset 0x1A94, size 0x1, align 1
    bool m_bDeathFxTriggered; // offset 0x1A95, size 0x1, align 1
    char _pad_1A96[0x2]; // offset 0x1A96
    float32 death_fx_time; // offset 0x1A98, size 0x4, align 4
    char _pad_1A9C[0x4]; // offset 0x1A9C
};
