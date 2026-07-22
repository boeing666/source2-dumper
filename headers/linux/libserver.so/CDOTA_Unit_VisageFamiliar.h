#pragma once

class CDOTA_Unit_VisageFamiliar : public CDOTA_BaseNPC_Creep /*0x0*/  // sizeof 0x1BD0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1BB0]; // offset 0x0
    CountdownTimer ctTimer; // offset 0x1BB0, size 0x18, align 8
    ParticleIndex_t m_nFXAmbient; // offset 0x1BC8, size 0x4, align 255
    char _pad_1BCC[0x4]; // offset 0x1BCC
};
