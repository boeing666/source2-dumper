#pragma once

class CDOTA_Modifier_Creep_Bonus_XP : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 radius; // offset 0x1AA8, size 0x4, align 4
    int32 hero_damage_penalty; // offset 0x1AAC, size 0x4, align 4
    int32 bonus_gold; // offset 0x1AB0, size 0x4, align 4
    int32 bonus_xp; // offset 0x1AB4, size 0x4, align 4
    int32 m_iGoldBounty; // offset 0x1AB8, size 0x4, align 4
    ParticleIndex_t iBannerEffect; // offset 0x1ABC, size 0x4, align 255
    ParticleIndex_t iRingEffect; // offset 0x1AC0, size 0x4, align 255
    char _pad_1AC4[0x4]; // offset 0x1AC4
};
