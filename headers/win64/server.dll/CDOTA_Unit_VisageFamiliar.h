#pragma once

class CDOTA_Unit_VisageFamiliar : public CDOTA_BaseNPC_Creep /*0x0*/  // sizeof 0x19E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x19C8]; // offset 0x0
    CountdownTimer ctTimer; // offset 0x19C8, size 0x18, align 8
    ParticleIndex_t m_nFXAmbient; // offset 0x19E0, size 0x4, align 255
    char _pad_19E4[0x4]; // offset 0x19E4
};
