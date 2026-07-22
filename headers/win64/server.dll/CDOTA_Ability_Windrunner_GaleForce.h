#pragma once

class CDOTA_Ability_Windrunner_GaleForce : public CDOTABaseAbility /*0x0*/  // sizeof 0x5A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    VectorWS m_vEndpoint; // offset 0x580, size 0xC, align 4
    VectorWS m_vFlowPosition; // offset 0x58C, size 0xC, align 4
    float32 duration; // offset 0x598, size 0x4, align 4
    CHandle< CBaseEntity > m_hThinker; // offset 0x59C, size 0x4, align 4
};
