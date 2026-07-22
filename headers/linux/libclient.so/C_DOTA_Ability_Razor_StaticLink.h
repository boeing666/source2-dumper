#pragma once

class C_DOTA_Ability_Razor_StaticLink : public C_DOTABaseAbility /*0x0*/  // sizeof 0x848, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    int32 m_iLinkIndex; // offset 0x824, size 0x4, align 4
    CountdownTimer m_ViewerTimer; // offset 0x828, size 0x18, align 8
    float32 vision_duration; // offset 0x840, size 0x4, align 4
    bool m_bIsAltCastState; // offset 0x844, size 0x1, align 1
    char _pad_0845[0x3]; // offset 0x845
};
