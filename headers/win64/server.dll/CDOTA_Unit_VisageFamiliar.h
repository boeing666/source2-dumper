#pragma once

class CDOTA_Unit_VisageFamiliar : public CDOTA_BaseNPC_Creep /*0x0*/  // sizeof 0x18F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x18D8]; // offset 0x0
    CountdownTimer ctTimer; // offset 0x18D8, size 0x18, align 8
    ParticleIndex_t m_nFXAmbient; // offset 0x18F0, size 0x4, align 255
    char _pad_18F4[0x4]; // offset 0x18F4
};
