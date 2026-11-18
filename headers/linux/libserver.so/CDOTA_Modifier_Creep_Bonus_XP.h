#pragma once

class CDOTA_Modifier_Creep_Bonus_XP : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 radius; // offset 0x1AF8, size 0x4, align 4
    int32 hero_damage_penalty; // offset 0x1AFC, size 0x4, align 4
    int32 bonus_gold; // offset 0x1B00, size 0x4, align 4
    int32 bonus_xp; // offset 0x1B04, size 0x4, align 4
    int32 m_iGoldBounty; // offset 0x1B08, size 0x4, align 4
    ParticleIndex_t iBannerEffect; // offset 0x1B0C, size 0x4, align 255
    ParticleIndex_t iRingEffect; // offset 0x1B10, size 0x4, align 255
    char _pad_1B14[0x4]; // offset 0x1B14
};
