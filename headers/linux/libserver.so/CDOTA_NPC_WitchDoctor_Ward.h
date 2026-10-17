#pragma once

class CDOTA_NPC_WitchDoctor_Ward : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1C80, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1C78]; // offset 0x0
    int32 m_nTargetType; // offset 0x1C78, size 0x4, align 4
    int32 m_nTargetFlags; // offset 0x1C7C, size 0x4, align 4
};
