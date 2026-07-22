#pragma once

class CDOTA_Ability_Razor_StaticLink : public CDOTABaseAbility /*0x0*/  // sizeof 0x5A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    int32 m_iLinkIndex; // offset 0x580, size 0x4, align 4
    char _pad_0584[0x4]; // offset 0x584
    CountdownTimer m_ViewerTimer; // offset 0x588, size 0x18, align 8
    float32 vision_duration; // offset 0x5A0, size 0x4, align 4
    bool m_bIsAltCastState; // offset 0x5A4, size 0x1, align 1
    char _pad_05A5[0x3]; // offset 0x5A5
};
