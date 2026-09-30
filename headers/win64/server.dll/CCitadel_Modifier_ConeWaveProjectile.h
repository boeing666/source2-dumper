#pragma once

class CCitadel_Modifier_ConeWaveProjectile : public CCitadel_Modifier_Intrinsic_Base /*0x0*/  // sizeof 0x378, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x350]; // offset 0x0
    VectorWS m_vInitialCastPosition; // offset 0x350, size 0xC, align 4
    float32 m_flProjectileSpeed; // offset 0x35C, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // offset 0x360, size 0x18, align 8
};
