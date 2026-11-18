#pragma once

class CDOTA_Modifier_XP_Fountain_Defenders_Gate : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecBlockers; // offset 0x1AF8, size 0x18, align 8
    int32 team_number; // offset 0x1B10, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1B14, size 0x4, align 255
    float32 radius; // offset 0x1B18, size 0x4, align 4
    char _pad_1B1C[0x4]; // offset 0x1B1C
};
