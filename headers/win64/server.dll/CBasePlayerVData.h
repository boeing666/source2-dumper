#pragma once

class CBasePlayerVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x270, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // offset 0x28, size 0xE0, align 8 | MPropertyProvidesEditContextString
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelNameAg2Override; // offset 0x108, size 0xE0, align 8 | MPropertyProvidesEditContextString
    CUtlVector< CEmbeddedSubclass< CCitadelModifier > > m_vecIntrinsicModifiers; // offset 0x1E8, size 0x18, align 8
    CSkillFloat m_flHeadDamageMultiplier; // offset 0x200, size 0x10, align 255
    CSkillFloat m_flChestDamageMultiplier; // offset 0x210, size 0x10, align 255
    CSkillFloat m_flStomachDamageMultiplier; // offset 0x220, size 0x10, align 255
    CSkillFloat m_flArmDamageMultiplier; // offset 0x230, size 0x10, align 255
    CSkillFloat m_flLegDamageMultiplier; // offset 0x240, size 0x10, align 255
    float32 m_flHoldBreathTime; // offset 0x250, size 0x4, align 4 | MPropertyGroupName
    float32 m_flDrowningDamageInterval; // offset 0x254, size 0x4, align 4 | MPropertyGroupName MPropertyDescription
    int32 m_nDrowningDamageInitial; // offset 0x258, size 0x4, align 4 | MPropertyGroupName MPropertyDescription
    int32 m_nDrowningDamageMax; // offset 0x25C, size 0x4, align 4 | MPropertyGroupName MPropertyDescription
    int32 m_nWaterSpeed; // offset 0x260, size 0x4, align 4 | MPropertyGroupName
    float32 m_flUseRange; // offset 0x264, size 0x4, align 4 | MPropertyGroupName
    float32 m_flUseAngleTolerance; // offset 0x268, size 0x4, align 4 | MPropertyGroupName
    float32 m_flCrouchTime; // offset 0x26C, size 0x4, align 4 | MPropertyGroupName MPropertyDescription
};
