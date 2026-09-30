#pragma once

class CCitadelAbilityComponent : public CEntityComponent /*0x0*/  // sizeof 0x268, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x80]; // offset 0x0
    CNetworkUtlVectorBase< CHandle< CCitadelBaseAbility > > m_vecAbilities; // offset 0x80, size 0x18, align 8
    char _pad_0098[0x18]; // offset 0x98
    CNetworkUtlVectorBase< int32 > m_arPendingAsyncAbilityReservationSlots; // offset 0xB0, size 0x18, align 8
    CNetworkUtlVectorBase< int32 > m_arPendingAsyncAbilityReservationAbilityIDs; // offset 0xC8, size 0x18, align 8
    CHandle< CCitadelBaseAbility > m_hSelectedAbility; // offset 0xE0, size 0x4, align 4
    CHandle< CCitadelBaseAbility > m_hChannellingAbility; // offset 0xE4, size 0x4, align 4
    CHandle< CCitadelBaseAbility > m_hCastDelayingAbility; // offset 0xE8, size 0x4, align 4
    CHandle< CBaseEntity > m_hPreviouslySelectedAbility; // offset 0xEC, size 0x4, align 4
    bool m_bPreviousAbilityQueued; // offset 0xF0, size 0x1, align 1
    char _pad_00F1[0x3]; // offset 0xF1
    float32 m_flTimeScale; // offset 0xF4, size 0x4, align 4
    float32 m_flParticleTimeScale; // offset 0xF8, size 0x4, align 4
    bool m_bInInterruptState; // offset 0xFC, size 0x1, align 1
    char _pad_00FD[0x3]; // offset 0xFD
    AbilityResource_t m_ResourceStamina; // offset 0x100, size 0x40, align 255
    AbilityResource_t m_ResourceAbility; // offset 0x140, size 0x40, align 255
    CUtlVectorEmbeddedNetworkVar< ConsumedComponentState_t > m_vecConsumedComponents; // offset 0x180, size 0x68, align 8
    bool m_bThinkableAbilitiesDirty; // offset 0x1E8, size 0x1, align 1
    char _pad_01E9[0x3]; // offset 0x1E9
    uint32 m_nExecuteAbilityMask; // offset 0x1EC, size 0x4, align 4
    char _pad_01F0[0x4]; // offset 0x1F0
    bool m_bSelectedEffectsStarted; // offset 0x1F4, size 0x1, align 1
    char _pad_01F5[0x73]; // offset 0x1F5
};
