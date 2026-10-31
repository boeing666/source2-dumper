#pragma once

class CCitadel_Ability_Nurse_HealingNeedleWeaponVData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x1560, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1370]; // offset 0x0
    CPiecewiseCurve m_SpreadPenaltyScaleCurve; // offset 0x1370, size 0x40, align 8 | MPropertyStartGroup
    float32 m_flAllyAutoAimStrengthDistMin; // offset 0x13B0, size 0x4, align 4
    float32 m_flAllyAutoAimStrengthDistMax; // offset 0x13B4, size 0x4, align 4
    float32 m_flAllyAutoAimStrengthMin; // offset 0x13B8, size 0x4, align 4
    float32 m_flAllyAutoAimStrengthMax; // offset 0x13BC, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealingNeedleMuzzleFlashParticle; // offset 0x13C0, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitSound; // offset 0x14A0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitHeadshotSound; // offset 0x14B0, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceBolt; // offset 0x14C0, size 0xA0, align 8 | MPropertyStartGroup
};
