#pragma once

class CChoreoComponent  // sizeof 0x108, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CNetworkVarChainer __m_pChainEntity; // offset 0x8, size 0x28, align 255 | MNotSaved
    CHandle< CBaseModelEntity > m_hOwner; // offset 0x30, size 0x4, align 4
    char _pad_0034[0x4]; // offset 0x34
    int32 m_iHeldLayer; // offset 0x38, size 0x4, align 4
    char _pad_003C[0x3C]; // offset 0x3C
    SceneEventId_t m_nNextSceneEventId; // offset 0x78, size 0x4, align 255
    GameTime_t m_flAllowResponsesEndTime; // offset 0x7C, size 0x4, align 255
    char _pad_0080[0x88]; // offset 0x80
};
