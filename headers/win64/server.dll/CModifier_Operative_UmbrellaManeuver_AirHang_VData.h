#pragma once

class CModifier_Operative_UmbrellaManeuver_AirHang_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0x978, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x798, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // offset 0x878, size 0xE0, align 8
    CSoundEventName m_ExplodeSound; // offset 0x958, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flAirDrag; // offset 0x968, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAirSpeed; // offset 0x96C, size 0x4, align 4
    float32 m_flFallSpeed; // offset 0x970, size 0x4, align 4
    char _pad_0974[0x4]; // offset 0x974
};
