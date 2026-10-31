#pragma once

class CModifierNeutralLobBookAuraVData : public CCitadelModifierAuraVData /*0x0*/  // sizeof 0xAD8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7F0]; // offset 0x0
    float32 m_flBuildupTickInterval; // offset 0x7F0, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flFillTime; // offset 0x7F4, size 0x4, align 4 | MPropertyDescription
    float32 m_flDrainTime; // offset 0x7F8, size 0x4, align 4 | MPropertyDescription
    float32 m_flSleepDuration; // offset 0x7FC, size 0x4, align 4 | MPropertyDescription
    float32 m_flMinSleepTime; // offset 0x800, size 0x4, align 4 | MPropertyDescription
    float32 m_flSleepWakeUpDelay; // offset 0x804, size 0x4, align 4 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RadiusParticle; // offset 0x808, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FloorBurstParticle; // offset 0x8E8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SwirlParticle; // offset 0x9C8, size 0xE0, align 8
    CSoundEventName m_SleepSound; // offset 0xAA8, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
    CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildupModifier; // offset 0xAB8, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
    CEmbeddedSubclass< CCitadelModifier > m_SleepModifier; // offset 0xAC8, size 0x10, align 8 | MPropertyDescription
};
