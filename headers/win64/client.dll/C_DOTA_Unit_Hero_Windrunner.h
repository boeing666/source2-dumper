#pragma once

class C_DOTA_Unit_Hero_Windrunner : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1D98, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1D88]; // offset 0x0
    int32 m_nTargetAngle; // offset 0x1D88, size 0x4, align 4
    int32 m_iPoseParameterAim; // offset 0x1D8C, size 0x4, align 4
    ParticleIndex_t m_nFXDeath; // offset 0x1D90, size 0x4, align 255
    char _pad_1D94[0x4]; // offset 0x1D94
};
