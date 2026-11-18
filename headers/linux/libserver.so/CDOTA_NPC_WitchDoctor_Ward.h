#pragma once

class CDOTA_NPC_WitchDoctor_Ward : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1D18, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1D0C]; // offset 0x0
    int32 m_nTargetType; // offset 0x1D0C, size 0x4, align 4
    int32 m_nTargetFlags; // offset 0x1D10, size 0x4, align 4
    char _pad_1D14[0x4]; // offset 0x1D14
};
