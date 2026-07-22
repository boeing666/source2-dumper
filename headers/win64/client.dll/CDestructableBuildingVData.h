#pragma once

class CDestructableBuildingVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x460, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    float32 m_flEnemyTrooperProtectionRange; // offset 0x28, size 0x4, align 4
    float32 m_flTrooperJumpRange; // offset 0x2C, size 0x4, align 4
    float32 m_flFinishedDyingThink; // offset 0x30, size 0x4, align 4
    char _pad_0034[0x4]; // offset 0x34
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sAmberModelName; // offset 0x38, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sSapphModelName; // offset 0x118, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberDeathParticle; // offset 0x1F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphDeathParticle; // offset 0x2D8, size 0xE0, align 8
    CSoundEventName m_AmberDeathSound; // offset 0x3B8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_SapphDeathSound; // offset 0x3C8, size 0x10, align 8
    int32 m_iMaxHealthFinal; // offset 0x3D8, size 0x4, align 4 | MPropertyStartGroup
    int32 m_iMaxHealthGenerator; // offset 0x3DC, size 0x4, align 4
    int32 m_iMaxHealthGeneratorSecond; // offset 0x3E0, size 0x4, align 4
    char _pad_03E4[0x4]; // offset 0x3E4
    CEmbeddedSubclass< CCitadelModifier > m_PowerGenerator; // offset 0x3E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ObjectiveRegen; // offset 0x3F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BackdoorBulletResistModifier; // offset 0x408, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BackdoorProtectionModifier; // offset 0x418, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_RangedArmorModifier; // offset 0x428, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BarrackBossProtection; // offset 0x438, size 0x10, align 8
    CUtlVector< CEmbeddedSubclass< CCitadelModifier > > m_vecIntrinsicModifiers; // offset 0x448, size 0x18, align 8
};
