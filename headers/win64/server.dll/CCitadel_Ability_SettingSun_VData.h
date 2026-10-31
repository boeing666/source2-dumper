#pragma once

class CCitadel_Ability_SettingSun_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1260, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamTargetParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UnitTargetParticle; // offset 0x1160, size 0xE0, align 8
    CEmbeddedSubclass< CBaseModifier > m_SettingSunThinkerModifier; // offset 0x1240, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flSSCameraPreviewOffset; // offset 0x1250, size 0x4, align 4
    float32 m_flSSCameraPreviewSpeed; // offset 0x1254, size 0x4, align 4
    float32 m_flSSCameraPreviewDistance; // offset 0x1258, size 0x4, align 4
    char _pad_125C[0x4]; // offset 0x125C
};
