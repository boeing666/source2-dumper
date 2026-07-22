#pragma once

class C_DOTA_Ability_Windrunner_GaleForce : public C_DOTABaseAbility /*0x0*/  // sizeof 0x840, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    VectorWS m_vEndpoint; // offset 0x824, size 0xC, align 4
    VectorWS m_vFlowPosition; // offset 0x830, size 0xC, align 4
    float32 duration; // offset 0x83C, size 0x4, align 4
};
