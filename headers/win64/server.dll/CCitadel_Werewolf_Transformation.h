#pragma once

class CCitadel_Werewolf_Transformation : public CCitadelBaseAbility /*0x0*/  // sizeof 0x15A8, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1570]; // offset 0x0
    bool m_bIsTransformed; // offset 0x1570, size 0x1, align 1 | MNetworkEnable
    bool m_bIsTransformingBack; // offset 0x1571, size 0x1, align 1
    char _pad_1572[0x2]; // offset 0x1572
    GameTime_t m_tLastRegenComponentThinkTime; // offset 0x1574, size 0x4, align 255
    char _pad_1578[0x4]; // offset 0x1578
    GameTime_t m_tForceTransformTime; // offset 0x157C, size 0x4, align 255
    GameTime_t m_flWerewolfStartTime; // offset 0x1580, size 0x4, align 255 | MNetworkEnable
    char _pad_1584[0x4]; // offset 0x1584
    CCitadelModifier* m_pWerewolfModifier; // offset 0x1588, size 0x8, align 8
    char _pad_1590[0x18]; // offset 0x1590
};
