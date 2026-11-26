#pragma once

class CModifierProperty  // sizeof 0x3F90, align 0x10 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CNetworkVarChainer __m_pChainEntity; // offset 0x10, size 0x28, align 255 | MNotSaved
    CHandle< CBaseEntity > m_hOwner; // offset 0x38, size 0x4, align 4
    char _pad_003C[0x4]; // offset 0x3C
    CUtlVector< CBaseModifier* > m_vecModifiers; // offset 0x40, size 0x18, align 8 | MKV3TransferSaveOpsForField
    char _pad_0058[0x3E79]; // offset 0x58
    bool m_bPredictedOwner; // offset 0x3ED1, size 0x1, align 1 | MNotSaved
    bool m_bAllowModifiersOnDeadEntities; // offset 0x3ED2, size 0x1, align 1
    int8 m_iLockRefCount; // offset 0x3ED3, size 0x1, align 1 | MNotSaved
    ModifierPropRuntimeHandle_t m_hHandle; // offset 0x3ED4, size 0x2, align 255 | MNotSaved
    char _pad_3ED6[0x2]; // offset 0x3ED6
    uint32 m_nBroadcastEventListenerMask; // offset 0x3ED8, size 0x4, align 4 | MNotSaved
    ParticleIndex_t m_nCachedHighestParticleIndex; // offset 0x3EDC, size 0x4, align 255 | MNotSaved
    CUtlVector< OwnerModifierEventListener_t >* m_pNotifyOwnerEvents; // offset 0x3EE0, size 0x8, align 8 | MKV3TransferSaveOpsForField
    uint32 m_nDisabledGroups; // offset 0x3EE8, size 0x4, align 4
    uint32[12] m_bvEnabledStateMask; // offset 0x3EEC, size 0x30, align 4
    uint32[12] m_bvDisabledStateMask; // offset 0x3F1C, size 0x30, align 4
    uint32[12] m_bvEnabledPredictedStateMask; // offset 0x3F4C, size 0x30, align 4
    char _pad_3F7C[0xC]; // offset 0x3F7C
    bool m_bParentWantsModifierStateChangeCallback; // offset 0x3F88, size 0x1, align 1
    char _pad_3F89[0x7]; // offset 0x3F89
};
