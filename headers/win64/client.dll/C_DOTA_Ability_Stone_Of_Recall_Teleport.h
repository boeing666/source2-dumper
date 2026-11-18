#pragma once

class C_DOTA_Ability_Stone_Of_Recall_Teleport : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6C0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x6A8, size 0x4, align 4
    float32 m_flChannelTime; // offset 0x6AC, size 0x4, align 4
    VectorWS m_vEndLoc; // offset 0x6B0, size 0xC, align 4
    char _pad_06BC[0x4]; // offset 0x6BC
};
