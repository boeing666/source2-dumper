#pragma once

class CDOTA_Modifier_Shredder_Flamethrower : public CDOTA_Buff /*0x0*/  // sizeof 0x1B30, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 length; // offset 0x1AF8, size 0x4, align 4
    float32 width; // offset 0x1AFC, size 0x4, align 4
    float32 damage_per_second; // offset 0x1B00, size 0x4, align 4
    ParticleIndex_t m_nBeamFXIndex; // offset 0x1B04, size 0x4, align 255
    CHandle< CBaseEntity > m_hBeamEnd; // offset 0x1B08, size 0x4, align 4
    GameTime_t m_flLastHit; // offset 0x1B0C, size 0x4, align 255
    CUtlVector< CBaseEntity* > m_vecBurningTrees; // offset 0x1B10, size 0x18, align 8
    CHandle< CBaseEntity > m_hTreeFireThinker; // offset 0x1B28, size 0x4, align 4
    char _pad_1B2C[0x4]; // offset 0x1B2C
};
