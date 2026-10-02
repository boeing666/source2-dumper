#pragma once

class CModifier_Operative_UmbrellaManeuver_AirHang_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0x970, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x790, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // offset 0x870, size 0xE0, align 8
    CSoundEventName m_ExplodeSound; // offset 0x950, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flAirDrag; // offset 0x960, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAirSpeed; // offset 0x964, size 0x4, align 4
    float32 m_flFallSpeed; // offset 0x968, size 0x4, align 4
    char _pad_096C[0x4]; // offset 0x96C
};
