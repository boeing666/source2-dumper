#pragma once

class CCitadel_Ability_SettingSun_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1580, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamTargetParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UnitTargetParticle; // offset 0x1480, size 0xE0, align 8
    CEmbeddedSubclass< CBaseModifier > m_SettingSunThinkerModifier; // offset 0x1560, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flSSCameraPreviewOffset; // offset 0x1570, size 0x4, align 4
    float32 m_flSSCameraPreviewSpeed; // offset 0x1574, size 0x4, align 4
    float32 m_flSSCameraPreviewDistance; // offset 0x1578, size 0x4, align 4
    char _pad_157C[0x4]; // offset 0x157C
};
