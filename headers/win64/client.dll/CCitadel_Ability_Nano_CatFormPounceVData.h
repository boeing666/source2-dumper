#pragma once

class CCitadel_Ability_Nano_CatFormPounceVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1530, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AttackParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyGroupName
    CSoundEventName m_strCatFormMeleeSwing; // offset 0x14C8, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flAttackTime; // offset 0x14D8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAttackRange; // offset 0x14DC, size 0x4, align 4
    float32 m_flAttackHalfAngle; // offset 0x14E0, size 0x4, align 4
    float32 m_flAttackConeHalfWidth; // offset 0x14E4, size 0x4, align 4
    float32 m_flMinAttackTime; // offset 0x14E8, size 0x4, align 4
    float32 m_flStopTargetRange; // offset 0x14EC, size 0x4, align 4
    CPiecewiseCurve m_MovementSpeedCurve; // offset 0x14F0, size 0x40, align 8
};
