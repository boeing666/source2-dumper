#pragma once

class CBasePlayerVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x190, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // offset 0x28, size 0xE0, align 8 | MPropertyProvidesEditContextString
    CUtlVector< CEmbeddedSubclass< CCitadelModifier > > m_vecIntrinsicModifiers; // offset 0x108, size 0x18, align 8
    CSkillFloat m_flHeadDamageMultiplier; // offset 0x120, size 0x10, align 255
    CSkillFloat m_flChestDamageMultiplier; // offset 0x130, size 0x10, align 255
    CSkillFloat m_flStomachDamageMultiplier; // offset 0x140, size 0x10, align 255
    CSkillFloat m_flArmDamageMultiplier; // offset 0x150, size 0x10, align 255
    CSkillFloat m_flLegDamageMultiplier; // offset 0x160, size 0x10, align 255
    float32 m_flHoldBreathTime; // offset 0x170, size 0x4, align 4 | MPropertyGroupName
    float32 m_flDrowningDamageInterval; // offset 0x174, size 0x4, align 4 | MPropertyGroupName MPropertyDescription
    int32 m_nDrowningDamageInitial; // offset 0x178, size 0x4, align 4 | MPropertyGroupName MPropertyDescription
    int32 m_nDrowningDamageMax; // offset 0x17C, size 0x4, align 4 | MPropertyGroupName MPropertyDescription
    int32 m_nWaterSpeed; // offset 0x180, size 0x4, align 4 | MPropertyGroupName
    float32 m_flUseRange; // offset 0x184, size 0x4, align 4 | MPropertyGroupName
    float32 m_flUseAngleTolerance; // offset 0x188, size 0x4, align 4 | MPropertyGroupName
    float32 m_flCrouchTime; // offset 0x18C, size 0x4, align 4 | MPropertyGroupName MPropertyDescription
};
