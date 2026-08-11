#pragma once

class CDOTA_Ability_Pudge_MeatHook : public CDOTABaseAbility /*0x0*/, public CHorizontalMotionController /*0x580*/  // sizeof 0x640, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x590]; // offset 0x0
    VectorWS m_vProjectileLocation; // offset 0x590, size 0xC, align 4
    float32 hook_speed; // offset 0x59C, size 0x4, align 4
    int32 hook_width; // offset 0x5A0, size 0x4, align 4
    int32 hook_distance; // offset 0x5A4, size 0x4, align 4
    bool m_bRetracting; // offset 0x5A8, size 0x1, align 1
    bool m_bDiedInHook; // offset 0x5A9, size 0x1, align 1
    char _pad_05AA[0x2]; // offset 0x5AA
    CHandle< CBaseEntity > m_hVictim; // offset 0x5AC, size 0x4, align 4
    VectorWS m_vTargetPosition; // offset 0x5B0, size 0xC, align 4
    VectorWS m_vCasterPosition; // offset 0x5BC, size 0xC, align 4
    bool m_bChainDetached; // offset 0x5C8, size 0x1, align 1
    bool m_bForceSetToPudgePosition; // offset 0x5C9, size 0x1, align 1
    char _pad_05CA[0x2]; // offset 0x5CA
    ParticleIndex_t m_iChainParticle; // offset 0x5CC, size 0x4, align 255
    ParticleIndex_t m_iSecondaryChainParticle; // offset 0x5D0, size 0x4, align 255
    int32 m_hHookProjectile; // offset 0x5D4, size 0x4, align 4
    int32 m_nManaCost; // offset 0x5D8, size 0x4, align 4
    CHandle< CBaseEntity > m_hSourceCaster; // offset 0x5DC, size 0x4, align 4
    int32 m_nNextConsecutiveHitCount; // offset 0x5E0, size 0x4, align 4
    VectorWS m_vEndpoint; // offset 0x5E4, size 0xC, align 4
    int32 m_nConsecutiveHits; // offset 0x5F0, size 0x4, align 4
    bool m_bIsVectorTargeted; // offset 0x5F4, size 0x1, align 1
    char _pad_05F5[0x3]; // offset 0x5F5
    VectorWS m_vTurnLocation; // offset 0x5F8, size 0xC, align 4
    Vector m_vDirectionAfterTurn; // offset 0x604, size 0xC, align 4
    bool m_bHasTurned; // offset 0x610, size 0x1, align 1
    char _pad_0611[0x3]; // offset 0x611
    float32 m_flDistanceAfterTurn; // offset 0x614, size 0x4, align 4
    VectorWS m_vFinalPosition; // offset 0x618, size 0xC, align 4
    float32 reveal_duration; // offset 0x624, size 0x4, align 4
    int32 curve_hook; // offset 0x628, size 0x4, align 4
    float32 curve_hook_turn_rate; // offset 0x62C, size 0x4, align 4
    int32 curve_hook_debug; // offset 0x630, size 0x4, align 4
    float32 m_fTimeRemaining; // offset 0x634, size 0x4, align 4
    float32 m_flFacingTarget; // offset 0x638, size 0x4, align 4
    char _pad_063C[0x4]; // offset 0x63C
};
