#pragma once

class CCitadel_Modifier_Nano_PredatoryStatueVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xAD8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticle; // offset 0x798, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnabledParticle; // offset 0x878, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DrainParticle; // offset 0x958, size 0xE0, align 8
    CSoundEventName m_strEnabledSound; // offset 0xA38, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strEnabledLoopSound; // offset 0xA48, size 0x10, align 8
    CSoundEventName m_strDisabledSound; // offset 0xA58, size 0x10, align 8
    CSoundEventName m_strLaserHitSound; // offset 0xA68, size 0x10, align 8
    CSoundEventName m_strLaserStartSound; // offset 0xA78, size 0x10, align 8
    CSoundEventName m_strLaserLoopSound; // offset 0xA88, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // offset 0xA98, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_RevealModifier; // offset 0xAA8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_StatueInvis; // offset 0xAB8, size 0x10, align 8
    float32 m_flNewTargetAttackTime; // offset 0xAC8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flMinRevealTime; // offset 0xACC, size 0x4, align 4
    float32 m_flMinDebuffTime; // offset 0xAD0, size 0x4, align 4
    char _pad_0AD4[0x4]; // offset 0xAD4
};
