#pragma once

class CCitadel_Ability_Nano_CatForm : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1670, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    bool m_bIsInCatform; // offset 0x11D8, size 0x1, align 1 | MNetworkEnable
    char _pad_11D9[0x3]; // offset 0x11D9
    GameTime_t m_flLastDamageTime; // offset 0x11DC, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flTransformStartTime; // offset 0x11E0, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flTransformEndTime; // offset 0x11E4, size 0x4, align 255 | MNetworkEnable
    float32 m_flStoredDamageAmp; // offset 0x11E8, size 0x4, align 4 | MNetworkEnable
    char _pad_11EC[0x484]; // offset 0x11EC
};
