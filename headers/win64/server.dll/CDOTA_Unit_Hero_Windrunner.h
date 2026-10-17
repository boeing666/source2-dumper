#pragma once

class CDOTA_Unit_Hero_Windrunner : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x2028, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x2020]; // offset 0x0
    int32 m_nTargetAngle; // offset 0x2020, size 0x4, align 4
    ParticleIndex_t m_nFXDeath; // offset 0x2024, size 0x4, align 255
};
