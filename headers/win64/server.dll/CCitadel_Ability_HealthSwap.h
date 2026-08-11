#pragma once

class CCitadel_Ability_HealthSwap : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1380, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0xF70, size 0x4, align 255
    char _pad_0F74[0x384]; // offset 0xF74
    GameTime_t m_flPostCastHoldEndTime; // offset 0x12F8, size 0x4, align 255 | MNetworkEnable
    char _pad_12FC[0x84]; // offset 0x12FC
};
