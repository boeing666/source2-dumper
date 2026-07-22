#pragma once

class CCitadelAbilityComponent : public CEntityComponent /*0x0*/  // sizeof 0x1E8, align 0xFF [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x68]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< C_CitadelBaseAbility > > m_vecAbilities; // offset 0x68, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup MNetworkPriority
    C_NetworkUtlVectorBase< CHandle< C_CitadelBaseAbility > > m_vecThinkableAbilities; // offset 0x80, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup MNetworkPriority
    C_NetworkUtlVectorBase< int32 > m_arPendingAsyncAbilityReservationSlots; // offset 0x98, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup MNetworkPriority
    C_NetworkUtlVectorBase< int32 > m_arPendingAsyncAbilityReservationAbilityIDs; // offset 0xB0, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup MNetworkPriority
    CHandle< C_CitadelBaseAbility > m_hSelectedAbility; // offset 0xC8, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    CHandle< C_CitadelBaseAbility > m_hChannellingAbility; // offset 0xCC, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    CHandle< C_CitadelBaseAbility > m_hCastDelayingAbility; // offset 0xD0, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    CHandle< C_BaseEntity > m_hPreviouslySelectedAbility; // offset 0xD4, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    bool m_bPreviousAbilityQueued; // offset 0xD8, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_00D9[0x3]; // offset 0xD9
    float32 m_flTimeScale; // offset 0xDC, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flParticleTimeScale; // offset 0xE0, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    bool m_bInInterruptState; // offset 0xE4, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_00E5[0x3]; // offset 0xE5
    AbilityResource_t m_ResourceStamina; // offset 0xE8, size 0x20, align 255 | MNetworkEnable MNetworkUserGroup
    AbilityResource_t m_ResourceAbility; // offset 0x108, size 0x20, align 255 | MNetworkEnable MNetworkUserGroup
    C_UtlVectorEmbeddedNetworkVar< ConsumedComponentState_t > m_vecConsumedComponents; // offset 0x128, size 0x68, align 8 | MNetworkEnable MNetworkUserGroup
    char _pad_0190[0x48]; // offset 0x190
    uint32 m_nExecuteAbilityMask; // offset 0x1D8, size 0x4, align 4
    char _pad_01DC[0x4]; // offset 0x1DC
    bool m_bSelectedEffectsStarted; // offset 0x1E0, size 0x1, align 1
    char _pad_01E1[0x7]; // offset 0x1E1
};
