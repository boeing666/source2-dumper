#pragma once

class CCitadel_Ability_HealthSwap : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1C68, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x16D8, size 0x4, align 255
    char _pad_16DC[0x4D4]; // offset 0x16DC
    GameTime_t m_flPostCastHoldEndTime; // offset 0x1BB0, size 0x4, align 255
    char _pad_1BB4[0xB4]; // offset 0x1BB4
};
