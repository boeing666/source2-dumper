#pragma once

class CCitadel_Ability_Shiv_KillingBlow : public CCitadelBaseShivAbility /*0x0*/  // sizeof 0x1FC8, align 0x8 [vtable] (server) {MModifierDynamicValuesSuppressCache}
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vHitEnts; // offset 0x14A8, size 0x18, align 8
    char _pad_14C0[0x638]; // offset 0x14C0
    bool m_bDamagedAnyHero; // offset 0x1AF8, size 0x1, align 1
    bool m_bActive; // offset 0x1AF9, size 0x1, align 1
    bool m_bStartedOnGround; // offset 0x1AFA, size 0x1, align 1
    bool m_bIsBonusCast; // offset 0x1AFB, size 0x1, align 1
    VectorWS m_vStartPosition; // offset 0x1AFC, size 0xC, align 4
    QAngle m_qCurrentAngles; // offset 0x1B08, size 0xC, align 4
    char _pad_1B14[0x4]; // offset 0x1B14
    CCitadelAutoScaledTime m_flDepartureTime; // offset 0x1B18, size 0x18, align 255
    CCitadelAutoScaledTime m_flArrivalTime; // offset 0x1B30, size 0x18, align 255
    VectorWS m_vLastKnownSafePos; // offset 0x1B48, size 0xC, align 4
    bool m_bMadeSlashParticle; // offset 0x1B54, size 0x1, align 1
    char _pad_1B55[0x3]; // offset 0x1B55
    ParticleIndex_t m_ChannelParticle; // offset 0x1B58, size 0x4, align 255
    GameTime_t m_flRecastWindowEnd; // offset 0x1B5C, size 0x4, align 255
    char _pad_1B60[0x420]; // offset 0x1B60
    CModifierHandleTyped< CCitadelModifier > m_BuffModifier; // offset 0x1F80, size 0x18, align 8
    CModifierHandleTyped< CCitadelModifier > m_RecastWindowModifierHandle; // offset 0x1F98, size 0x18, align 8
    CModifierHandleTyped< CCitadelModifier > m_RageDrainSuppressedHandle; // offset 0x1FB0, size 0x18, align 8
};
