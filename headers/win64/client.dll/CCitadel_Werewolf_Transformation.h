#pragma once

class CCitadel_Werewolf_Transformation : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1810, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x17D8]; // offset 0x0
    bool m_bIsTransformed; // offset 0x17D8, size 0x1, align 1 | MNetworkEnable
    bool m_bIsTransformingBack; // offset 0x17D9, size 0x1, align 1
    char _pad_17DA[0x2]; // offset 0x17DA
    GameTime_t m_tLastRegenComponentThinkTime; // offset 0x17DC, size 0x4, align 255
    char _pad_17E0[0x4]; // offset 0x17E0
    GameTime_t m_tForceTransformTime; // offset 0x17E4, size 0x4, align 255
    GameTime_t m_flWerewolfStartTime; // offset 0x17E8, size 0x4, align 255 | MNetworkEnable
    char _pad_17EC[0x4]; // offset 0x17EC
    CCitadelModifier* m_pWerewolfModifier; // offset 0x17F0, size 0x8, align 8
    char _pad_17F8[0x18]; // offset 0x17F8
};
