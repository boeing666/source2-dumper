#pragma once

class CCitadel_Ability_Chessmaster_ThrowBishopVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1578, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpawnParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SummonModifier; // offset 0x14C8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_StackingModifier; // offset 0x14D8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_MoveBuffModifier; // offset 0x14E8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ExpireModifier; // offset 0x14F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BlackPieceModifier; // offset 0x1508, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1518, size 0x10, align 8
    CSoundEventName m_BishopSpawnSound; // offset 0x1528, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_BishopRecallSound; // offset 0x1538, size 0x10, align 8
    CSoundEventName m_strBishopExpireSound; // offset 0x1548, size 0x10, align 8
    bool m_bShouldCreateEnemyAura; // offset 0x1558, size 0x1, align 1 | MPropertyStartGroup
    bool m_bExpireOverTime; // offset 0x1559, size 0x1, align 1
    bool m_bDebugTrace; // offset 0x155A, size 0x1, align 1
    bool m_bShouldApplySlowOnImpact; // offset 0x155B, size 0x1, align 1
    EChessPieceType m_eChessPieceType; // offset 0x155C, size 0x4, align 4
    float32 m_flRecallOnMeleeRange; // offset 0x1560, size 0x4, align 4
    float32 m_flCylinderTraceRadius; // offset 0x1564, size 0x4, align 4
    float32 m_flCylinderTraceLength; // offset 0x1568, size 0x4, align 4
    float32 m_flPopUpSpeed; // offset 0x156C, size 0x4, align 4
    float32 m_flVerticalOffset; // offset 0x1570, size 0x4, align 4
    char _pad_1574[0x4]; // offset 0x1574
};
