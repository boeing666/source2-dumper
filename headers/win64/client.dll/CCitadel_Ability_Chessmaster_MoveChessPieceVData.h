#pragma once

class CCitadel_Ability_Chessmaster_MoveChessPieceVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x15E8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CUtlOrderedMap< EChessPieceType, CSubclassName< 4 > > m_mapChessAbilities; // offset 0x1070, size 0x28, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_MoveBishopModifier; // offset 0x1098, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_MoveAllyModifier; // offset 0x10A8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_MoveKingModifier; // offset 0x10B8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_MoveQueenModifier; // offset 0x10C8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_CooldownModifier; // offset 0x10D8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_CooldownPlayerModifier; // offset 0x10E8, size 0x10, align 8
    Color m_cHoverOutlineColor; // offset 0x10F8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flHoverOutlineWidth; // offset 0x10FC, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetHoverParticle; // offset 0x1100, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetPreviewBishopParticle; // offset 0x11E0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetPreviewAllyParticle; // offset 0x12C0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetPreviewQueenParticle; // offset 0x13A0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetPreviewKingParticle; // offset 0x1480, size 0xE0, align 8
    CSoundEventName m_strMoveBishopSound; // offset 0x1560, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strMoveKnightSound; // offset 0x1570, size 0x10, align 8
    CSoundEventName m_strMoveQueenSound; // offset 0x1580, size 0x10, align 8
    CSoundEventName m_strMoveKingSound; // offset 0x1590, size 0x10, align 8
    CSoundEventName m_strSelectPieceSound; // offset 0x15A0, size 0x10, align 8
    float32 m_flHoverTime; // offset 0x15B0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flPassiveTargetingConeAngle; // offset 0x15B4, size 0x4, align 4
    float32 m_flPassiveTargetingHalfWidth; // offset 0x15B8, size 0x4, align 4
    float32 m_flPassiveTargetingNearbyCasterRadius; // offset 0x15BC, size 0x4, align 4
    float32 m_flPassiveTargetingNearbyCrosshairRadius; // offset 0x15C0, size 0x4, align 4
    float32 m_flSpawnPositionNavMeshSearchRange; // offset 0x15C4, size 0x4, align 4
    bool m_bSweepToDestination; // offset 0x15C8, size 0x1, align 1
    bool m_bCreateSatVolume; // offset 0x15C9, size 0x1, align 1
    bool m_bAllowSelfTarget; // offset 0x15CA, size 0x1, align 1
    bool m_bAllowNonSelfTarget; // offset 0x15CB, size 0x1, align 1
    bool m_bDrawUIElements; // offset 0x15CC, size 0x1, align 1
    bool m_bDebug; // offset 0x15CD, size 0x1, align 1
    bool m_bApplyMoveCooldown; // offset 0x15CE, size 0x1, align 1
    char _pad_15CF[0x1]; // offset 0x15CF
    CUtlVector< Class_T > m_vecPossibleClasses; // offset 0x15D0, size 0x18, align 8
};
