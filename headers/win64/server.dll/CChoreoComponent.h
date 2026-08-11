#pragma once

class CChoreoComponent  // sizeof 0x98, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CNetworkVarChainer __m_pChainEntity; // offset 0x8, size 0x28, align 255 | MNotSaved
    CHandle< CBaseModelEntity > m_hOwner; // offset 0x30, size 0x4, align 4
    char _pad_0034[0x34]; // offset 0x34
    SceneEventId_t m_nNextSceneEventId; // offset 0x68, size 0x4, align 255
    bool m_bUpdateLayerPriorities; // offset 0x6C, size 0x1, align 1 | MNotSaved
    char _pad_006D[0x3]; // offset 0x6D
    CUtlVector< CModifierHandleTyped< CCitadelModifier > > m_vecChoreoModifiers; // offset 0x70, size 0x18, align 8
    GameTime_t m_flAllowResponsesEndTime; // offset 0x88, size 0x4, align 255
    char _pad_008C[0xC]; // offset 0x8C
};
