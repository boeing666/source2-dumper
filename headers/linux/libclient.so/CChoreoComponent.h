#pragma once

class CChoreoComponent  // sizeof 0x80, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CNetworkVarChainer __m_pChainEntity; // offset 0x8, size 0x28, align 255 | MNotSaved
    CHandle< C_BaseModelEntity > m_hOwner; // offset 0x30, size 0x4, align 4
    int32 m_nExernalChoreoGraphCount; // offset 0x34, size 0x4, align 4
    CGlobalSymbol m_sActiveExternalChoreoGraphSlotID; // offset 0x38, size 0x8, align 8
    char _pad_0040[0x30]; // offset 0x40
    SceneEventId_t m_nNextSceneEventId; // offset 0x70, size 0x4, align 255
    GameTime_t m_flAllowResponsesEndTime; // offset 0x74, size 0x4, align 255
    char _pad_0078[0x8]; // offset 0x78
};
