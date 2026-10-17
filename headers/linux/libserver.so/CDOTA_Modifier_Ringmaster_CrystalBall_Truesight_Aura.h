#pragma once

class CDOTA_Modifier_Ringmaster_CrystalBall_Truesight_Aura : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    ParticleIndex_t m_nHeroOutlineFX; // offset 0x1AA8, size 0x4, align 255
    float32 radius; // offset 0x1AAC, size 0x4, align 4
};
