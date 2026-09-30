#pragma once

class CCitadel_Ability_Shiv_KillingBlow : public CCitadelBaseShivAbility /*0x0*/  // sizeof 0x1FC0, align 0x8 [vtable] (server) {MModifierDynamicValuesSuppressCache}
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vHitEnts; // offset 0x14A0, size 0x18, align 8
    char _pad_14B8[0x638]; // offset 0x14B8
    bool m_bDamagedAnyHero; // offset 0x1AF0, size 0x1, align 1
    bool m_bActive; // offset 0x1AF1, size 0x1, align 1
    bool m_bStartedOnGround; // offset 0x1AF2, size 0x1, align 1
    bool m_bIsBonusCast; // offset 0x1AF3, size 0x1, align 1
    VectorWS m_vStartPosition; // offset 0x1AF4, size 0xC, align 4
    QAngle m_qCurrentAngles; // offset 0x1B00, size 0xC, align 4
    char _pad_1B0C[0x4]; // offset 0x1B0C
    CCitadelAutoScaledTime m_flDepartureTime; // offset 0x1B10, size 0x18, align 255
    CCitadelAutoScaledTime m_flArrivalTime; // offset 0x1B28, size 0x18, align 255
    VectorWS m_vLastKnownSafePos; // offset 0x1B40, size 0xC, align 4
    bool m_bMadeSlashParticle; // offset 0x1B4C, size 0x1, align 1
    char _pad_1B4D[0x3]; // offset 0x1B4D
    ParticleIndex_t m_ChannelParticle; // offset 0x1B50, size 0x4, align 255
    GameTime_t m_flRecastWindowEnd; // offset 0x1B54, size 0x4, align 255
    char _pad_1B58[0x420]; // offset 0x1B58
    CModifierHandleTyped< CCitadelModifier > m_BuffModifier; // offset 0x1F78, size 0x18, align 8
    CModifierHandleTyped< CCitadelModifier > m_RecastWindowModifierHandle; // offset 0x1F90, size 0x18, align 8
    CModifierHandleTyped< CCitadelModifier > m_RageDrainSuppressedHandle; // offset 0x1FA8, size 0x18, align 8
};
