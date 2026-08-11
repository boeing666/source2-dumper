#pragma once

class CDOTA_Modifier_Dazzle_NothlProjection_ProjectileReturn : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 m_nProjectileHandle; // offset 0x1A78, size 0x4, align 4
    CHandle< CBaseEntity > m_hPhysicalBody; // offset 0x1A7C, size 0x4, align 4
};
