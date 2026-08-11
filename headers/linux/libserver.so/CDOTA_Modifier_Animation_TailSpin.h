#pragma once

class CDOTA_Modifier_Animation_TailSpin : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 damage; // offset 0x1A78, size 0x4, align 4
    int32 damage_radius; // offset 0x1A7C, size 0x4, align 4
    float32 m_flPlaybackRate; // offset 0x1A80, size 0x4, align 4
    char _pad_1A84[0x4]; // offset 0x1A84
    CUtlVector< CHandle< CBaseEntity > > m_vHitEntities; // offset 0x1A88, size 0x18, align 8
};
