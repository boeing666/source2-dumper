#pragma once

class CCitadel_Ability_HealthSwap : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x15E8, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x11D8, size 0x4, align 255
    char _pad_11DC[0x384]; // offset 0x11DC
    GameTime_t m_flPostCastHoldEndTime; // offset 0x1560, size 0x4, align 255 | MNetworkEnable
    char _pad_1564[0x84]; // offset 0x1564
};
