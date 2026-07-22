#pragma once

class CCitadel_Modifier_T3Phase1VData : public CCitadelModifierVData /*0x0*/  // sizeof 0x920, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    float32 m_flForwardOffset; // offset 0x750, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flPitRadius; // offset 0x754, size 0x4, align 4
    float32 m_flVisualHeight; // offset 0x758, size 0x4, align 4
    float32 m_flRefreshRate; // offset 0x75C, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberPitGroundEffect; // offset 0x760, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SaphhPitGroundEffect; // offset 0x840, size 0xE0, align 8
};
