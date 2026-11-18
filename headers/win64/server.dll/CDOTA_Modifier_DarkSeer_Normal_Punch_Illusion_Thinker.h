#pragma once

class CDOTA_Modifier_DarkSeer_Normal_Punch_Illusion_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    VectorWS m_vecIllusionSpawnPosition; // offset 0x1AF8, size 0xC, align 4
    int32 speed; // offset 0x1B04, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x1B08, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1B0C, size 0x4, align 255
};
