#pragma once

class CDOTA_Ability_Sven_StormBolt : public CDOTABaseAbility /*0x0*/  // sizeof 0x868, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 vision_radius; // offset 0x85C, size 0x4, align 4
    bool m_bIsAltCastState; // offset 0x860, size 0x1, align 1
    char _pad_0861[0x7]; // offset 0x861
};
