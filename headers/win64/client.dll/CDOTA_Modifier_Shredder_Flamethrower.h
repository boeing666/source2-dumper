#pragma once

class CDOTA_Modifier_Shredder_Flamethrower : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 length; // offset 0x1A78, size 0x4, align 4
    float32 width; // offset 0x1A7C, size 0x4, align 4
    float32 damage_per_second; // offset 0x1A80, size 0x4, align 4
    ParticleIndex_t m_nBeamFXIndex; // offset 0x1A84, size 0x4, align 255
    CHandle< C_BaseEntity > m_hBeamEnd; // offset 0x1A88, size 0x4, align 4
    GameTime_t m_flLastHit; // offset 0x1A8C, size 0x4, align 255
    CUtlVector< C_BaseEntity* > m_vecBurningTrees; // offset 0x1A90, size 0x18, align 8
};
