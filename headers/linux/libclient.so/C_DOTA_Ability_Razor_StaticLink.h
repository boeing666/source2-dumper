#pragma once

class C_DOTA_Ability_Razor_StaticLink : public C_DOTABaseAbility /*0x0*/  // sizeof 0x850, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    int32 m_iLinkIndex; // offset 0x828, size 0x4, align 4
    char _pad_082C[0x4]; // offset 0x82C
    CountdownTimer m_ViewerTimer; // offset 0x830, size 0x18, align 8
    float32 vision_duration; // offset 0x848, size 0x4, align 4
    bool m_bIsAltCastState; // offset 0x84C, size 0x1, align 1
    char _pad_084D[0x3]; // offset 0x84D
};
