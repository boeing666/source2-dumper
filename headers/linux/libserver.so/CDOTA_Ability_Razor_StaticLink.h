#pragma once

class CDOTA_Ability_Razor_StaticLink : public CDOTABaseAbility /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    int32 m_iLinkIndex; // offset 0x85C, size 0x4, align 4
    CountdownTimer m_ViewerTimer; // offset 0x860, size 0x18, align 8
    float32 vision_duration; // offset 0x878, size 0x4, align 4
    bool m_bIsAltCastState; // offset 0x87C, size 0x1, align 1
    char _pad_087D[0x3]; // offset 0x87D
};
