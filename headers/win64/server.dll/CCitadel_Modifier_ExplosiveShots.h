#pragma once

class CCitadel_Modifier_ExplosiveShots : public CCitadelModifier /*0x0*/  // sizeof 0x270, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    CUtlVector< CCitadel_Modifier_ExplosiveShots::BulletEntityPair_t > m_vecHitEnts; // offset 0xD0, size 0x18, align 8
    bool m_bExplosionCanHitMultipleTimes; // offset 0xE8, size 0x1, align 1
    char _pad_00E9[0x187]; // offset 0xE9
};
