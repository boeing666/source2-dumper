#pragma once

class CDOTA_Ability_Windrunner_GaleForce : public CDOTABaseAbility /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    VectorWS m_vEndpoint; // offset 0x85C, size 0xC, align 4
    VectorWS m_vFlowPosition; // offset 0x868, size 0xC, align 4
    float32 duration; // offset 0x874, size 0x4, align 4
    CHandle< CBaseEntity > m_hThinker; // offset 0x878, size 0x4, align 4
    char _pad_087C[0x4]; // offset 0x87C
};
