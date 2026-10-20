#pragma once

class CModifierProperty  // sizeof 0x3F40, align 0x10 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CNetworkVarChainer __m_pChainEntity; // offset 0x10, size 0x28, align 255 | MNotSaved
    CHandle< C_BaseEntity > m_hOwner; // offset 0x38, size 0x4, align 4
    char _pad_003C[0x4]; // offset 0x3C
    CUtlVector< CBaseModifier* > m_vecModifiers; // offset 0x40, size 0x18, align 8 | MKV3TransferSaveOpsForField
    char _pad_0058[0x3E09]; // offset 0x58
    bool m_bPredictedOwner; // offset 0x3E61, size 0x1, align 1 | MNotSaved
    bool m_bAllowModifiersOnDeadEntities; // offset 0x3E62, size 0x1, align 1
    int8 m_iLockRefCount; // offset 0x3E63, size 0x1, align 1 | MNotSaved
    ModifierPropRuntimeHandle_t m_hHandle; // offset 0x3E64, size 0x2, align 255 | MNotSaved
    char _pad_3E66[0x2]; // offset 0x3E66
    uint32 m_nBroadcastEventListenerMask; // offset 0x3E68, size 0x4, align 4 | MNotSaved
    ParticleIndex_t m_nCachedHighestParticleIndex; // offset 0x3E6C, size 0x4, align 255 | MNotSaved
    CUtlVector< OwnerModifierEventListener_t >* m_pNotifyOwnerEvents; // offset 0x3E70, size 0x8, align 8 | MKV3TransferSaveOpsForField
    uint32 m_nDisabledGroups; // offset 0x3E78, size 0x4, align 4
    uint32[11] m_bvEnabledStateMask; // offset 0x3E7C, size 0x2C, align 4
    uint32[11] m_bvDisabledStateMask; // offset 0x3EA8, size 0x2C, align 4
    uint32[11] m_bvEnabledPredictedStateMask; // offset 0x3ED4, size 0x2C, align 4
    char _pad_3F00[0x8]; // offset 0x3F00
    bool m_bParentWantsModifierStateChangeCallback; // offset 0x3F08, size 0x1, align 1
    char _pad_3F09[0x37]; // offset 0x3F09
};
