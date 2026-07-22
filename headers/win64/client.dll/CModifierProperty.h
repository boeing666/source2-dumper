#pragma once

class CModifierProperty  // sizeof 0x290, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CNetworkVarChainer __m_pChainEntity; // offset 0x8, size 0x28, align 255 | MNotSaved
    CHandle< C_BaseEntity > m_hOwner; // offset 0x30, size 0x4, align 4
    char _pad_0034[0x4]; // offset 0x34
    CUtlVector< CBaseModifier* > m_vecModifiers; // offset 0x38, size 0x18, align 8 | MSaveOpsForField
    char _pad_0050[0x174]; // offset 0x50
    bool m_bModifierStatesDirty; // offset 0x1C4, size 0x1, align 1 | MNotSaved
    bool m_bPredictedOwner; // offset 0x1C5, size 0x1, align 1 | MNotSaved
    bool m_bAllowModifiersOnDeadEntities; // offset 0x1C6, size 0x1, align 1 | MNetworkEnable
    int8 m_iLockRefCount; // offset 0x1C7, size 0x1, align 1 | MNotSaved
    ModifierPropRuntimeHandle_t m_hHandle; // offset 0x1C8, size 0x2, align 255 | MNotSaved
    char _pad_01CA[0x2]; // offset 0x1CA
    uint32 m_nBroadcastEventListenerMask; // offset 0x1CC, size 0x4, align 4 | MNotSaved
    ParticleIndex_t m_nCachedHighestParticleIndex; // offset 0x1D0, size 0x4, align 255 | MNotSaved
    char _pad_01D4[0x4]; // offset 0x1D4
    CUtlVector< OwnerModifierEventListener_t >* m_pNotifyOwnerEvents; // offset 0x1D8, size 0x8, align 8 | MSaveOpsForField
    uint32 m_nDisabledGroups; // offset 0x1E0, size 0x4, align 4 | MNetworkEnable
    uint32[10] m_bvEnabledStateMask; // offset 0x1E4, size 0x28, align 4 | MNetworkEnable MNetworkChangeCallback
    uint32[10] m_bvDisabledStateMask; // offset 0x20C, size 0x28, align 4 | MNetworkEnable MNetworkChangeCallback
    uint32[10] m_bvEnabledPredictedStateMask; // offset 0x234, size 0x28, align 4 | MNetworkEnable MNetworkChangeCallback
    char _pad_025C[0x34]; // offset 0x25C
};
