#pragma once

class CCitadelAbilityComponent : public CEntityComponent /*0x0*/  // sizeof 0x268, align 0xFF [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x80]; // offset 0x0
    CNetworkUtlVectorBase< CHandle< CCitadelBaseAbility > > m_vecAbilities; // offset 0x80, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup MNetworkPriority
    CNetworkUtlVectorBase< CHandle< CCitadelBaseAbility > > m_vecThinkableAbilities; // offset 0x98, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup MNetworkPriority
    CNetworkUtlVectorBase< int32 > m_arPendingAsyncAbilityReservationSlots; // offset 0xB0, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup MNetworkPriority
    CNetworkUtlVectorBase< int32 > m_arPendingAsyncAbilityReservationAbilityIDs; // offset 0xC8, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup MNetworkPriority
    CHandle< CCitadelBaseAbility > m_hSelectedAbility; // offset 0xE0, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    CHandle< CCitadelBaseAbility > m_hChannellingAbility; // offset 0xE4, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    CHandle< CCitadelBaseAbility > m_hCastDelayingAbility; // offset 0xE8, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    CHandle< CBaseEntity > m_hPreviouslySelectedAbility; // offset 0xEC, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    bool m_bPreviousAbilityQueued; // offset 0xF0, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_00F1[0x3]; // offset 0xF1
    float32 m_flTimeScale; // offset 0xF4, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flParticleTimeScale; // offset 0xF8, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    bool m_bInInterruptState; // offset 0xFC, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_00FD[0x3]; // offset 0xFD
    AbilityResource_t m_ResourceStamina; // offset 0x100, size 0x20, align 255 | MNetworkEnable MNetworkUserGroup
    AbilityResource_t m_ResourceAbility; // offset 0x120, size 0x20, align 255 | MNetworkEnable MNetworkUserGroup
    CUtlVectorEmbeddedNetworkVar< ConsumedComponentState_t > m_vecConsumedComponents; // offset 0x140, size 0x68, align 8 | MNetworkEnable MNetworkUserGroup
    char _pad_01A8[0x48]; // offset 0x1A8
    uint32 m_nExecuteAbilityMask; // offset 0x1F0, size 0x4, align 4
    char _pad_01F4[0x4]; // offset 0x1F4
    bool m_bSelectedEffectsStarted; // offset 0x1F8, size 0x1, align 1
    char _pad_01F9[0x6F]; // offset 0x1F9
};
