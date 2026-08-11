#pragma once

class CModifierProperty  // sizeof 0x270, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CNetworkVarChainer __m_pChainEntity; // offset 0x8, size 0x28, align 255 | MNotSaved
    CHandle< CBaseEntity > m_hOwner; // offset 0x30, size 0x4, align 4
    char _pad_0034[0x4]; // offset 0x34
    CUtlVector< CBaseModifier* > m_vecModifiers; // offset 0x38, size 0x18, align 8 | MSaveOpsForField
    char _pad_0050[0x175]; // offset 0x50
    bool m_bModifierStatesDirty; // offset 0x1C5, size 0x1, align 1 | MNotSaved
    bool m_bPredictedOwner; // offset 0x1C6, size 0x1, align 1 | MNotSaved
    bool m_bAllowModifiersOnDeadEntities; // offset 0x1C7, size 0x1, align 1 | MNetworkEnable
    int8 m_iLockRefCount; // offset 0x1C8, size 0x1, align 1 | MNotSaved
    char _pad_01C9[0x1]; // offset 0x1C9
    ModifierPropRuntimeHandle_t m_hHandle; // offset 0x1CA, size 0x2, align 255 | MNotSaved
    uint32 m_nBroadcastEventListenerMask; // offset 0x1CC, size 0x4, align 4 | MNotSaved
    ParticleIndex_t m_nCachedHighestParticleIndex; // offset 0x1D0, size 0x4, align 255 | MNotSaved
    char _pad_01D4[0x4]; // offset 0x1D4
    CUtlVector< OwnerModifierEventListener_t >* m_pNotifyOwnerEvents; // offset 0x1D8, size 0x8, align 8 | MSaveOpsForField
    uint32 m_nDisabledGroups; // offset 0x1E0, size 0x4, align 4 | MNetworkEnable
    uint32[10] m_bvEnabledStateMask; // offset 0x1E4, size 0x28, align 4 | MNetworkEnable MNetworkChangeCallback
    uint32[10] m_bvDisabledStateMask; // offset 0x20C, size 0x28, align 4 | MNetworkEnable MNetworkChangeCallback
    uint32[10] m_bvEnabledPredictedStateMask; // offset 0x234, size 0x28, align 4 | MNetworkEnable MNetworkChangeCallback
    char _pad_025C[0xC]; // offset 0x25C
    bool m_bParentWantsModifierStateChangeCallback; // offset 0x268, size 0x1, align 1
    char _pad_0269[0x7]; // offset 0x269
};
