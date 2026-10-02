#pragma once

class CCitadel_Modifier_T3Phase1VData : public CCitadelModifierVData /*0x0*/  // sizeof 0x960, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    float32 m_flForwardOffset; // offset 0x790, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flPitRadius; // offset 0x794, size 0x4, align 4
    float32 m_flVisualHeight; // offset 0x798, size 0x4, align 4
    float32 m_flRefreshRate; // offset 0x79C, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberPitGroundEffect; // offset 0x7A0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SaphhPitGroundEffect; // offset 0x880, size 0xE0, align 8
};
