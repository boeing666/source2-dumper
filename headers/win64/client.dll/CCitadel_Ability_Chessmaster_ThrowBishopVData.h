#pragma once

class CCitadel_Ability_Chessmaster_ThrowBishopVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1200, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpawnParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SummonModifier; // offset 0x1150, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_StackingModifier; // offset 0x1160, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_MoveBuffModifier; // offset 0x1170, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ExpireModifier; // offset 0x1180, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BlackPieceModifier; // offset 0x1190, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x11A0, size 0x10, align 8
    CSoundEventName m_BishopSpawnSound; // offset 0x11B0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_BishopRecallSound; // offset 0x11C0, size 0x10, align 8
    CSoundEventName m_strBishopExpireSound; // offset 0x11D0, size 0x10, align 8
    bool m_bShouldCreateEnemyAura; // offset 0x11E0, size 0x1, align 1 | MPropertyStartGroup
    bool m_bExpireOverTime; // offset 0x11E1, size 0x1, align 1
    bool m_bDebugTrace; // offset 0x11E2, size 0x1, align 1
    bool m_bShouldApplySlowOnImpact; // offset 0x11E3, size 0x1, align 1
    EChessPieceType m_eChessPieceType; // offset 0x11E4, size 0x4, align 4
    float32 m_flRecallOnMeleeRange; // offset 0x11E8, size 0x4, align 4
    float32 m_flCylinderTraceRadius; // offset 0x11EC, size 0x4, align 4
    float32 m_flCylinderTraceLength; // offset 0x11F0, size 0x4, align 4
    float32 m_flPopUpSpeed; // offset 0x11F4, size 0x4, align 4
    float32 m_flVerticalOffset; // offset 0x11F8, size 0x4, align 4
    char _pad_11FC[0x4]; // offset 0x11FC
};
