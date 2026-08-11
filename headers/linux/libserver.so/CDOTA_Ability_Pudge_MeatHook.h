#pragma once

class CDOTA_Ability_Pudge_MeatHook : public CDOTABaseAbility /*0x0*/, public CHorizontalMotionController /*0x860*/  // sizeof 0x918, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x86C]; // offset 0x0
    VectorWS m_vProjectileLocation; // offset 0x86C, size 0xC, align 4
    float32 hook_speed; // offset 0x878, size 0x4, align 4
    int32 hook_width; // offset 0x87C, size 0x4, align 4
    int32 hook_distance; // offset 0x880, size 0x4, align 4
    bool m_bRetracting; // offset 0x884, size 0x1, align 1
    bool m_bDiedInHook; // offset 0x885, size 0x1, align 1
    char _pad_0886[0x2]; // offset 0x886
    CHandle< CBaseEntity > m_hVictim; // offset 0x888, size 0x4, align 4
    VectorWS m_vTargetPosition; // offset 0x88C, size 0xC, align 4
    VectorWS m_vCasterPosition; // offset 0x898, size 0xC, align 4
    bool m_bChainDetached; // offset 0x8A4, size 0x1, align 1
    bool m_bForceSetToPudgePosition; // offset 0x8A5, size 0x1, align 1
    char _pad_08A6[0x2]; // offset 0x8A6
    ParticleIndex_t m_iChainParticle; // offset 0x8A8, size 0x4, align 255
    ParticleIndex_t m_iSecondaryChainParticle; // offset 0x8AC, size 0x4, align 255
    int32 m_hHookProjectile; // offset 0x8B0, size 0x4, align 4
    int32 m_nManaCost; // offset 0x8B4, size 0x4, align 4
    CHandle< CBaseEntity > m_hSourceCaster; // offset 0x8B8, size 0x4, align 4
    int32 m_nNextConsecutiveHitCount; // offset 0x8BC, size 0x4, align 4
    VectorWS m_vEndpoint; // offset 0x8C0, size 0xC, align 4
    int32 m_nConsecutiveHits; // offset 0x8CC, size 0x4, align 4
    bool m_bIsVectorTargeted; // offset 0x8D0, size 0x1, align 1
    char _pad_08D1[0x3]; // offset 0x8D1
    VectorWS m_vTurnLocation; // offset 0x8D4, size 0xC, align 4
    Vector m_vDirectionAfterTurn; // offset 0x8E0, size 0xC, align 4
    bool m_bHasTurned; // offset 0x8EC, size 0x1, align 1
    char _pad_08ED[0x3]; // offset 0x8ED
    float32 m_flDistanceAfterTurn; // offset 0x8F0, size 0x4, align 4
    VectorWS m_vFinalPosition; // offset 0x8F4, size 0xC, align 4
    float32 reveal_duration; // offset 0x900, size 0x4, align 4
    int32 curve_hook; // offset 0x904, size 0x4, align 4
    float32 curve_hook_turn_rate; // offset 0x908, size 0x4, align 4
    int32 curve_hook_debug; // offset 0x90C, size 0x4, align 4
    float32 m_fTimeRemaining; // offset 0x910, size 0x4, align 4
    float32 m_flFacingTarget; // offset 0x914, size 0x4, align 4
};
