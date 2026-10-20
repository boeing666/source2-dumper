#pragma once

class CCitadel_Modifier_ExplosiveShots : public CCitadelModifier /*0x0*/  // sizeof 0x380, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    CUtlVector< CCitadel_Modifier_ExplosiveShots::BulletEntityPair_t > m_vecHitEnts; // offset 0x150, size 0x18, align 8
    bool m_bExplosionCanHitMultipleTimes; // offset 0x168, size 0x1, align 1
    char _pad_0169[0x217]; // offset 0x169
};
