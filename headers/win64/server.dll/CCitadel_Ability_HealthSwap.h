#pragma once

class CCitadel_Ability_HealthSwap : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1A38, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x14A8, size 0x4, align 255
    char _pad_14AC[0x4D4]; // offset 0x14AC
    GameTime_t m_flPostCastHoldEndTime; // offset 0x1980, size 0x4, align 255
    char _pad_1984[0xB4]; // offset 0x1984
};
