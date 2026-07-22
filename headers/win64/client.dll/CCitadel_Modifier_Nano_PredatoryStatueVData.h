#pragma once

class CCitadel_Modifier_Nano_PredatoryStatueVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xA90, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticle; // offset 0x750, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnabledParticle; // offset 0x830, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DrainParticle; // offset 0x910, size 0xE0, align 8
    CSoundEventName m_strEnabledSound; // offset 0x9F0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strEnabledLoopSound; // offset 0xA00, size 0x10, align 8
    CSoundEventName m_strDisabledSound; // offset 0xA10, size 0x10, align 8
    CSoundEventName m_strLaserHitSound; // offset 0xA20, size 0x10, align 8
    CSoundEventName m_strLaserStartSound; // offset 0xA30, size 0x10, align 8
    CSoundEventName m_strLaserLoopSound; // offset 0xA40, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // offset 0xA50, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_RevealModifier; // offset 0xA60, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_StatueInvis; // offset 0xA70, size 0x10, align 8
    float32 m_flNewTargetAttackTime; // offset 0xA80, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flMinRevealTime; // offset 0xA84, size 0x4, align 4
    float32 m_flMinDebuffTime; // offset 0xA88, size 0x4, align 4
    char _pad_0A8C[0x4]; // offset 0xA8C
};
