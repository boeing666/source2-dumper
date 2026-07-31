#pragma once

class CDOTA_Modifier_DarkSeer_Normal_Punch_Illusion_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    VectorWS m_vecIllusionSpawnPosition; // offset 0x1A78, size 0xC, align 4
    int32 speed; // offset 0x1A84, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1A88, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A8C, size 0x4, align 255
};
