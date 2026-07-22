#pragma once

class CCitadel_Hideout_BallVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x4A0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    float32 m_flModelScale; // offset 0x28, size 0x4, align 4
    float32 m_flBallTouchRadius; // offset 0x2C, size 0x4, align 4 | MPropertyDescription
    float32 m_flForceMult; // offset 0x30, size 0x4, align 4
    float32 m_flForceMultBullet; // offset 0x34, size 0x4, align 4
    float32 m_flMaxDistanceAway; // offset 0x38, size 0x4, align 4
    float32 m_flDamagePositionOffset; // offset 0x3C, size 0x4, align 4
    CSoundEventName m_strKickSoundName; // offset 0x40, size 0x10, align 8
    CSoundEventName m_strGoalSoundName; // offset 0x50, size 0x10, align 8
    float32 m_flMinPlayerBallTouchForce; // offset 0x60, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flMinPlayerLightMeleeForce; // offset 0x64, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flPlayerLightMeleeChipAngle; // offset 0x68, size 0x4, align 4 | MPropertyDescription
    float32 m_flMinPlayerHeavyMeleeForce; // offset 0x6C, size 0x4, align 4 | MPropertyDescription
    float32 m_flForceMultPlayer; // offset 0x70, size 0x4, align 4 | MPropertyDescription
    float32 m_flInheritPlayerSpeedMultiplier; // offset 0x74, size 0x4, align 4 | MPropertyDescription
    CPiecewiseCurve m_ForceVSCameraPitch; // offset 0x78, size 0x40, align 8 | MPropertyDescription
    CPiecewiseCurve m_ConsecutiveJugglesVsRandomness; // offset 0xB8, size 0x40, align 8 | MPropertyStartGroup MPropertyDescription
    float32 fl_MaxExtraGravityScale; // offset 0xF8, size 0x4, align 4 | MPropertyDescription
    int32 m_nMinJugglesBeforeDisplay; // offset 0xFC, size 0x4, align 4 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BallApexParticle; // offset 0x100, size 0xE0, align 8
    CSoundEventName m_strBallApexSound; // offset 0x1E0, size 0x10, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_JuggleRunEnded; // offset 0x1F0, size 0xE0, align 8 | MPropertyDescription
    CSoundEventName m_strJuggleRunEnded; // offset 0x2D0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_hModel; // offset 0x2E0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmbientParticle; // offset 0x3C0, size 0xE0, align 8
};
