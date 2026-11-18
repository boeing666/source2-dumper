#pragma once

class CDOTA_Ability_Stone_Of_Recall_Teleport : public CDOTABaseAbility /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x85C, size 0x4, align 4
    float32 m_flChannelTime; // offset 0x860, size 0x4, align 4
    VectorWS m_vEndLoc; // offset 0x864, size 0xC, align 4
};
