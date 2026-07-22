#pragma once

class CChoreoComponent  // sizeof 0x78, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CNetworkVarChainer __m_pChainEntity; // offset 0x8, size 0x28, align 255 | MNotSaved
    CHandle< C_BaseModelEntity > m_hOwner; // offset 0x30, size 0x4, align 4
    char _pad_0034[0x34]; // offset 0x34
    SceneEventId_t m_nNextSceneEventId; // offset 0x68, size 0x4, align 255
    GameTime_t m_flAllowResponsesEndTime; // offset 0x6C, size 0x4, align 255
    char _pad_0070[0x8]; // offset 0x70
};
