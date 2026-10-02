#pragma once

class CCitadel_Ability_SettingSun_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x15C8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamTargetParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UnitTargetParticle; // offset 0x14C8, size 0xE0, align 8
    CEmbeddedSubclass< CBaseModifier > m_SettingSunThinkerModifier; // offset 0x15A8, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flSSCameraPreviewOffset; // offset 0x15B8, size 0x4, align 4
    float32 m_flSSCameraPreviewSpeed; // offset 0x15BC, size 0x4, align 4
    float32 m_flSSCameraPreviewDistance; // offset 0x15C0, size 0x4, align 4
    char _pad_15C4[0x4]; // offset 0x15C4
};
