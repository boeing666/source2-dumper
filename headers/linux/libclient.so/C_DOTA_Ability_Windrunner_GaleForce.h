#pragma once

class C_DOTA_Ability_Windrunner_GaleForce : public C_DOTABaseAbility /*0x0*/  // sizeof 0x848, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    VectorWS m_vEndpoint; // offset 0x828, size 0xC, align 4
    VectorWS m_vFlowPosition; // offset 0x834, size 0xC, align 4
    float32 duration; // offset 0x840, size 0x4, align 4
    char _pad_0844[0x4]; // offset 0x844
};
